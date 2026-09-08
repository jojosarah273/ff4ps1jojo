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
        post = rows[ti + 1:]
        if len(post) <= 2 and (not post or post[0].startswith(("jr", "nop"))):
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
            if sm in ("sb", "sh", "sw") and "(" in sa:
                # store in the call delay slot: helper(); store;
                aex = R.get("a0")
                cexpr = f"{callee}({aex})" if (aex and not aex.startswith(("0x", "("))) else f"{callee}()"
                R["v0"] = cexpr
                v0_expr = cexpr
                R["a0"] = None
                i += 1
                continue                       # let the store row process
            if sm in ("addiu", "ori") and re.match(r"a1,\s*zero", sa) and \
                    "0x" in sa:
                mt = re.search(r"0x([0-9A-F]+)", sa)
                a1v = int(mt.group(1), 16) if mt else 0
                aex = R.get("a0")
                cexpr = f"{callee}({aex or '0'}, 0x{a1v:X})" if aex else f"{callee}(0, 0x{a1v:X})"
                R["v0"] = cexpr
                v0_expr = cexpr
                R["a0"] = None
                i += 2
                continue
            if sm == "addu" and sa.replace(" ", "").startswith("a1,"):
                mt = re.search(r"(0x[0-9A-F]+|\d+)", sa)
                a1v = int(mt.group(1), 16) if mt else 0
                aex = R.get("a0")
                cexpr = f"{callee}({aex or '0'}, {a1v})" if aex else f"{callee}(0, {a1v})"
                R["v0"] = cexpr
                v0_expr = cexpr
                R["a0"] = None
                i += 2
                continue
            if sm == "addu" and re.match(r"a0,\s*a0", sa) and "+" not in sa:
                pass                             # handled below via general
            if sm == "nop":
                aex = R.get("a0")
                if aex is not None and not aex.startswith("0x"):
                    cexpr = f"{callee}({aex})"
                else:
                    cexpr = f"{callee}()"
            elif sm in ("addiu", "ori") and re.match(r"a0,\s*zero", sa):
                c = int(re.search(r"0x[0-9A-F]+", sa).group(0), 16)
                cexpr = f"{callee}({c})"
            elif "%lo(" in sa and re.match(r"a0,\s*a0", sa):
                fn = sa.split("%lo(")[1].split(")")[0].strip()
                cexpr = f"{callee}((u32){fn})"
            elif sm in ("addiu", "ori") and re.match(r"a0,\s*a0", sa):
                mt = re.search(r"0x[0-9A-F]+", sa)
                c = int(mt.group(0), 16) if mt else 0
                sourced.add("a0")
                cexpr = f"{callee}({R.get('a0', 'a0')} + {c})"
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
            R["a0"] = None
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
                return None                     # 2-way select: manual pass
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
            c2 = None
            try:
                c2 = lift_2way(n)
            except Exception:
                c2 = None
            if c2 is None:
                failed += 1
                continue
            c = c2
        (SRC / f"{n}.c").write_text(c)
        lifted += 1
    print(f"lift_leaf done: lifted={lifted} failed={failed}")


if __name__ == "__main__":
    main()

# ===== 2-way value-selection lifter (per-arm register simulation) =====
_SIM_ALU = re.compile(r"(\w+),\s*(\w+),\s*(.+)")
_SIM_GP = re.compile(r"%gp_rel\((\w+)\)\(gp\)")
_SIM_LO = re.compile(r"%lo\((\w+)\)\((\w+)\)")
_SIM_OFF = re.compile(r"(\w+),\s*([\w\-]+)\((\w+)\)")


