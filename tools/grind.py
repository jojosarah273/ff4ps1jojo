#!/usr/bin/env python3
"""grind.py — autonomous Phase A loop. Run until no more candidates lift.
Each cycle: emitters -> mass lift -> lane sweeps -> fixups -> status/commit.

Usage: python3 tools/grind.py [--rounds N]   (default: until stall)
"""
import os
import subprocess
import sys
import time
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
os.chdir(ROOT)
L = lambda c: subprocess.run(c, shell=True)


def count_c():
    t = Path("decomp/STATUS.md").read_text()
    import re
    m = re.search(r"\| \*\*C-written\*\* \| \*\*(\d+)\*\*", t)
    return m.group(1) if m else "?"


def phase(name):
    print(f"\n=== [{time.strftime('%H:%M:%S')}] {name} ===", flush=True)


def main():
    rounds = int(sys.argv[sys.argv.index("--rounds") + 1]) if "--rounds" in sys.argv else 3
    for rnd in range(1, rounds + 1):
        phase(f"round {rnd}: mass lift")
        L("timeout 900 python3 tools/lift_leaf.py")
        phase(f"round {rnd}: family emitters")
        L("timeout 300 python3 tools/rmerge_emit.py")
        L("timeout 300 python3 tools/mmio_emit.py")
        L("timeout 300 python3 tools/mapper_emit.py")
        # newly-written candidates -> lane-first sweep + all-lane retries
        phase(f"round {rnd}: sweep new candidates")
        r = subprocess.run("git status --short src/ | awk '{print $2}' | "
                           "sed 's|src/||; s|\\.c$||' > /tmp/grind_new.txt",
                           shell=True)
        new = Path("/tmp/grind_new.txt").read_text().split()
        if new:
            L("timeout 1800 python3 tools/drive.py --names /tmp/grind_new.txt "
              "> /tmp/grind_sweep.log 2>&1")
            L("timeout 1800 python3 tools/drive.py --all-lanes-fails "
              "--names /tmp/grind_new.txt >> /tmp/grind_sweep.log 2>&1")
        c = count_c()
        phase(f"round {rnd}: STATUS -> C-written {c}; commit+push")
        L("python3 tools/decomp_status.py >/dev/null")
        L("bash tools/check_integrity.sh >/dev/null && echo INTEGRITY-OK || echo INTEGRITY-FAIL")
        L('git add -A && git commit -q -m "grind round %d: C-written %s" '
          '&& git push origin main 2>&1 | tail -1' % (rnd, c))
        # detect stall
        n2 = Path("/tmp/grind_new.txt").read_text().split()
        if not new and rnd >= 2:
            phase("stall detected — stopping")
            return
    phase("grind done")


if __name__ == "__main__":
    main()
