#!/usr/bin/env python3
"""Classify tiny nonmatching functions into matchable C templates.

Scans asm/nonmatchings/main/*.s, recognizes simple leaf patterns, and emits
an enum of candidate C bodies. Used by the batch matching loop.
"""
import re
import sys
from pathlib import Path

ASM = Path("asm/nonmatchings/main")


def load(name):
    text = (ASM / f"{name}.s").read_text()
    lines = [
        (int(m.group(1), 16), m.group(2).strip())
        for m in re.finditer(r"/\* ([0-9A-F]+) .*? \*/\s+(.+)$", text, re.M)
    ]
    return lines  # list of (vaddr, insn text)


def classify(name):
    insns = [i for _, i in load(name)]
    if not insns:
        return None

    # strip comment artifacts / labels already removed by regex
    insns = [i for i in insns if i and not i.startswith(("glabel", "endlabel", "nonmatching"))]
    insns = [" ".join(i.split()) for i in insns]

    if len(insns) == 2 and insns == ["jr $ra", "nop"]:
        return ("void_empty", None, "void f(void) {}")
    if len(insns) == 2 and insns[0] == "jr $ra":
        # jr + something in delay slot
        if (m := re.match(r"move \$v0,\$a0", insns[1])):
            return ("identity", None, "int f(int a) { return a; }")
        if (m := re.match(r"addiu \$v0,\$a0,(-?\d+)", insns[1])):
            return ("arg_plus_const", int(m.group(1)), f"int f(int a) {{ return a + {m.group(1)}; }}")
        if (m := re.match(r"j?r?\s*\$ra", insns[1])):
            return None
    if len(insns) == 3 and insns[1:3] == ["jr $ra", "nop"]:
        first = insns[0]
        if (m := re.match(r"move \$v0,\$a0", first)):
            return ("identity", None, "int f(int a) { return a; }")
        if (m := re.match(r"addiu \$v0,\$a0,(-?\d+)", first)):
            return ("arg_plus_const", int(m.group(1)), f"int f(int a) {{ return a + {m.group(1)}; }}")
        if (m := re.match(r"ori \$v0,\$zero,(-?\d+)", first)):
            return ("const", int(m.group(1)), f"int f(void) {{ return {m.group(1)}; }}")
        if (m := re.match(r"lui \$v0,(0x[0-9A-F]+)", first)):
            return ("const_hi", m.group(1), None)
        if (m := re.match(r"lbu \$v0,0x0\(\$a0\)", first)):
            return ("load_u8", None, "int f(u8 *p) { return *p; }")
        if (m := re.match(r"lhu \$v0,0x0\(\$a0\)", first)):
            return ("load_u16", None, "int f(u16 *p) { return *p; }")
        if (m := re.match(r"lw \$v0,0x0\(\$a0\)", first)):
            return ("load_u32", None, "int f(u32 *p) { return *p; }")
    return None


def main():
    chosen = sys.argv[1:] or None
    counts = {}
    for s in sorted(ASM.glob("*.s")):
        name = s.stem
        if chosen and name not in chosen:
            continue
        cls = classify(name)
        if cls:
            counts[cls[0]] = counts.get(cls[0], 0) + 1
            print(f"{name}\t{cls[0]}\t{cls[2] if cls[2] else '?'}")


if __name__ == "__main__":
    main()