def _sim_rows(rows, lo, hi, R, outs, gsizes):
    """Simulate straight-line rows [lo,hi) on register dict R."""
    i = lo
    while i < hi:
        insn = rows[i]
        if insn.startswith(".L"):
            i += 1
            continue
        m = insn.split(None, 1)
        op, a = m[0], (m[1] if len(m) > 1 else "").replace("$", "")
        if op in ("nop", "jr", "j", "beq", "bne", "beqz", "bnez", "blez",
                  "bgtz", "bltz", "bgez"):
            i += 1
            continue
        if op == "lui":
            m32 = re.match(r"(\w+),\s*\(0x([0-9A-F]+) >> 16\)", a)
            if m32:
                R[m32.group(1)] = f"0x{int(m32.group(2),16) & 0xFFFF0000:X}"
            else:
                return None
            i += 1
            continue
        if op.startswith("l") and op != "lui":
            if "%gp_rel" in a:
                dst = re.match(r"(\w+),\s*%gp_rel", a).group(1)
                sym = _SIM_GP.search(a).group(1)
                gsizes.setdefault(sym, 32 if op in ("lw",) else 8)
                R[dst] = sym
            elif "%lo(" in a:
                lm = _SIM_LO.search(a)
                dst = re.match(r"(\w+),\s*%lo", a).group(1)
                sym = lm.group(1)
                gsizes.setdefault(sym, 32)
                R[dst] = sym + "[0]"
            else:
                mm = _SIM_OFF.match(a)
                if not mm:
                    return None
                dst, off, base = mm.group(1), mm.group(2), mm.group(3)
                bx = R.get(base, "?")
                if bx == "?":
                    return None
                if op in ("lbu", "lb", "lhu", "lh"):
                    cast = {"lbu": "u8", "lb": "s8", "lhu": "u16", "lh": "s16"}[op]
                    R[dst] = f"({cast})*(volatile u8*)({bx} + {off})"
                else:
                    R[dst] = f"*((volatile u32*)({bx} + {off}))"
            i += 1
            continue
        if op in ("sw", "sb", "sh"):
            return None                     # stores inside arms: bail
        ma = _SIM_ALU.match(a)
        if op in ("addiu", "addu", "subu", "and", "or", "xor", "andi", "ori",
                  "sll", "srl", "sra", "slt", "sltu", "move", "xori"):
            if not ma:
                return None
            d, s1, s2 = ma.group(1), ma.group(2), ma.group(3)
            e1 = R.get(s1)
            if e1 is None:
                return None
            if s2.lstrip("-").lower().startswith("0x") or s2.lstrip("-").isdigit():
                e2 = s2
            else:
                e2 = R.get(s2)
                if e2 is None:
                    return None
            expr = {"addiu": f"({e1} + {e2})", "addu": f"({e1} + {e2})",
                    "subu": f"({e1} - {e2})", "and": f"({e1} & {e2})",
                    "or": f"({e1} | {e2})", "xor": f"({e1} ^ {e2})",
                    "andi": f"({e1} & {e2})", "ori": f"({e1} | {e2})",
                    "xori": f"({e1} ^ {e2})", "sll": f"({e1} << {e2})",
                    "srl": f"((u32)({e1}) >> {e2})",
                    "sra": f"((s32)({e1}) >> {e2})",
                    "slt": f"((s32)({e1}) < (s32)({e2}))",
                    "sltu": f"((u32)({e1}) < (u32)({e2}))",
                    "move": e1}.get(op)
            if expr is None:
                return None
            R[d] = expr
            i += 1
            continue
        return None
    return True


