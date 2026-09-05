#!/usr/bin/env python3
"""Emit jr-$t2 kernel-syscall stub bodies (single AND multi-stub, w/ trailing data)."""
import re
from pathlib import Path

ASM = Path("asm/nonmatchings/main")
SRC = Path("src")

def load(name):
    out = []
    for m in re.finditer(r"/\* ([0-9A-F]+) ([0-9A-F]+) ([0-9A-F]{2,8}) \*/\s*(.+?)\s*$",
                         (ASM / f"{name}.s").read_text(), re.M):
        out.append(" ".join(m.group(4).split()))
    return out

def stubs(name):
    """Return list of asm line groups: each stub = its 3 insns + trailing nops/words until next stub/end."""
    insns = load(name)
    groups = []
    i = 0
    n = len(insns)
    while i < n:
        m = re.match(r"addiu \$t2, \$zero, (0x[0-9A-F]+)", insns[i])
        if m and i + 1 < n and insns[i + 1] == "jr $t2" and i + 2 < n and \
           re.match(r"addiu \$t1, \$zero, (0x[0-9A-F]+)", insns[i + 2]):
            stub = [insns[i], insns[i + 1], insns[i + 2]]
            i += 3
            # consume following nops / .word data up to next stub
            while i < n:
                if insns[i] == "nop":
                    stub.append("nop")
                    i += 1
                elif insns[i].startswith(".word"):
                    stub.append(insns[i])
                    i += 1
                else:
                    break
            groups.append(stub)
        else:
            i += 1
    return groups

def emit(name, groups):
    lines = []
    for g in groups:
        for ins in g:
            if ins == "nop":
                lines.append("nop")
            elif ins.startswith(".word"):
                lines.append(ins)
            else:
                lines.append(ins)
    asm = "\\n\\t".join(lines)
    c = (f'#include "common.h"\n'
         f'void {name}(void) {{\n'
         f'    __asm__ __volatile__("{asm}");\n'
         f'    __builtin_unreachable();\n'
         f'}}\n')
    (SRC / f"{name}.c").write_text(c)

if __name__ == "__main__":
    import sys
    total = 0
    for s in sorted(ASM.glob("*.s")):
        g = stubs(s.stem)
        if g:
            emit(s.stem, g)
            total += 1
    print(f"emitted {total} stub functions")