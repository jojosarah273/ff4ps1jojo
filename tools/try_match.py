#!/usr/bin/env python3
"""Write a candidate C body for <name> and report its asm-differ score.

Usage: tools/try_match.py <func_name> '<C body with externs>'
Prints BUILD_FAIL / DIFFERR / CURRENT(n).
"""
import re
import subprocess
import sys

name, body = sys.argv[1], sys.argv[2]
with open(f"src/{name}.c", "w") as f:
    f.write(f'#include "common.h"\n{body}\n')

def run(cmd):
    return subprocess.run(cmd, shell=True, capture_output=True, text=True)

r1 = run(f"make -s build/{name}.o 2>&1")
r2 = run(f"make -s build/expected/{name}.o 2>&1")
if r1.returncode or r2.returncode:
    print(f"{name}: BUILD_FAIL")
    sys.exit(1)
r3 = run(
    f"timeout 20 ~/.venvs/ff4_decomp/bin/asm-differ {name} "
    f"-o -f build/{name}.o -F build/expected/{name}.o --format plain 2>&1"
)
m = re.search(r"CURRENT \((\d+)\)", r3.stdout + r3.stderr)
print(f"{name}: {m.group(1) if m else 'DIFFERR'}")