def lift_2way(name):
    """value-selection 2-way: [pre] bCOND mid; arm1; j last; mid: arm2;
    last: epilogue store. Both arms register-only. Emits if/else value pick."""
    rows = rows_of(name)
    if len(rows) > 70:
        return None
    label_i = {r[:-1]: k for k, r in enumerate(rows) if r.startswith(".L")}
    branch = None
    for k, insn in enumerate(rows):
        m = insn.split(None, 1)
        if m and m[0] in ("beq", "bne", "beqz", "bnez", "blez", "bgtz", "bltz", "bgez"):
            a = (m[1] if len(m) > 1 else "").replace("$", "")
            mm = re.match(r"(\w+),\s*(\w+),\s*(\.L[0-9A-F]+)", a)
            tgt = None
            if mm:
                tgt = mm.group(3)
            else:
                mm = re.match(r"(\w+),\s*(\.L[0-9A-F]+)", a)
                if mm:
                    tgt = mm.group(2)
            if tgt and branch is None:
                branch = (k, m[0], mm, tgt)
            elif tgt:
                return None                     # multi-branch: bail
    if branch is None:
        return None
    bi, bop, bmm, tmid = branch
    if tmid not in label_i:
        return None
    mi = label_i[tmid]
    # find j row to last label after the branch
    last_lab = [r[:-1] for r in rows if r.startswith(".L")][-1]
    ji = None
    for k in range(bi + 1, len(rows)):
        if rows[k].startswith("j ") and (last_lab in rows[k]):
            ji = k
            break
    if ji is None:
        return None
    li = label_i[last_lab]
    # arm rows (skip branch slot row: bi+1; it executes on both paths -> pre-tail)
    pre_hi = bi + 1                    # the slot row: runs both paths
    arm1 = list(range(bi + 2, ji + 1))          # include j's slot row
    arm2 = list(range(mi + 1, li))
    gsizes = {}
    R1 = {}
    if not _sim_rows(rows, 0, bi + 2, R1, [], gsizes):
        return None
    R2 = dict(R1)
    if not _sim_rows(rows, bi + 2, ji + 1, R1, [], gsizes):
        return None
    if not _sim_rows(rows, mi + 1, li, R2, [], gsizes):
        return None
    # epilogue store
    epi = rows[li + 1:]
    store = None
    for e in epi:
        if e.startswith(("sb", "sh", "sw")):
            store = e
            break
    if store is None or any(e.startswith(("jal", "j ")) for e in epi):
        return None
    sm = store.split(None, 1)
    sa = (sm[1] if len(sm) > 1 else "").replace("$", "")
    if "%gp_rel" in sa:
        dst = _SIM_GP.search(sa).group(1)
        src = re.match(r"(\w+),\s*%gp_rel", sa).group(1)
    else:
        mm = re.match(r"(\w+),\s*[\w\-]+\((\w+)\)", sa)
        if not mm:
            return None
        src, base = mm.group(1), mm.group(2)
        bex = R1.get(base)
        if not bex or not re.match(r"D_[0-9A-F]+$", bex):
            return None
        dst = bex
    e1, e2 = R1.get(src), R2.get(src)
    if e1 is None or e2 is None:
        return None
    # condition
    if bop == "beq":
        c_expr = f"({R1.get(bmm.group(1), bmm.group(1))} == \
                   {R1.get(bmm.group(2), bmm.group(2))})"
    elif bop == "bne":
        c_expr = f"({R1.get(bmm.group(1), bmm.group(1))} != \
                   {R1.get(bmm.group(2), bmm.group(2))})"
    elif bop in ("bnez", "blez", "bgtz", "bltz", "bgez"):
        rs = bmm.group(1)
        x = R1.get(rs, rs)
        zc = {"bnez": f"({x} != 0)", "blez": f"((s32)({x}) <= 0)",
              "bgtz": f"((s32)({x}) > 0)", "bltz": f"((s32)({x}) < 0)",
              "bgez": f"((s32)({x}) >= 0)"}[bop]
        c_expr = zc
    elif bop == "beqz":
        c_expr = f"({R1.get(bmm.group(1), bmm.group(1))} == 0)"
    else:
        return None
    cast = "u8" if store.startswith("sb") else "u32"
    n1 = f"({cast})({e1})"
    n2 = f"({cast})({e2})"
    c = (f'#include "common.h"\n'
         f'extern {cast} *{dst};\n'
         f'void {name}(void)\n{{\n'
         f'    if ({c_expr})\n'
         f'        *{dst} = {n1};\n'
         f'    else\n'
         f'        *{dst} = {n2};\n'
         f'}}\n')
    return c
    sm = store.split(None, 1)
    sa = (sm[1] if len(sm) > 1 else "").replace("$", "")
    if "%gp_rel" in sa:
        dst = _SIM_GP.search(sa).group(1)
        src = re.match(r"(\w+),\s*%gp_rel", sa).group(1)
        e1, e2 = R1.get(src), R2.get(src)
        if e1 is None or e2 is None:
            return None
        # condition
        if bop in ("beq", "bne") and bmm:
            rs, rt = bmm.group(1), R.get if False else None
            rt = R1.get(bmm.group(2), bmm.group(2))
            c_expr = f"({R1.get(bmm.group(1), bmm.group(1))} == {rt})" if bop == "beq" else \
                     f"({R1.get(bmm.group(1), bmm.group(1))} != {rt})"
        else:
            rs = re.match(r"(\w+),\s*(\.L|)", sa)  # placeholder
            c_expr = f"({R1.get(bmm.group(1), bmm.group(1))} != 0)" if bop == "bnez" else \
                     f"({R1.get(bmm.group(1), bmm.group(1))} == 0)"
        gsizes.setdefault(dst, 8 if store.startswith("sb") else 32)
        dline = f"extern {'u8' if gsizes.get(dst) == 8 else 'u32'} *{dst};"
        # arm1 = taken path value, arm2 = else value
        c = (f'#include "common.h"\n{dline}\n'
             f'void {name}(void)\n{{\n'
             f'    u8 v = ({e1}) if false else 0;\n'
             f'    if ({c_expr}) {{\n'
             f'        *{dst} = (u8)({e1});\n'
             f'    }} else {{\n'
             f'        *{dst} = (u8)({e2});\n'
             f'    }}\n'
             f'}}\n')
        return c
    return None
