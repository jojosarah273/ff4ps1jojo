#!/usr/bin/env python3
"""Scan remaining nonmatchings for jr-$t2 kernel-syscall stubs and emit C.

Pattern:   addiu $t2,$zero,T   (optionally with lui $t2,%hi(T) before)
           jr $t2
           addiu $t1,$zero,K
(plus trailing nops / glue is fine — we only need the 3 insns)
"""
import re
from pathlib import Path
import sys

ASM = Path("asm/nonmatchings/main")
SRC = Path("src")

def load(name):
    out = []
    for m in re.finditer(r"/\* ([0-9A-F]+) ([0-9A-F]+) ([0-9A-F]{2,8}) \*/\s*(.+?)\s*$",
                         (ASM / f"{name}.s").read_text(), re.M):
        out.append(" ".join(m.group(4).split()))
    return out

def classify(name):
    insns = load(name)
    for i, ins in enumerate(insns):
        m = re.match(r"addiu \$t2, \$zero, (0x[0-9A-F]+)", ins)
        if m and i + 1 < len(insns) and insns[i + 1] == "jr $t2":
            d = insns[i + 2] if i + 2 < len(insns) else ""
            m2 = re.match(r"addiu \$t1, \$zero, (0x[0-9A-F]+)", d)
            if m2:
                return (m.group(1), m2.group(1))
    return None

def emit(name, tgt, code):
    c = (f'#include "common.h"\n'
         f'void {name}(void) {{\n'
         f'    __asm__ __volatile__("addiu $t2, $zero, {tgt}\\n\\tjr $t2\\n\\taddiu $t1, $zero, {code}");\n'
         f'    __builtin_unreachable();\n'
         f'}}\n')
    (SRC / f"{name}.c").write_text(c)

if __name__ == "__main__":
    found = []
    for s in sorted(ASM.glob("*.s")):
        r = classify(s.stem)
        if r:
            found.append((s.stem, r[0], r[1]))
    by_target = {}
    for f, t, c in found:
        by_target.setdefault((t, c), []).append(f)
    print(f"{len(found)} jr-$t2 kernel stubs: {len(by_target)} distinct (target,code)")
    for (t, c), fs in sorted(by_target.items()):
        print(f"  t2={t} t1={c}: {len(fs)}  e.g. {fs[:4]}")
    if "--emit" in sys.argv:
        for f, t, c in found:
            emit(f, t, c)
        print("emitted")