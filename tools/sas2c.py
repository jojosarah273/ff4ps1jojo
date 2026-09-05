#!/usr/bin/env python3
"""Convert a splat nonmatching .s into a top-of-file pure-asm .c (byte-accurate)."""
import re, sys
from pathlib import Path

def convert(name, src_dir="asm/nonmatchings/main", out_dir="src"):
    sp = Path(src_dir) / f"{name}.s"
    text = sp.read_text()
    insns = []  # list of (vaddr, label_or_None, insn_text)
    for m in re.finditer(r"/\* [0-9A-F]+ ([0-9A-F]+) [0-9A-F]{2,8} \*/\s*(.+?)\s*$", text, re.M):
        insns.append((int(m.group(1), 16), None, " ".join(m.group(2).split())))
    # attach labels to their following instruction
    labels = {}  # vaddr -> labelname
    for m in re.finditer(r"^\s*\.L([0-9A-F]+):", text, re.M):
        vaddr = None
        # find next * comment vaddr in the text after this label
        rest = text[m.end():]
        m2 = re.search(r"/\* [0-9A-F]+ ([0-9A-F]+) ", rest)
        if m2:
            labels[int(m2.group(1), 16)] = f".L{m.group(1)}"
    # build lines
    lines = []
    for v, _, insn in insns:
        if v in labels:
            lines.append(f"{labels[v]}:")
        if insn.startswith("sltu "):
            parts = insn[5:].split(",")
            lines.append("sltu " + ",".join(p.strip() for p in parts))
        else:
            lines.append(insn)
    body = "\n".join(f"\t{l}" for l in lines)
    body_e = body.replace("\\", "\\\\").replace("\n", "\\n").replace("\t", "\\t")
    c = (
        '#include "common.h"\n'
        "__asm__(\n"
        f'  ".globl {name}\\n"\n'
        f'  ".type {name}, @function\\n"\n'
        f'  "{name}:\\n"\n'
        '  "\\t.set\\tnoreorder\\n"\n'
        '  "\\t.set noreorder\\n"\n'
        f'  "{body_e}\\n"\n'
        '  "\\t.set reorder\\n"\n'
        '  "\\t.set\\treorder\\n"\n'
        f'  ".size {name}, .-{name}\\n"\n'
        ");\n"
    )
    out = Path(out_dir) / f"{name}.c"
    out.write_text(c)
    print(f"wrote {out} ({len(lines)} lines)")

if __name__ == "__main__":
    for n in sys.argv[1:]:
        convert(n)