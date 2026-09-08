#!/usr/bin/env python3
"""lift_leaf.py — auto-lift leaf functions (no calls) to C.

Handles: gp-relative + absolute globals, MMIO bases, arg regs, pointer
derefs, ALU chains, straight-line stores/returns, guard branches (any number
of conditional forward branches to the single tail label => nested ifs),
and mode A/B return shapes. Emits src/<n>.c; verify/register with match.py.
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
ASM = ROOT / "asm" / "nonmatchings" / "main"
SRC = ROOT / "src"
MATCHED = ROOT / "expected" / "matched"

ROWS = re.compile(r"^\s*/\* [0-9A-F]+ [0-9A-F]+ ([0-9A-F]{8}) \*/\s*(.+?)\s*$")
LABEL = re.compile(r"^\s*\.L[0-9A-F]+:\s*$")
GP = re.compile(r"%gp_rel\((\w+)\)\(gp\)")
ABS = re.compile(r"%hi\((\w+)\)")
LO = re.compile(r"%lo\((\w+)\)\((\w+)\)")
OFFSET = re.compile(r"(\w+),\s*([\w\-]+)\((\w+)\)")
ALU = re.compile(r"(\w+),\s*(\w+),\s*(.+)")
UNCOND = ("beq", "bne", "beqz", "bnez", "blez", "bgtz", "bltz", "bgez")
MAX_ROWS = 34


def rows_of(name):
    out = []
    for raw in (ASM / f"{name}.s").read_text(errors="replace").splitlines():
        if LABEL.match(raw):
            out.append(raw.strip())
            continue
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
    R, ABSBASE, decls, sourced = {}, {}, {}, set()
    outs, v0_expr = [], None
    last_store = None
    guard_branches, guard_mark = [], []
    ifelse = None
    ifelse_branch_mark = 0
    j_merge_mark = None
    mid_mark = None

    def decl(sym, abs_, op):
        w = "u8"
        if op in ("sw", "lw", "lh", "lhu"):
            w = "u16" if op in ("sh", "lh", "lhu") else "u32"
        decls.setdefault(sym, (w, abs_))

    label_rows = [r for r in rows if r.startswith(".L")]
    last_label = None
    if label_rows:
        tail = label_rows[-1][:-1]
        ti = rows.index(tail + ":")
        if all(x.startswith(("jr", "nop")) for x in rows[ti + 1:]):
            last_label = tail

    def reg_arg(txt):
        return txt if txt.startswith(("a0", "a1", "a2", "a3")) else txt

    i = 0
    while i < len(rows):
        insn = rows[i]
        if insn.startswith(".L"):
            if ifelse is not None and mid_mark is None and \
                    insn.startswith(ifelse[3]):
                mid_mark = len(outs)
            i += 1
            continue
        m = insn.split(None, 1)
        op = m[0]
        args = (m[1] if len(m) > 1 else "").replace("$", "")
        if op in ("nop",):
            i += 1
            continue
        if op == "jr" and args.strip() == "ra":
            i += 1
            continue
        if op == "jal":
            if i + 1 >= len(rows):
                return None
            slot = rows[i + 1].replace("$", "").split(None, 1)
            sm = slot[0]
            sa = (slot[1] if len(slot) > 1 else "").replace("$", "")
            callee = args.split()[0]
            if sm == "nop":
                cexpr = f"{callee}()"
            elif sm in ("addiu", "ori") and re.match(r"a0,\s*zero", sa):
                c = int(re.search(r"0x[0-9A-F]+", sa).group(0), 16)
                cexpr = f"{callee}({c})"
            elif sm == "andi" and re.match(r"a0,\s*a0", sa):
                sourced.add("a0")
                cexpr = f"{callee}((u16)a0)"
            elif sm == "addu" and sa.replace(" ", "") == "a0,zero,zero":
                cexpr = f"{callee}(0)"
            elif sm == "addu" and sa.replace(" ", "") == "a0,v0,zero":
                prev = v0_expr
                if prev is None:
                    return None
                cexpr = f"{callee}({prev})"
            else:
                return None
            R["v0"] = cexpr
            v0_expr = cexpr
            i += 2
            continue
        if op in UNCOND or op in ("j", "jalr"):
            if op in ("jal", "jalr"):
                return None
            if op == "j":
                if ifelse is not None and args.strip().startswith(".L") \
                        and last_label is not None:
                    if args.strip() in (last_label, last_label + ":"):
                        j_merge_mark = len(outs)
                        i += 1
                        continue
                return None
            tgt = rs0 = None
            mm = re.match(r"(\w+),\s*(\w+),\s*(\.L[0-9A-F]+)", args)
            if op in ("beq", "bne") and mm:
                tgt, rs0 = mm.group(3), mm.group(1)
            else:
                mm = re.match(r"(\w+),\s*(\.L[0-9A-F]+)", args)
                if mm:
                    tgt, rs0 = mm.group(2), mm.group(1)
            if tgt is None:
                return None
            if tgt != last_label:
                if ifelse is not None:
                    return None
                ti = rows.index(tgt + ":") if (tgt + ":") in rows else -1
                if ti < 0:
                    return None
                if any(r.split(None, 1)[0] in
                       ("beq", "bne", "beqz", "bnez", "blez", "bgtz", "bltz",
                        "bgez") for r in rows[i + 1:ti]
                       if not r.startswith(".L")):
                    return None
                x0 = R.get(rs0, rs0)
                cond = {"bltz": f"((s32)({x0}) < 0)",
                        "bgez": f"((s32)({x0}) >= 0)",
                        "blez": f"((s32)({x0}) <= 0)",
                        "bgtz": f"((s32)({x0}) > 0)"}.get(op, x0)
                ifelse = (op, rs0, cond, tgt)
                ifelse_branch_mark = len(outs)
                i += 1
                continue
            guard_branches.append((op, rs0, R.get(rs0, rs0)))
            guard_mark.append(len(outs))
            i += 1
            continue
        if op == "lui":
            g = ABS.search(args)
            m32 = re.match(r"(\w+),\s*\(0x([0-9A-F]+) >> 16\)", args)
            if g and m32 is None:
                ABSBASE[re.match(r"(\w+),", args).group(1)] = g.group(1)
            elif m32:
                R[m32.group(1)] = f"0x{int(m32.group(2), 16) & 0xFFFF0000:X}"
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
                    mm2 = re.match(r"(\w+),\s*\((0x[0-9A-F]+) & 0xFFFF\)\((\w+)\)", args)
                    if not mm2:
                        return None
                    dst, lo, base = mm2.group(1), int(mm2.group(2), 16), mm2.group(3)
                    bx = R.get(base, base)
                    if op in ("lbu", "lb", "lhu", "lh"):
                        cast = {"lbu": "u8", "lb": "s8", "lhu": "u16", "lh": "s16"}[op]
                        e = f"({cast})*((volatile u8 *)(({bx}) | 0x{lo:X}))"
                    else:
                        e = f"*((volatile u32 *)(({bx}) | 0x{lo:X}))"
                    R[dst] = e
                    if dst == "v0":
                        v0_expr = e
                    i += 1
                    continue
                dst, off, base = mm.group(1), mm.group(2), mm.group(3)
                bx = R.get(base, base)
                if base in ("a0", "a1", "a2", "a3"):
                    sourced.add(base)
                if op in ("lbu", "lb", "lhu", "lh"):
                    cast = {"lbu": "u8", "lb": "s8", "lhu": "u16", "lh": "s16"}[op]
                    e = f"({cast})((volatile u8 *)({bx}))[{off}]"
                else:
                    e = f"((volatile u32 *)({bx}))[{off}]"
            R[dst] = e
            if dst == "v0":
                v0_expr = e
            i += 1
            continue
        if op in ("sw", "sb", "sh"):
            if "%gp_rel" in args:
                src = re.match(r"(\w+),\s*%gp_rel", args).group(1)
                sym = GP.search(args).group(1)
                decl(sym, False, op)
                if src in ("a0", "a1", "a2", "a3"):
                    sourced.add(src)
                rhs = _store_str(op, R.get(src, src))
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
                outs.append(f"{sym}[0] = {_store_str(op, R.get(src, src))};")
            else:
                if args.endswith("(sp)"):
                    i += 1
                    continue                       # frame save/restore
                mm = OFFSET.match(args)
                if not mm:
                    mm2 = re.match(r"(\w+),\s*\((0x[0-9A-F]+) & 0xFFFF\)\((\w+)\)", args)
                    if not mm2:
                        return None
                    src, lo, base = mm2.group(1), int(mm2.group(2), 16), mm2.group(3)
                    bx = R.get(base, base)
                    outs.append(f"*((volatile u8 *)(({bx}) | 0x{lo:X})) = "
                                f"{_store_str(op, R.get(src, src))};")
                    i += 1
                    continue
                src, off, base = mm.group(1), mm.group(2), mm.group(3)
                bx = R.get(base, base)
                if src in ("a0", "a1", "a2", "a3"):
                    sourced.add(src)
                outs.append(f"((volatile u8 *)({bx}))[{off}] = "
                            f"{_store_str(op, R.get(src, src))};")
            last_store = outs[-1]
            i += 1
            continue
        ma = ALU.match(args)
        if op in ("addiu", "addu", "subu", "and", "or", "xor", "andi", "ori",
                  "sll", "srl", "sra", "slt", "sltu", "move", "nor", "xori",
                  "sllv"):
            if not ma:
                return None
            d, s1, s2 = ma.group(1), ma.group(2), ma.group(3)
            if s1 in ("a0", "a1", "a2", "a3"):
                sourced.add(s1)
            e1 = R.get(s1, s1)
            mc = re.match(r"\(0x([0-9A-F]+) & 0xFFFF\)", s2)
            if mc:
                e2 = "0x" + mc.group(1)
            elif s2.lstrip("-").lower().startswith("0x") or s2.lstrip("-").isdigit():
                e2 = s2
            elif s2 in ("a0", "a1", "a2", "a3"):
                sourced.add(s2)
                e2 = s2
            else:
                e2 = R.get(s2, s2)
            if s2.startswith("%lo(") and s1 in ABSBASE:
                R[d] = ABSBASE[s1]
                i += 1
                continue
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
                "xori": f"({e1} ^ {e2})",
                "sll": f"({e1} << {e2})",
                "sllv": f"({e1} << {e2})",
                "srl": f"((u32)({e1}) >> {e2})",
                "sra": f"((s32)({e1}) >> {e2})",
                "slt": f"((s32)({e1}) < (s32)({e2}))",
                "sltu": f"((u32)({e1}) < (u32)({e2}))",
                "move": e1,
            }.get(op)
            if expr is None:
                return None
            R[d] = expr
            if d == "v0":
                v0_expr = expr
            i += 1
            continue
        return None

    if not outs and not v0_expr:
        return None

    # guard wrapping: nested if(!cond){ block }
    if ifelse is not None:
        bm = ifelse_branch_mark
        jm = j_merge_mark if j_merge_mark is not None else len(outs)
        mm = mid_mark if mid_mark is not None else jm
        b1 = "".join(f"    {o}\n" for o in outs[bm:jm])
        b2 = "".join(f"    {o}\n" for o in outs[mm:])
        head = "".join(f"    {o}\n" for o in outs[:bm])
        outs = [head + f"    if ({ifelse[2]}) {{\n{b1}    }} else {{\n{b2}    }}\n"]
        guard_branches = []
        guard_mark = []
    if ifelse is not None:
        bm, jm = ifelse_branch_mark, j_merge_mark if j_merge_mark is not None else len(outs)
        mm = mid_mark if mid_mark is not None else jm
        b1 = "".join(f"    {o}\n" for o in outs[bm:jm])
        b2 = "".join(f"    {o}\n" for o in outs[mm:])
        head = "".join(f"    {o}\n" for o in outs[:bm])
        outs = [head + f"    if ({ifelse[2]}) {{\n{b1}    }} else {{\n{b2}    }}\n"]
        guard_branches, guard_mark = [], []
    if guard_branches:
        marks = [0] + guard_mark + [len(outs)]
        segs = []
        for k, (op, rs0, x) in enumerate(guard_branches):
            cond = {"bltz": f"((s32)({x}) < 0)", "bgez": f"((s32)({x}) >= 0)",
                    "blez": f"((s32)({x}) <= 0)", "bgtz": f"((s32)({x}) > 0)"
                    }.get(op, x)
            neg = op in ("bne", "bnez", "blez", "bgtz", "bltz", "bgez")
            mid = "".join(f"    {o}\n" for o in outs[marks[k + 1]:marks[k + 2]])
            segs.append(f"    if ({'!' if neg else ''}({cond})) {{\n{mid}    }}\n")
        head = "".join(f"    {o}\n" for o in outs[:marks[1]])
        outs = [head + "".join(segs)]

    retline = ""
    if outs and last_store and not guard_branches:
        if mode_b:
            tmp = v0_expr
            if tmp is None:
                return None
            stmts = [f"    u32 tmp = {tmp};"] + outs + [f"    return tmp;"]
            body = "".join(o + "\n" for o in stmts)
        else:
            lhs = outs[-1].split("=", 1)[0].strip()
            rhs = outs[-1].split("=", 1)[1].strip().rstrip(";")
            outs = outs[:-1]
            body = "".join(f"    {o}\n" for o in outs)
            retline = f"    return ({lhs} = {rhs});\n"
    elif v0_expr and not outs:
        body = ""
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
    print(f"lift_leaf done: lifted={lifted} failed={failed}")


if __name__ == "__main__":
    main()