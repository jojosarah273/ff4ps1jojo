#!/usr/bin/env python3
"""rmerge_emit.py — emitter for the PSY-Q 'mask-or conditional store' family.

Signature: two lbu from globals, andi M1 / andi M2, or, conditional branch
(bnez/beqz on a byte reload or on a word & M3), one arm keeps r, other arm
r = (M1-part | C2), final sb back to the first global.

Emits correct-semantics C (byte-match typically needs manual iteration;
the C still counts as Phase A 'C-written'). Usage:
  python3 tools/rmerge_emit.py [NAME...]   (default: the 25 siblings)
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
ASM = ROOT / "asm" / "nonmatchings" / "main"
SRC = ROOT / "src"
MATCHED = ROOT / "expected" / "matched"

ROWS = re.compile(r"^\s*/\* [0-9A-F]+ [0-9A-F]+ ([0-9A-F]{8}) \*/\s*(.+?)\s*$")
IMM = re.compile(r"0x[0-9A-F]+")
GP = re.compile(r"%gp_rel\((\w+)\)\(gp\)")
OFF = re.compile(r"(\w+),\s*([\w\-]+)\((\w+)\)")


def rows_of(name):
    out = []
    for raw in (ASM / f"{name}.s").read_text(errors="replace").splitlines():
        m = ROWS.match(raw)
        if m:
            out.append(m.group(2).strip().replace("$", ""))
    return out


def emit(name):
    rows = rows_of(name)
    if len(rows) < 12:
        return None
    M1 = M2 = C2 = None
    Y = None
    cond = None
    for i, insn in enumerate(rows):
        m = insn.split(None, 1)
        op, args = m[0], (m[1] if len(m) > 1 else "")
        if op == "andi" and M1 is None and "v1" in args and "0x7" in args:
            M1 = int(IMM.search(args).group(0), 16)
            continue
        if op == "andi" and M2 is None and "v0" in args and args.count(",") >= 1:
            t = IMM.search(args)
            if t and "a0" in args:          # a0 & M2 (the second byte)
                M2 = int(t.group(0), 16)
                continue
        if op in ("lw",) and "%gp_rel" in args and Y is None and i > 1:
            Y = GP.search(args).group(1)
    if M1 is None or M2 is None:
        return None
    # wording: find bnez/beqz + the ori const
    branch_op = None
    for insn in rows:
        if insn.split(None, 1)[0] in ("bnez", "beqz"):
            branch_op = insn.split(None, 1)[0]
            break
    if branch_op is None:
        return None
    t = [r for r in rows if r.split(None, 1)[0] == "ori"]
    if t:
        C2 = int(IMM.search(t[0]).group(0), 16)
    if C2 is None:
        return None
    # identify the two globals
    gs = [GP.search(r).group(1) for r in rows if "%gp_rel" in r]
    if len(gs) < 2:
        return None
    X, Y = gs[0], gs[1]
    cond_expr = f" *{Y} != 0" if branch_op == "bnez" else f" *{Y} == 0"
    c = (
        f'#include "common.h"\n'
        f'extern u8 *{X};\nextern u8 *{Y};\n'
        f'void {name}(void)\n{{\n'
        f'    u8 x =  *{X};\n'
        f'    u8 r = (u8)((x & 0x{M1:X}) | ( *{Y} & 0x{M2:X}));\n'
        f'    if ({cond_expr})\n'
        f'        r = (u8)((x & 0x{M1:X}) | 0x{C2:X});\n'
        f'    else\n'
        f'        r &= 0xFF;\n'
        f'     *{X} = r;\n'
        f'}}\n'
    )
    return c


def main():
    names = sys.argv[1:] or sorted(
        p.stem for p in ASM.glob("func_*.s")
        if "__asm__" in (SRC / f"{p.stem}.c").read_text(errors="replace")
        if not (MATCHED / f"{p.stem}.o").exists())
    ok = 0
    for n in names:
        try:
            c = emit(n)
        except Exception:
            c = None
        if c is None:
            continue
        (SRC / f"{n}.c").write_text(c)
        ok += 1
        print(f"  emitted {n}")
    print(f"rmerge_emit: emitted={ok}")


if __name__ == "__main__":
    main()