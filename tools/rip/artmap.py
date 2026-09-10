#!/usr/bin/env python3
"""artmap.py — build the SNES art region map from the sprite IPS patches.

Cross-references the sprite/portrait/monster IPS patch offsets (the
community patches reveal exactly where the game's graphics live) with
the FF4 decomp's decoded ranges, and writes port/docs/ARTSRC.md - the
authoritative "where the original art is" table, including regions the
decomp never decoded (character battle sprites 0x0D1000-0x0E7E00).

Usage:  python3 tools/rip/artmap.py
"""
import glob
import json
import os
import re
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from ips import parse_ips  # noqa: E402

ROOT = Path(__file__).resolve().parent.parent.parent
PATCHES = ROOT / "sprite ips patches"
DECOMP_JSON = ROOT.parent / "FF4_FROM_SOURCE" / "ff4" / "ff4-en-data.json"


def patch_coverage():
    """Merged patch runs per category -> the community-placed anchors."""
    cats = {}
    for cat in os.listdir(PATCHES):
        d = PATCHES / cat
        if not d.is_dir():
            continue
        runs = []
        for f in glob.glob(str(d / "**" / "*.ips"), recursive=True):
            try:
                recs = parse_ips(open(f, "rb").read())
            except Exception:
                continue
            for ro, sz, pl, eff, v in recs:
                runs.append((ro, ro + eff))
        if not runs:
            continue
        merged = []
        for a, b in sorted(runs):
            if merged and a <= merged[-1][1]:
                merged[-1] = (merged[-1][0], max(merged[-1][1], b))
            else:
                merged.append((a, b))
        cats[cat] = merged
    return cats


def decomp_ranges():
    data = json.load(open(DECOMP_JSON))
    asm = data["assembly"]
    out = []
    for k, v in asm.items():
        r = v.get("range", "")
        if "-" in r:
            a, b = r.split("-")
            try:
                out.append((int(a, 16), int(b, 16), k,
                            v.get("assembly", {}).get("format", ""),
                            v.get("assembly", {}).get("palette", "")))
            except Exception:
                pass
    return sorted(out)


def main():
    cats = patch_coverage()
    dr = decomp_ranges()
    lines = ["# FF4 SNES — art source map (from the sprite IPS + the decomp)",
             "",
             "Community sprite IPS patches replace the base game's art at",
             "FIXED ROM offsets, so their merged runs reveal exactly where",
             "the original graphics live. The decomp's decoded ranges pin",
             "formats/palettes. THE PS1 REUSED THIS ART (no new sprites).",
             "",
             "## Patch-derived regions (what the IPS hit)",
             "| category | region | bytes | likely art |",
             "|----------|--------|-------|------------|"]
    for cat, merged in sorted(cats.items()):
        tot = sum(b - a for a, b in merged)
        a0, b0 = merged[0][0], merged[-1][1]
        lines.append(f"| {cat} | 0x{a0:06X}-0x{b0:06X} | {tot} | - |")
        for a, b in sorted(merged, key=lambda m: -(m[1]-m[0]))[:3]:
            lines.append(f"| (big run) | 0x{a:06X}-0x{b:06X} | {b-a} | - |")
    lines += ["", "## Decomp decoded ranges covering the art",
              "| range | key | format | palette |", "|-------|-----|--------|---------|"]
    for a, b, k, f, p in dr:
        lines.append(f"| 0x{a:06X}-0x{b:06X} | {k} | {f} | {p} |")
    lines += ["", "## Never-decoded-by-decomp regions (from the IPS)",
              "Battle sprites (character battle gfx) 0x0D1000-0x0E7E00: the",
              "IPS battle-sprite patches all hit inside this span; the decomp",
              "has no key under it (npcPalettes 0x0D8000 + attackPalette",
              "0x0ECB00 flank it). Tiles are 3bpp (24B) per patch run sizes."]
    out = ROOT / "port" / "docs" / "ARTSRC.md"
    out.write_text("\n".join(lines) + "\n")
    print(f"wrote {out}")


if __name__ == "__main__":
    main()