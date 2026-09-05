#!/usr/bin/env python3
"""Convert a splat nonmatching .s into a top-of-file pure-asm .c (byte-accurate)."""
import re, sys
from pathlib import Path

def convert(name, src_dir="asm/nonmatchings/main", out_dir="src"):
    sp = Path(src_dir) / f"{name}.s"
    text = sp.read_text()
    mh = re.search(r"nonmatching \S+, (0x[0-9A-F]+)", text)
    fn_size = int(mh.group(1), 16) if mh else None
    ms = re.search(r"/\* [0-9A-F]+ ([0-9A-F]+) [0-9A-F]{2,8} \*/\s*glabel\s+\S+", text)
    start_v = int(ms.group(1), 16) if ms else None
    insns = []  # list of (vaddr, label_or_None, insn_text)
    for m in re.finditer(r"/\* [0-9A-F]+ ([0-9A-F]+) [0-9A-F]{2,8} \*/\s*(.+?)\s*$", text, re.M):
        v = int(m.group(1), 16)
        if fn_size is not None and start_v is not None and v >= start_v + fn_size:
            continue  # post-endlabel padding
        insns.append((v, None, " ".join(m.group(2).split())))
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
        op = insn.split()[0] if insn.split() else ""
        ml = re.match(r"lui\s+(\$[a-z0-9]+),\s*\(0x([0-9A-Fa-f]+)\s*>>\s*16\)", insn)
        if ml:
            insn = f"lui {ml.group(1)}, 0x{int(ml.group(2), 16) >> 16:X}"
        mo = re.match(r"ori\s+(\$[a-z0-9]+),\s*\$[a-z0-9]+,\s*\(0x([0-9A-Fa-f]+)\s*&\s*0xFFFF\)", insn)
        if mo:
            insn = f"ori {mo.group(1)}, {mo.group(1)}, 0x{int(mo.group(2), 16) & 0xFFFF:X}"
        mlw = re.match(r"(lw|lhu|lbu|lh|lb|sw|sb|sh)\s+(\$[a-z0-9]+),\s*\(0x([0-9A-Fa-f]+)\s*&\s*0xFFFF\)\((\$[a-z0-9]+)\)", insn)
        if mlw:
            insn = f"{mlw.group(1)} {mlw.group(2)}, 0x{int(mlw.group(3), 16) & 0xFFFF:X}({mlw.group(4)})"
        mb = re.match(r"break\s+0,\s*(\d+)", insn)
        if mb:
            code = int(mb.group(1))
            insn = f".word 0x{(code << 6) | 0xD:08X}"
        elif re.match(r"break\s+", insn):
            mbb = re.match(r"break\s+(\d+)", insn)
            if mbb:
                code = int(mbb.group(1))
                insn = f".word 0x{(code << 16) | 0xD:08X}"
        if op in ("sltu", "div", "rem", "divu", "remu"):
            parts = insn[len(op):].split(",")
            lines.append(op + " " + ",".join(p.strip() for p in parts))
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