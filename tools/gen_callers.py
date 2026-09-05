#!/usr/bin/env python3
"""Generate C for straight-line const-arg caller chains (no branches/loops)."""
import re, sys
from pathlib import Path

ASM = Path("asm/nonmatchings/main")
SRC = Path("src")

def parse(name):
    out = []
    for m in re.finditer(r"/\* ([0-9A-F]+) ([0-9A-F]+) ([0-9A-F]{2,8}) \*/\s*(.+?)\s*$",
                         (ASM / f"{name}.s").read_text(), re.M):
        out.append(" ".join(m.group(4).split()))
    return out

def gen(name):
    insns = parse(name)
    calls = []  # (func, argtext)
    for i, ins in enumerate(insns):
        m = re.match(r"jal\s+(\S+)", ins)
        if not m:
            continue
        f = m.group(1)
        d = insns[i + 1] if i + 1 < len(insns) else "nop"
        m2 = re.match(r"addiu \$a0, \$zero, (0x[0-9A-F]+|[0-9]+)", d)
        if m2:
            v = m2.group(1)
            if not v.startswith("0x"):
                v = f"0x{int(v):X}"
            calls.append((f, f"{f}({v})", "1"))
        elif re.match(r"addu \$a0, \$zero, \$zero", d):
            calls.append((f, f"{f}(0)", "1"))
        elif d == "nop":
            calls.append((f, f"{f}()", "0"))
        else:
            return None  # unsupported arg shape
    if not calls:
        return None
    # externs
    seen = {}
    for f, c, na in calls:
        if f not in seen:
            seen[f] = na
    externs = []
    for f, na in seen.items():
        params = "u32 v0" if na == "1" else "void"
        externs.append(f"extern void {f}({params});")
    body = ";\n    ".join(c for _, c, _ in calls) + ";"
    return "\n".join(externs) + f"\nvoid {name}(void) {{\n    {body};\n}}\n"

if __name__ == "__main__":
    for t in sys.argv[1:]:
        c = gen(t)
        if c is None:
            print(f"{t}: FAILED")
            continue
        (SRC / f"{t}.c").write_text(f'#include "common.h"\n{c}')
        print(f"{t}: wrote")