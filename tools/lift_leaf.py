#!/usr/bin/env python3
"""lift_leaf.py — auto-lift straight-line leaf functions (no branches) to C.

Handles: gp-relative + absolute global access, MMIO fixed-address access,
argument registers, pointer derefs, ALU chains, final store/return.
Emitted src/<n>.c candidates are verified/registered with tools/match.py.
--mode-b regenerates functions ending in a store using the temp-return shape
(reads v0 as a statement, returns it; use when mode A fails byte-match).

Usage: python3 tools/lift_leaf.py [--mode-b] [NAME...]  (default: all leaves)
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
ASM = ROOT / "asm" / "nonmatchings" / "main"
SRC = ROOT / "src"
MATCHED = ROOT / "expected" / "matched"

ROWS = re.compile(r"^\s*/\* [0-9A-F]+ [0-9A-F]+ ([0-9A-F]{8}) \*/\s*(.+?)\s*$")
GP = re.compile(r"%gp_rel\((\w+)\)\(gp\)")
ABS = re.compile(r"%hi\((\w+)\)")
LO = re.compile(r"%lo\((\w+)\)\((\w+)\)")
OFFSET = re.compile(r"(\w+),\s*([\w\-]+)\((\w+)\)")
ALU = re.compile(r"(\w+),\s*(\w+),\s*(.+)")

MAX_ROWS = 26


def rows_of(name):
    out = []
    for raw in (ASM / f"{name}.s").read_text(errors="replace").splitlines():
        m = ROWS.match(raw)
        if m:
            out.append(m.group(2).strip())
    return out


def _store_str(op, e):
    return f"((u8){e})" if op == "sb" else e


def lift(name, mode_b=False):
    rows = rows_of(name)
    if len(rows) > MAX_ROWS:
        return None
    R = {}
    ABSBASE = {}
    decls = {}
    sourced = set()
    outs = []
    last_kind = None
    last_store = None        # (stmt_text, lhs, rhs) for mode A return
    v0_expr = None

    def decl(sym, abs_, op):
        w = "u32" if op in ("sw", "lw", "lh", "lhu") else (
            "u16" if op in ("sh", "lhu", "lh") else "u8")
        decls.setdefault(sym, (w, abs_))

    i = 0
    while i < len(rows):
        insn = rows[i]
        m = insn.split(None, 1)
        op = m[0]
        args = (m[1] if len(m) > 1 else "").replace("$", "")
        if op in ("nop",):
            i += 1
            continue
        if op == "jr" and args.strip() == "ra":
            i += 1
            continue
        if op in ("beq", "bne", "blez", "bgtz", "bltz", "bgez", "beqz", "bnez",
                  "jal", "j", "jalr"):
            return None
        if op == "lui":
            g = ABS.search(args)
            m32 = re.match(r"(\w+),\s*\(0x([0-9A-F]+) >> 16\)", args)
            if g and m32 is None:
                ABSBASE[re.match(r"(\w+),", args).group(1)] = g.group(1)
            elif m32:
                R[m32.group(1)] = f"0x{int(m32.group(2), 16) << 16:X}"
            elif re.match(r"\w+,\s*\(0x[0-9A-F]+ & 0xFFFF\)", args):
                mm = re.match(r"(\w+),\s*\(0x([0-9A-F]+) & 0xFFFF\)", args)
                R[mm.group(1)] = "0x" + mm.group(2)
            else:
                return None
            i += 1
            continue
        if op.startswith("l") and op != "lui":
            if "%gp_rel" in args:
                dst = re.match(r"(\w+),\s*%gp_rel", args).group(1)
                sym = GP.search(args).group(1)
                decl(sym, False, op)
                e = sym
            elif "%lo(" in args:
                lm = LO.search(args)
                dst = re.match(r"(\w+),\s*%lo", args).group(1)
                base = lm.group(2)
                if base not in ABSBASE:
                    return None
                sym = ABSBASE[base]
                decl(sym, True, op)
                e = sym + "[0]"
            else:
                mm = OFFSET.match(args)
                if not mm:
                    return None
                dst, off, base = mm.group(1), mm.group(2), mm.group(3)
                bx = R.get(base, base)
                if base in ("a0", "a1", "a2", "a3"):
                    sourced.add(base)
                if op in ("lbu", "lb", "lhu", "lh"):
                    cast = {"lbu": "u8", "lb": "s8", "lhu": "u16", "lh": "s16"}[op]
                    e = f"({cast})((volatile u8*)({bx}))[{off}]"
                else:
                    e = f"((volatile u32*)({bx}))[{off}]"
            R[dst] = e
            if dst == "v0":
                v0_expr = e
            last_kind = "load"
            i += 1
            continue
        if op in ("sw", "sb", "sh"):
            if "%gp_rel" in args:
                src = re.match(r"(\w+),\s*%gp_rel", args).group(1)
                sym = GP.search(args).group(1)
                decl(sym, False, op)
                if src in ("a0", "a1", "a2", "a3"):
                    sourced.add(src)
                lhs, rhs = sym, _store_str(op, R.get(src, src))
                outs.append(f"{sym} = {rhs};")
            elif "%lo(" in args:
                lm = LO.search(args)
                src = re.match(r"(\w+),\s*%lo", args).group(1)
                base = lm.group(2)
                if base not in ABSBASE:
                    return None
                sym = ABSBASE[base]
                decl(sym, True, op)
                if src in ("a0", "a1", "a2", "a3"):
                    sourced.add(src)
                lhs, rhs = sym + "[0]", _store_str(op, R.get(src, src))
                outs.append(f"{sym}[0] = {rhs};")
            else:
                mm = OFFSET.match(args)
                if not mm:
                    return None
                src, off, base = mm.group(1), mm.group(2), mm.group(3)
                bx = R.get(base, base)
                if src in ("a0", "a1", "a2", "a3"):
                    sourced.add(src)
                lhs, rhs = f"((volatile u8*)({bx}))[{off}]", _store_str(
                    op, R.get(src, src))
                outs.append(f"{lhs} = {rhs};")
            last_kind = "store"
            last_store = (lhs, rhs)
            i += 1
            continue
        ma = ALU.match(args)
        if op in ("addiu", "addu", "subu", "and", "or", "xor", "andi", "ori",
                  "sll", "srl", "sra", "slt", "sltu", "move", "nor"):
            if not ma:
                return None
            d, s1, s2 = ma.group(1), ma.group(2), ma.group(3)
            if s1 in ("a0", "a1", "a2", "a3"):
                sourced.add(s1)
            e1 = R.get(s1, s1)
            mc = re.match(r"\(0x([0-9A-F]+) & 0xFFFF\)", s2)
            e2 = ("0x" + mc.group(1)) if mc else (
                s2 if s2.lstrip("-").lower().startswith("0x")
                or s2.lstrip("-").isdigit() else R.get(s2, s2))
            expr = {
                "addiu": f"({e1} + {e2})",
                "addu": f"({e1} + {e2})",
                "subu": f"({e1} - {e2})",
                "and": f"({e1} & {e2})",
                "or": f"({e1} | {e2})",
                "xor": f"({e1} ^ {e2})",
                "nor": f"~({e1} | {e2})",
                "andi": f"({e1} & {e2})",
                "ori": f"({e1} | {e2})",
                "sll": f"({e1} << {e2})",
                "srl": f"((u32)({e1}) >> {e2})",
                "sra": f"((s32)({e1}) >> {e2})",
                "slt": f"((s32)({e1}) < (s32)({e2}))",
                "sltu": f"((u32)({e1}) < (u32)({e2}))",
                "move": e1,
            }[op]
            R[d] = expr
            if d == "v0":
                v0_expr = expr
            last_kind = "alu"
            i += 1
            continue
        return None
    if not outs and not v0_expr:
        return None
    # return shape
    retline = ""
    if outs and last_kind == "store":
        if mode_b:
            tmp = v0_expr if v0_expr else R.get("v0", None)
            if tmp is None:
                return None
            stmts = [f"    u32 tmp = {tmp};"] + [o for o in outs] + \
                    [f"    return tmp;"]
            retline = ""
            body = "".join(o + "\n" for o in stmts)
        else:
            lhs, rhs = last_store
            outs[-1] = ""                      # last store becomes return
            body = "".join(f"    {o}\n" for o in outs if o)
            retline = f"    return ({lhs} = {rhs});\n"
    elif v0_expr:
        body = "".join(f"    {o}\n" for o in outs)
        retline = f"    return {v0_expr};\n"
    else:
        body = "".join(f"    {o}\n" for o in outs)
    dlines = "\n".join(
        f"extern {w}{' ' + s + '[8]' if abs_ else ' ' + s};"
        for s, (w, abs_) in sorted(decls.items()))
    params = [r for r in ("a0", "a1", "a2", "a3") if r in sourced]
    sig = ", ".join(f"u32 {p}" for p in params) or "void"
    return (f'#include "common.h"\n{dlines}\n'
            f'void {name}({sig})\n{{\n{body}{retline}}}\n')


def main():
    mode_b = "--mode-b" in sys.argv
    args = [a for a in sys.argv[1:] if not a.startswith("--")]
    names = args or sorted(
        p.stem for p in ASM.glob("func_*.s")
        if "__asm__" in (SRC / f"{p.stem}.c").read_text(errors="replace")
        if not (MATCHED / f"{p.stem}.o").exists())
    lifted = failed = 0
    for n in names:
        c = lift(n, mode_b)
        if c is None:
            failed += 1
            continue
        (SRC / f"{n}.c").write_text(c)
        lifted += 1
        print(f"  lifted {n}")
    print(f"lift_leaf done: lifted={lifted} failed={failed}")


if __name__ == "__main__":
    main()