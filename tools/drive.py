#!/usr/bin/env python3
"""drive.py — unattended Phase A sweep driver.

For every candidate (src real C, unmatched, spec present): verify against the
lane that lanes.txt assigned it (modern-asm->MODERN, psx->PSX, psxs->PSXS,
ladder-2.95.2->L295), then, for failures only, optionally the full lane set.
Registers byte-exact matches automatically. Results logged to
decomp/sweep_<timestamp>.log.

Usage:
  python3 tools/drive.py                     # everything, lane-first
  python3 tools/drive.py --all-lanes-fails   # + retry failures on ALL lanes
  python3 tools/drive.py --names FILE        # explicit list
"""
import argparse
import os
import re
import subprocess
import sys
import time
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
os.chdir(ROOT)
SRC = ROOT / "src"
ASM = ROOT / "asm" / "nonmatchings" / "main"
MATCHED = ROOT / "expected" / "matched"
LANES = {}
for raw in (ROOT / "expected" / "lanes.txt").read_text().splitlines():
    p = raw.split()
    if len(p) == 2:
        LANES[p[1]] = p[0]

LANE_MAP = {
    "modern-asm": "MODERN",
    "psx": "PSX",
    "psxs": "PSXS",
    "ladder-2.95.2": "L295",
    "asm": None,
}


def candidates():
    names = []
    for c in SRC.glob("func_*.c"):
        n = c.stem
        if not re.match(r"func_(?:800|801)[0-9A-F]+", n):
            continue
        if (MATCHED / f"{n}.o").exists():
            continue
        if "__asm__" in c.read_text(errors="replace"):
            continue                       # shell, not a candidate
        if not (ASM / f"{n}.s").exists():
            continue
        names.append(n)
    return sorted(names)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--all-lanes-fails", action="store_true")
    ap.add_argument("--names", default=None)
    a = ap.parse_args()
    names = (Path(a.names).read_text().split()
             if a.names else candidates())
    ts = time.strftime("%Y%m%d-%H%M%S")
    log = ROOT / "decomp" / f"sweep_{ts}.log"
    fout = open(log, "w")
    ok = fail = 0
    fails = []
    for n in names:
        lane = LANE_MAP.get(LANES.get(n, "modern-asm"))
        if lane is None:
            continue
        r = subprocess.run(
            f"python3 tools/match.py {n} --lane {lane} --bincmp --register",
            shell=True, capture_output=True, text=True)
        out = r.stdout.strip().splitlines()
        line = out[-1] if out else f"{n}: no output"
        fout.write(f"{n} [{lane}] {line}\n")
        fout.flush()
        if "registered" in line:
            ok += 1
        else:
            fail += 1
            fails.append(n)
        print(f"[{ok + fail}/{len(names)}] {line}")
    if a.all_lanes_fails:
        fout.write(f"--- retry {len(fails)} failures on ALL lanes ---\n")
        for n in fails:
            r = subprocess.run(
                f"python3 tools/match.py {n} --lane ALL --bincmp --register",
                shell=True, capture_output=True, text=True)
            out = r.stdout.strip().splitlines()
            line = out[-1] if out else f"{n}: no output"
            fout.write(f"{n} [ALL] {line}\n")
            fout.flush()
            if "registered" in line:
                ok += 1
            print(f"[retry] {line}")
    fout.write(f"DRIVE DONE matched_new={ok} failed={fail}\n")
    fout.close()
    print(f"drive done: new matches={ok}, failures={fail} (log {log})")


if __name__ == "__main__":
    main()