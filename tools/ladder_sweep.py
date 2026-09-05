#!/usr/bin/env python3
"""Sweep gcc-2.95.2 ladder rung over candidates (-G8 then -G0) and report score."""
import re, subprocess, sys, os
from pathlib import Path

ROOT = Path(".").resolve()
DIFF = Path(os.path.expanduser("~/.venvs/ff4_decomp/bin/asm-differ"))
CC1 = ROOT / "tools/gcc-ladder/gcc-2.95.2-psx.cc1.exe"

def run(cmd):
    return subprocess.run(str(cmd), shell=True, capture_output=True, text=True)

def score(name, obj):
    r = run(f'timeout 25 "{DIFF}" {name} -o -f {obj} -F build/expected/{name}.o --format plain 2>&1')
    m = re.search(r"CURRENT \((\d+)\)", r.stdout)
    return int(m.group(1)) if m else None

(ROOT / "build/ladder-run").mkdir(parents=True, exist_ok=True)

for name in sys.argv[1:]:
    i = ROOT / "build/psx" / f"{name}.i"
    r0 = run(f"mipsel-linux-gnu-gcc-13 -E -P -Iinclude src/{name}.c -o {i}")
    if r0.returncode:
        print(f"{name} PREPROC_FAIL"); continue
    best = None
    for g0 in ("-G8", "-G0"):
        s = ROOT / "build/psx" / f"{name}.s"
        o = ROOT / "build/ladder-run" / f"{name}.o"
        r1 = run(f'wine "{CC1}" -quiet -O2 -fschedule-insns {g0} -mgpOPT -fgnu-linker {i} -o {s}')
        if r1.returncode or not s.exists():
            continue
        r2 = run(f"python3 tools/maspsx/maspsx.py --run-assembler --dont-expand-li -G8 -Iinclude -o {o} < {s}")
        if r2.returncode or not o.exists():
            continue
        n = score(name, o)
        if n is not None and (best is None or n < best[0]):
            best = (n, g0)
    if best:
        print(f"{name} 2.95.2 {best[1]} = {best[0]}")
    else:
        print(f"{name} 2.95.2 FAIL")