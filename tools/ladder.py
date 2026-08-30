#!/usr/bin/env python3
"""Build src/<name>.c with a gcc-ladder rung (wine cc1.exe) and report score.

Usage: python3 tools/ladder.py <name> [rung]
rung defaults to gcc-2.95.2-psx. Run from the repo root.
"""
import re, subprocess, sys, os
from pathlib import Path

name = sys.argv[1]
rung = sys.argv[2] if len(sys.argv) > 2 else "gcc-2.95.2-psx"
ROOT = Path(".").resolve()
CC1 = ROOT / "tools" / "gcc-ladder" / f"{rung}.cc1.exe"
DIFF = Path(os.path.expanduser("~/.venvs/ff4_decomp/bin/asm-differ"))

def run(cmd, **kw):
    return subprocess.run(str(cmd), shell=True, capture_output=True, text=True, **kw)

i, s, o = ROOT/"build/psx"/f"{name}.i", ROOT/"build/psx"/f"{name}.s", ROOT/"build/ladder-run"/f"{name}.o"
(ROOT/"build/ladder-run").mkdir(parents=True, exist_ok=True)
if run(f"mipsel-linux-gnu-gcc-13 -E -P -Iinclude src/{name}.c -o build/psx/{name}.i").returncode:
    print(f"{name}: PREPROC_FAIL"); sys.exit(1)
r = run(f'wine "{CC1}" -quiet -O2 -fschedule-insns -G8 -mgpOPT -fgnu-linker {i} -o {s}')
if r.returncode or not s.exists():
    print(f"{name}: CC1FAIL"); sys.exit(1)
r = run(f"python3 tools/maspsx/maspsx.py --run-assembler --dont-expand-li -G8 -Iinclude -o {o} < {s}")
if r.returncode or not o.exists():
    print(f"{name}: MASPSXFAIL"); sys.exit(1)
r = run(f'timeout 25 "{DIFF}" {name} -o -f {o} -F build/expected/{name}.o --format plain 2>&1')
m = re.search(r"CURRENT \((\d+)\)", r.stdout)
print(f"{name} [{rung}]: {m.group(1) if m else 'DIFFERR'}")
