#!/usr/bin/env python3
"""match.py — unified Phase A verifier.

Builds a candidate C via the given lane(s), runs asm-differ (-j .text), and
REPORTS the best score; with --register, archives a CURRENT(0) match
(expected/matched/ + spec removal + lanes + matched_lanes.txt).

Lanes: MODERN (gcc-13+maspsx), PSX (CC1PSX-era via wine), L26/L27/L28/L295
(gcc-2.6.3 / 2.7.2 / 2.8.1 / 2.95.2 ladder). "ALL" sweeps every lane.
--stop-at-ret passes asm-differ -s (ignores trailing return-slot/pad noise —
use for small functions where ROM pad nops pollute the diff).

Usage:
  python3 tools/match.py NAME [--lane ALL] [--stop-at-ret] [--register]
"""
import argparse
import os
import re
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
os.chdir(ROOT)
ASM = ROOT / "asm" / "nonmatchings" / "main"
SRC = ROOT / "src"
MATCHED = ROOT / "expected" / "matched"
DIFF = os.path.expanduser("~/.venvs/ff4_decomp/bin/asm-differ")
LADDERS = {
    "L26": "tools/gcc-ladder/gcc-2.6.3-psx.cc1.exe",
    "L27": "tools/gcc-ladder/gcc-2.7.2-psx.cc1.exe",
    "L28": "tools/gcc-ladder/gcc-2.8.1-psx.cc1.exe",
    "L295": "tools/gcc-ladder/gcc-2.95.2-psx.cc1.exe",
}


def run(cmd, quiet=True):
    return subprocess.run(cmd, shell=True, capture_output=True, text=True)


def score(name, obj, stop=False):
    extra = " -s" if stop else ""
    r = run(f'timeout 25 "{DIFF}" {name} -j .text{extra} -o -f {obj} -F '
            f'build/expected/{name}.o 2>/dev/null')
    m = re.search(r"CURRENT \((\d+)\)", r.stdout)
    return int(m.group(1)) if m else 999999


def build_modern(name):
    run(f"make build/{name}.o build/expected/{name}.o", quiet=False)


def build_psx(name):
    run(f"make psx FUNC={name}")


def build_ladder(name, key):
    cc = LADDERS[key]
    out = ROOT / "build" / "ladder-run" / f"{name}.o"
    run(f"mipsel-linux-gnu-gcc-13 -E -P -Iinclude src/{name}.c -o /tmp/li.i")
    run(f'wine "{cc}" -quiet -O2 -G8 -mgpOPT -fgnu-linker /tmp/li.i -o /tmp/li.s')
    run(f"python3 tools/maspsx/maspsx.py --run-assembler --dont-expand-li "
        f"-G8 -Iinclude -o {out} < /tmp/li.s")
    return out if out.exists() else None


def bincmp(name, obj):
    """Byte-exact .text compare (relocation-independent). Trailing padding
    (nops/zeros) on either side is ignored. Returns True on byte-equality."""
    import subprocess as sp
    def text_bytes(o):
        r = sp.run(f"mipsel-linux-gnu-objcopy -O binary -j .text {o} /tmp/tb.bin",
                   shell=True, capture_output=True)
        return open("/tmp/tb.bin","rb").read() if r.returncode == 0 else b""
    a, b = text_bytes(obj), text_bytes("build/expected/" + name + ".o")
    if not a or not b:
        return False
    n = min(len(a), len(b))
    if a[:n] != b[:n]:
        return False
    # tail: allow only nop(0x00000000)/zero padding to differ
    def tail_ok(blob, keep):
        tail = blob[keep:]
        return all(tail[i:i+4] in (b"\x00" * 4, b"\x00\x00\x00\x00") for i in range(0, len(tail), 4))
    return tail_ok(a, n) and tail_ok(b, n)


def register(name, lane):
    run(f"cp build/expected/{name}.o expected/matched/")
    s = ASM / f"{name}.s"
    if s.exists():
        s.unlink()
    run(f"sed -i '/{name}/d' expected/lanes.txt")
    with open(ROOT / "expected" / "matched_lanes.txt", "a") as f:
        f.write(f"{name} {lane}\n")


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("names", nargs="+")
    ap.add_argument("--lane", default="PSX")
    ap.add_argument("--stop-at-ret", action="store_true")
    ap.add_argument("--register", action="store_true")
    ap.add_argument("--bincmp", action="store_true",
                    help="use byte-exact .text compare instead of asm-differ")
    a = ap.parse_args()
    lanes = ["MODERN", "PSX", "PSXS", "L26", "L27", "L28", "L295"]
    if a.lane == "ALL":
        want = lanes
    elif a.lane in lanes:
        want = [a.lane]
    else:
        sys.exit(f"bad lane {a.lane}; use ALL/MODERN/PSX/PSXS/L26/L27/L28/L295")
    for name in a.names:
        src = SRC / f"{name}.c"
        if not src.exists():
            print(f"{name}: no src"); continue
        if (MATCHED / f"{name}.o").exists():
            print(f"{name}: already matched"); continue
        best = (None, 999999)
        objs = {}
        for ln in want:
            obj = None
            if ln == "MODERN":
                build_modern(name)
                obj = f"build/{name}.o"
            elif ln == "PSX":
                build_psx(name)
                obj = f"build/psx/{name}.o"
            elif ln == "PSXS":
                run(f"mipsel-linux-gnu-gcc-13 -E -P -Iinclude src/{name}.c"
                    f" -o build/psx/{name}.i")
                run(f"wine tools/psyq/bin/CC1PSX.EXE -quiet -O2 -fschedule-insns "
                    f"-G8 -mgpOPT -fgnu-linker build/psx/{name}.i "
                    f"-o /tmp/psxs_{name}.s")
                run(f"python3 tools/maspsx/maspsx.py --run-assembler "
                    f"--dont-expand-li -G8 -Iinclude -o build/psx/psxs_{name}.o "
                    f"< /tmp/psxs_{name}.s")
                obj = f"build/psx/psxs_{name}.o"
            else:
                obj = build_ladder(name, ln)
            if obj and os.path.exists(obj):
                objs[ln] = obj
                s = score(name, obj, a.stop_at_ret)
                if s < best[1]:
                    best = (ln, s)
        lane, s = best
        if a.bincmp:
            obj = objs.get(best[0])
            s = 0 if (obj and bincmp(name, obj)) else s
        if s == 0:
            print(f"  MATCH {name} [{lane}]")
            if a.register:
                register(name, lane)
                print(f"    registered ({lane})")
        else:
            print(f"  {name}: best {lane} = {s}")


if __name__ == "__main__":
    main()