#!/usr/bin/env python3
"""mmio_emit.py — the $s0 + 0x1F80xxxx base + helper + 2-byte copy family.

Detects: lui/ori $s0 -> 0x1F80xxxx; one helper jal; two accesses at fixed
offsets between $s0 (MMIO) and ($v0) (mapper result). Emits correct-semantics
C (read-back or write-through). Usage: python3 tools/mmio_emit.py [NAME...]
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


def rows_of(name):
    out = []
    for raw in (ASM / f"{name}.s").read_text(errors="replace").splitlines():
        m = ROWS.match(raw)
        if m:
            out.append(m.group(2).strip().replace("$", ""))
    return out


def emit(name):
    rows = rows_of(name)
    if len(rows) > 40 or len(rows) < 8:
        return None
    base = None
    helper = None
    jargs = None
    acc_s = []          # (offset, reg) accessed via s0
    acc_v = []          # accesses via v0
    for i, insn in enumerate(rows):
        m = insn.split(None, 1)
        op, a = m[0], (m[1] if len(m) > 1 else "")
        a = a.replace("$", "")
        if op == "lui" and re.match(r"s[0-7],\s*\(0x1F80[0-9A-F]+ >> 16\)", a):
            base = int(re.search(r"0x([0-9A-F]+) >> 16", a).group(1), 16) & 0xFFFF0000
        if op == "ori" and base is not None and re.match(r"s[0-7],\s*s[0-7],\s*\(0x[0-9A-F]+ & 0xFFFF\)", a):
            base |= int(re.search(r"0x([0-9A-F]+) & 0xFFFF", a).group(1), 16)
        if op == "jal":
            helper = a.split()[0]
        mm = re.match(r"(\w+),\s*([\w\-]+)\((\w+)\)", a)
        if mm and mm.group(3) == "s0" and op == "lbu":
            acc_s.append((int(mm.group(2), 16), "r"))
        if mm and mm.group(3) == "s0" and op == "sb":
            acc_s.append((int(mm.group(2), 16), "w"))
        if mm and mm.group(3) == "v0" and op == "lbu":
            acc_v.append((int(mm.group(2), 16), "r"))
        if mm and mm.group(3) == "v0" and op == "sb":
            acc_v.append((int(mm.group(2), 16), "w"))
    if base is None or helper is None or not (acc_s and acc_v):
        return None
    # jal argument (slot): scan slot patterns
    arg = ""
    for i, insn in enumerate(rows):
        if insn.startswith("jal "):
            if i + 1 < len(rows):
                sa = rows[i + 1].replace("$", "")
                mm = re.match(r"addiu\s+a0,\s+zero,\s+0x([0-9A-F]+)", sa)
                if mm:
                    arg = f"({int(mm.group(1), 16)})"
                elif sa.startswith(("addu a0, a0,", "addu a0, a1,")):
                    arg = None            # computed arg -> skip param
                elif sa.strip().startswith("nop"):
                    arg = ""
            break
    if arg is None:
        return None
    # direction: s0-lbu + v0-sb => read-back from mmio into mapper buffer
    readback = any(k == "r" for _, k in acc_s) and any(k == "w" for _, k in acc_v)
    lines = []
    if readback:
        for off, _ in sorted(acc_s):
            lines.append(f"    p[{off - 8}] = ((volatile u8 *)0x{base:X}u)[{off}];"
                         if off >= 8 else
                         f"    p[{off}] = ((volatile u8 *)0x{base:X}u)[{off}];")
    else:
        for off, _ in sorted(acc_v):
            lines.append(f"    ((volatile u8 *)0x{base:X}u)[{off}] = p[{off - 8}];"
                         if off >= 8 else
                         f"    ((volatile u8 *)0x{base:X}u)[{off}] = p[{off}];")
    if not lines:
        return None
    c = (f'#include "common.h"\nvoid {name}(void)\n{{\n'
         f'    u8 *p = (u8 *){helper}{arg};\n'
         + "\n".join(lines) + "\n}\n")
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
    print(f"mmio_emit: emitted={ok}")


if __name__ == "__main__":
    main()