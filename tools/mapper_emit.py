#!/usr/bin/env python3
"""mapper_emit.py — the D_8019EDxx + mapper-jal family.

Shapes handled:
  A) *(volatile u8*)0x1F8003C8 = *(u8*)HELPER(a0 + *D_P)          (mmio-sb)
  B) *D_8019ED40 &= *(u8*)HELPER(a0 + *D_P)                        (merge-and)
  C) D_8019ED40[0..1] &= q[0..1]                                   (merge-2)
Usage: python3 tools/mapper_emit.py [NAME...]
"""
import re
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
ASM = ROOT / "asm" / "nonmatchings" / "main"
SRC = ROOT / "src"
MATCHED = ROOT / "expected" / "matched"
ROWS = re.compile(r"^\s*/\* [0-9A-F]+ [0-9A-F]+ ([0-9A-F]{8}) \*/\s*(.+?)\s*$")
GP = re.compile(r"%gp_rel\((\w+)\)\(gp\)")
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
    if len(rows) > 30:
        return None
    helper = None
    gp_loads = []
    for insn in rows:
        m = insn.split(None, 1)
        op, a = m[0], (m[1] if len(m) > 1 else "").replace("$", "")
        if op == "jal":
            helper = a.split()[0]
        if "%gp_rel" in a and op.startswith(("l", "s")):
            gp_loads.append(GP.search(a).group(1))
    if helper is None or len(gp_loads) < 2:
        return None
    text = "\n".join(rows)
    if "1F8003C8" in text and "sb" in text:
        # shape A: find the source ptr global (first lw) and u16-ness
        src_g = gp_loads[0] if gp_loads else "D_8019ED54"
        is16 = "lhu" in text.split("jal")[0]
        star = "*" if is16 else "*"
        c = (f'#include "common.h"\nextern {"u16" if is16 else "u8"} *{src_g};\n'
             f'void {name}(u32 a0)\n{{\n'
             f'    *(volatile u8 *)0x1F8003C8u = *(u8 *){helper}(a0 + *{src_g});\n'
             f'}}\n')
        return c
    if "and" in text and gp_loads[:2] and "D_8019ED40" in text:
        # shape B/C: merge into D_8019ED40
        src_g = gp_loads[0]
        is16 = "lhu" in text.split("jal")[0]
        selfm = f"extern {'u16' if is16 else 'u8'} *{src_g};\n"
        body = (f'    *D_8019ED40 &= *(u8 *){helper}(a0 + *{src_g});\n'
                f'    D_8019ED40[1] &= ((u8 *){helper}{{}})[1];\n' if "1($" in text.split("jal")[0]
                else f'    *D_8019ED40 &= *(u8 *){helper}(a0 + *{src_g});\n')
        if "00004490" not in text and "0($v0)" in text and "1($v0)" in text:
            body = (f'    u8 *q = (u8 *){helper}(a0 + *{src_g});\n'
                    f'    D_8019ED40[0] &= q[0];\n    D_8019ED40[1] &= q[1];\n')
        c = (f'#include "common.h"\n{selfm}extern u8 *D_8019ED40;\n'
             f'void {name}(u32 a0)\n{{\n{body}}}\n')
        return c
    return None


def main():
    names = [a for a in __import__("sys").argv[1:]] or sorted(
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
    print(f"mapper_emit: emitted={ok}")


if __name__ == "__main__":
    main()
