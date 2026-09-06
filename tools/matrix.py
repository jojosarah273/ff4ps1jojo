#!/usr/bin/env python3
"""Full lane-matrix sweep over non-matched candidates.

Lanes per candidate, in order (first CURRENT (0) wins):
  modern (gcc-13 -G8)  -> nodelay (CC1PSX -O2 -fno-delayed-branch)
  -> psxs (CC1PSX -O2 -fschedule-insns) -> ladder 2.95.2 -> ladder 2.91.66

Usage: python3 tools/matrix.py                 (all candidates)
       python3 tools/matrix.py FUNC [FUNC...] (specific)
Prints MATCH lines for CURRENT (0) results; appends them to /tmp/matrix_matches.
"""
import re
import subprocess
import sys
from pathlib import Path

ROOT = Path(".").resolve()
DIFF = Path(subprocess.check_output(
    ["bash", "-lc", "command -v asm-differ || echo $HOME/.venvs/ff4_decomp/bin/asm-differ"],
    text=True).strip())
MASPSX = str(ROOT / "tools/maspsx/maspsx.py")
CC1 = str(ROOT / "tools/psyq/bin/CC1PSX.EXE")

def run(cmd):
    return subprocess.run(cmd, shell=True, capture_output=True, text=True)

def is_match(name, obj):
    r = run(f'timeout 20 "{DIFF}" {name} -o -f {obj} -F build/expected/{name}.o --format plain 2>&1')
    m = re.search(r"CURRENT \((\d+)\)", r.stdout)
    return (True, 0) if m and m.group(1) == "0" else (False, int(m.group(1)) if m else None)

def try_build(name, step):
    """Return object path + score; None on failure."""
    mk = Path(f"build/{step}/")
    obj = mk / f"{name}.o"
    if not (mk).exists():
        mk.mkdir(parents=True, exist_ok=True)
    i, s = Path("build/psx") / f"{name}.i", Path("build/psx") / f"{name}.s"
    if step == "modern":
        r = run(f"make -s build/{name}.o 2>&1")
        return f"build/{name}.o" if r.returncode == 0 else None
    if step == "nodelay-psx":
        if run(f"mipsel-linux-gnu-gcc-13 -E -P -Iinclude src/{name}.c -o {i}").returncode: return None
        if run(f'wine "{CC1}" -O2 -fno-delayed-branch -G8 -mgpOPT -fgnu-linker {i} -o {s}').returncode: return None
        if run(f'python3 {MASPSX} --run-assembler --dont-expand-li -G8 -Iinclude -o {obj} < {s}').returncode: return None
        return str(obj)
    if step == "psxs":
        if run(f"mipsel-linux-gnu-gcc-13 -E -P -Iinclude src/{name}.c -o {i}").returncode: return None
        if run(f'wine "{CC1}" -O2 -fschedule-insns -G8 -mgpOPT -fgnu-linker {i} -o {s}').returncode: return None
        if run(f'python3 {MASPSX} --run-assembler --dont-expand-li -G8 -Iinclude -o {obj} < {s}').returncode: return None
        return str(obj)
    if step.startswith("ladder-"):
        rung = ("gcc-2.91.66-psx" if step == "ladder-291" else "gcc-2.95.2-psx")
        if run(f"mipsel-linux-gnu-gcc-13 -E -P -Iinclude src/{name}.c -o {i}").returncode: return None
        if run(f'wine "{ROOT}/tools/gcc-ladder/{rung}.cc1.exe" -quiet -O2 -fschedule-insns -G8 -mgpOPT -fgnu-linker {i} -o {s}').returncode: return None
        if run(f'python3 {MASPSX} --run-assembler --dont-expand-li -G8 -Iinclude -o {obj} < {s}').returncode: return None
        return str(obj)
    return None

yielded = 0
names = sys.argv[1:] or sorted(p.stem for p in (ROOT / "src").glob("*.c"))
for name in names:
    if not (ROOT / "asm" / "nonmatchings" / "main" / f"{name}.s").exists():
        continue
    if not (ROOT / "src" / f"{name}.c").exists():
        continue
    got = False
    for step in ("modern", "nodelay-psx", "psxs", "ladder-295", "ladder-291"):
        obj = try_build(name, step)
        if obj is None:
            continue
        ok, score = is_match(name, obj)
        if ok:
            with open("/tmp/matrix_matches.txt", "a") as fh:
                fh.write(f"{name} {step}\n")
            print(f"MATCH {name} [{step}]")
            got = True
            break
        yielded += 1
        if yielded and yielded % 40 == 0:
            print(f"-- {yielded} lane-tries so far; checkpointing", flush=True)
            run("git add -A && git commit -q -m matrix-sweep-checkpoint 2>/dev/null; true")
    if not got and not (ROOT / "src" / f"{name}.c").exists():
        pass
print("matrix sweep done")