#!/usr/bin/env python3
"""Bulk matching runner.

For each remaining nonmatching: classify -> emit src C (if missing) ->
modern lane -> era lane (if class is era-candidate) -> mark matched on 0.

Marked matched: INCLUDE_ASM line dropped from src/main.c, .s removed,
expected object archived to expected/matched/.

Usage: python3 tools/bulk.py [--limit N] [--class CLASS...] [--dry]
"""
import os
import re
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
os.chdir(ROOT)
sys.path.insert(0, str(ROOT / "tools"))
import sweep

ASM = ROOT / "asm" / "nonmatchings" / "main"
SRC = ROOT / "src"
DIFF = os.path.expanduser("~/.venvs/ff4_decomp/bin/asm-differ")

# classes that have proven era-lane success
ERA_CLASSES = {
    "getter_and", "getter_and_ret", "copy_dup", "and_param", "or_param",
    "zero1", "zero2", "branch_85_86", "store_batch",
}

def run(cmd, **kw):
    return subprocess.run(cmd, shell=True, capture_output=True, text=True, **kw)

def score(name, obj):
    r = run(f'timeout 20 {DIFF} {name} -o -f build/{obj} -F '
            f'build/expected/{name}.o --format plain 2>&1')
    m = re.search(r"CURRENT \((\d+)\)", r.stdout)
    return int(m.group(1)) if m else None

def mark(name):
    run(f'''sed -i '/INCLUDE_ASM("asm\\/nonmatchings\\/main", {name});/d' src/main.c''')
    s = ASM / f"{name}.s"
    if s.exists():
        s.unlink()
    run(f"cp build/expected/{name}.o expected/matched/{name}.o")
    print(f"  -> MATCHED {name}")

def main():
    args = sys.argv[1:]
    limit = None
    if "--limit" in args:
        limit = int(args[args.index("--limit") + 1])
    only = []
    if "--class" in args:
        i = args.index("--class")
        only = args[i + 1:]

    names = sorted(s.stem for s in ASM.glob("*.s"))
    done, matched, parked = 0, 0, 0
    for name in names:
        if limit and done >= limit:
            break
        if (SRC / f"{name}.c").exists():
            continue  # already attempted (candidate or matched)
        cls = sweep.classify(name)
        if cls is None:
            continue
        kind, detail, body = cls
        if only and kind not in only:
            continue
        if not sweep.gen_c(name, kind, detail, body):
            continue
        done += 1

        r = run(f"make -s build/{name}.o 2>&1 && make -s build/expected/{name}.o 2>&1")
        if r.returncode:
            print(f"{name}: BUILD_FAIL"); parked += 1; continue
        s = score(name, f"{name}.o")
        if s == 0:
            mark(name); matched += 1; continue
        print(f"{name}: modern {s}")

        if kind in ERA_CLASSES:
            r = run(f"make -s build/psx/{name}.o 2>&1")
            if r.returncode:
                print(f"{name}: era BUILD_FAIL"); parked += 1; continue
            s = score(name, f"psx/{name}.o")
            if s == 0:
                mark(name); matched += 1; continue
            print(f"{name}: era {s}")
        parked += 1

    print(f"\nbulk: {done} attempted, {matched} matched this run, {parked} parked")

if __name__ == "__main__":
    main()