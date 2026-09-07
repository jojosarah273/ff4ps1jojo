#!/usr/bin/env python3
"""decomp_work.py — Phase A work-packets.

For each function, assemble everything a decompile pass needs into
decomp/work/<name>.md and track state in decomp/manifest.json:
  spec        : the byte-verified annotated assembly (asm/nonmatchings/main)
  oracle      : the psxrecomp machine-translated C for the same address
                (generated/SLUS_013.60_full_*.c in the recomp tree)
  lane        : which toolchain reproduces it (psx / psxs / modern / ladder)
  state       : shell | candidate | matched     (manifest only)

Usage:
  python3 tools/decomp_work.py NAME...            # emit packets
  python3 tools/decomp_work.py --all              # emit for every shell
  python3 tools/decomp_work.py --restore NAME...  # re-shell (discard bad C)
"""
import json
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
ASM = ROOT / "asm" / "nonmatchings" / "main"
SRC = ROOT / "src"
WORK = ROOT / "decomp" / "work"
MANIFEST = ROOT / "decomp" / "manifest.json"
RECOMP_GEN = Path("/tmp/ff4_recomp/generated")     # psxrecomp oracle tree
if not RECOMP_GEN.exists():
    RECOMP_GEN = ROOT / "recomp" / "generated"
LANES = {}
for raw in (ROOT / "expected" / "lanes.txt").read_text().splitlines():
    p = raw.split()
    if len(p) == 2:
        LANES[p[1]] = p[0]

LANE_HINT = {
    "psx":  "PSY-Q CC1PSX era lane (wine tools/psyq) — use `make psx FUNC=<n>`",
    "psxs": "PSY-Q era + scheduler lane (CC1PSX -fschedule-insns)",
    "modern": "modern gcc-13+maspsx lane — use `make build/<n>.o`",
    "ladder-2.95.2": "gcc 2.95.2 era lane (tools/gcc-ladder)",
    "asm": "hand-written assembly — C byte-match unlikely; keep asm shell",
}


def oracle_for(addr_hex: str) -> str:
    if not RECOMP_GEN.exists():
        return "(recomp oracle tree not found)"
    needle = f"func_{addr_hex}"
    for cf in sorted(RECOMP_GEN.glob("SLUS_013.60_full_*.c")):
        txt = cf.read_text(errors="replace")
        if needle in txt:
            i = txt.find(needle)
            return txt[i:i + 1400]
    return "(no oracle hit)"


def addr_of(name: str) -> str:
    m = re.search(r"func_(800[0-9A-F]+)", name)
    return m.group(1) if m else "????????"


def emit(name: str) -> None:
    spec = ASM / f"{name}.s"
    if not spec.exists():
        return
    src_p = SRC / f"{name}.c"
    is_shell = "__asm__" in src_p.read_text() if src_p.exists() else True
    lane = LANES.get(name, "?")
    md = (
        f"# {name}  —  state: {'shell' if is_shell else 'candidate'}\n\n"
        f"- **address**: 0x{addr_of(name)}\n"
        f"- **lane**: {lane}  — {LANE_HINT.get(lane.split('-')[0], lane)}\n"
        f"- **size**: {sum(1 for l in spec.read_text().splitlines() if '/*' in l)} insns\n\n"
        f"## verify\n"
        f"    make build/{name}.o && ~/.venvs/ff4_decomp/bin/asm-differ {name} "
        f"-j .text -o -f build/{name}.o -F build/expected/{name}.o\n"
        f"100% match -> register: cp build/expected/{name}.o expected/matched/\n"
        f"and delete the asm spec. Else: `python3 tools/decomp_work.py --restore {name}`\n\n"
        f"## spec (byte-verified assembly)\n```assembly\n"
        f"{spec.read_text()[:5000]}\n```\n\n"
        f"## oracle (psxrecomp translation, semantic reference only)\n```c\n"
        f"{oracle_for(addr_of(name))}\n```\n"
    )
    WORK.mkdir(parents=True, exist_ok=True)
    (WORK / f"{name}.md").write_text(md)
    print(f"  packet {name}")


def main() -> None:
    args = sys.argv[1:]
    if args and args[0] == "--restore":
        sys.path.insert(0, str(ROOT / "tools"))
        from re_shell import make_shell
        for n in args[1:]:
            make_shell(n)
        return
    if args and args[0] == "--all":
        names = sorted(s.stem for s in ASM.glob("*.s"))
    else:
        names = args
    todo, done = 0, 0
    for n in names:
        src_p = SRC / f"{n}.c"
        is_shell = "__asm__" in src_p.read_text() if src_p.exists() else True
        if src_p.exists() and not is_shell:
            continue  # real C already present
        emit(n)
        todo += 1
    print(f"  packets written: {todo}")


if __name__ == "__main__":
    main()