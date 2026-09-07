#!/usr/bin/env python3
"""Re-shell: convert asm/nonmatchings/main/<name>.s (annotated reference) back
into the src/<name>.c __asm__ shell format. Used to restore a function whose C
candidate did not byte-match, and to bootstrap new work packets.

Usage: python3 tools/re_shell.py NAME [NAME...]
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
ASM = ROOT / "asm" / "nonmatchings" / "main"
SRC = ROOT / "src"

INSN = re.compile(r"^\s*/\* [0-9A-F]+ [0-9A-F]+ ([0-9A-F]{8}) \*/ +(.+?)\s*$")


def make_shell(name: str) -> None:
    p = ASM / f"{name}.s"
    if not p.exists():
        sys.stderr.write(f"no spec {p}\n")
        return
    lines = []
    for raw in p.read_text().splitlines():
        m = INSN.match(raw)
        if not m:
            continue
        insn = m.group(2).strip()
        # collapse internal whitespace (delayed slot comments are kept inline)
        insn = re.sub(r"\s+", " ", insn)
        lines.append(insn)
    body = "\n".join(f"  \"\\t{insn}\\n\"" for insn in lines)
    shell = (
        '#include "common.h"\n__asm__(\n'
        f'  ".globl {name}\\n"\n'
        f'  ".type {name}, @function\\n"\n'
        f'  "{name}:\\n"\n'
        '\t".set\\tnoreorder\\n"\n'
        '\t".set noreorder\\n"\n'
        f"{body}\n"
        '\t".set reorder\\n"\n'
        '\t".set\\treorder\\n"\n'
        f'  ".size {name}, .-{name}\\n"\n'
        ");\n"
    )
    (SRC / f"{name}.c").write_text(shell)
    print(f"  re-shelled {name} ({len(lines)} insns)")


if __name__ == "__main__":
    for n in sys.argv[1:]:
        make_shell(n)