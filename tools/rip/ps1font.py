#!/usr/bin/env python3
"""ps1font.py — extract the PS1 typeset glyphs from the confirmed rip
(2.png) into an 8x8 bitmap bank, then scan the disc banks for the same
shapes to locate the in-game font.

Layout: 8x8 glyphs; English in the upper block, katakana + button
glyphs + 'MISS' glyph below. Extraction is segmentation-first (lines by
row projection, glyphs by column projection) with a tolerance for the
rip outlines.

Usage:
  python3 tools/rip/ps1font.py extract --png 2.png --out port/assets/font_ps1_8x8.bin
  python3 tools/rip/ps1font.py match
"""
import argparse
import json
import struct
import zlib
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent.parent


def load_png_rgb(path):
    d = Path(path).read_bytes()
    i = 8
    ch = {}
    while i < len(d):
        ln = struct.unpack(">I", d[i:i + 4])[0]
        ch[d[i + 4:i + 8]] = d[i + 8:i + 8 + ln]
        i += 12 + ln
    w, h = struct.unpack(">II", ch[b"IHDR"][:8])
    bt = ch[b"IHDR"][9]
    raw = zlib.decompress(ch[b"IDAT"])
    nch = 4 if bt == 6 else (3 if bt == 2 else 1)
    return w, h, nch, raw


class Sheet:
    def __init__(self, path):
        self.w, self.h, self.nch, self.raw = load_png_rgb(path)
        self.stride = self.w * self.nch

    def ink(self, x, y):
        o = y * self.stride + x * self.nch
        if self.nch == 4 and self.raw[o + 3] < 128:
            return False
        return not (self.raw[o] == 0 and self.raw[o + 1] == 0 and self.raw[o + 2] == 0)

    def segment(self, y0, y1):
        """column projection over rows y0..y1 -> glyph boxes."""
        prof = [any(self.ink(x, yy) for yy in range(y0, y1)) for x in range(self.w)]
        boxes = []
        x = 0
        while x < self.w:
            if prof[x]:
                x0 = x
                while x < self.w and prof[x]:
                    x += 1
                boxes.append((x0, x - x0))
            else:
                x += 1
        return boxes

    def extract_glyphs(self, min_ink=5, max_ink=60):
        # split into text lines by row projection
        rowp = [any(self.ink(x, y) for x in range(self.w)) for y in range(self.h)]
        lines = []
        y = 0
        while y < self.h:
            if rowp[y]:
                y0 = y
                while y < self.h and rowp[y]:
                    y += 1
                lines.append((y0, y))
            else:
                y += 1
        glyphs = []
        for (y0, y1) in lines:
            for (x0, wid) in self.segment(y0, y1):
                # tighten vertically
                mini = [yy for yy in range(y0, y1)
                        if any(self.ink(x, yy) for x in range(x0, x0 + wid))]
                if not mini:
                    continue
                yt0, yt1 = min(mini), max(mini) + 1
                hgt = yt1 - yt0
                if not (5 <= hgt <= 12 and 4 <= wid <= 12):
                    continue
                bm = [[1 if self.ink(x, y) else 0 for x in range(x0, x0 + wid)]
                      for y in range(yt0, yt1)]
                lit = sum(sum(r) for r in bm)
                if lit < min_ink or lit > max_ink:
                    continue
                glyphs.append({
                    "x": x0, "y": yt0, "w": wid, "h": hgt, "lit": lit,
                    "rows": bm,
                })
            break  # first text line only for now (English block)
        return glyphs


def pack8x8(g):
    """resize glyph rows into a canonical 8x8 bitmap (int per row)."""
    bm = g["rows"]
    w, h = g["w"], g["h"]
    out = []
    for r in range(8):
        row = 0
        for c in range(8):
            # nearest-neighbour scale into the 8x8 frame, centered
            sx = int(c * w / 8) if c < w else w - 1
            sy = int(r * h / 8) if r < h else h - 1
            if sy < h and sx < w and bm[sy][sx]:
                row |= 1 << (7 - c)
        out.append(row)
    return out


def png_from_rows(rows16, tile=8, path="sheet.png", scale=8):
    import zlib
    n = len(rows16) // tile
    w, h = tile, n * tile
    sw, sh = w * scale, h * scale
    raw = b""
    for yy in range(h):
        r = rows16[yy]
        for _ in range(scale):
            line = bytearray(b"\x00" * (sw * 3))
            for xx in range(w):
                if r & (1 << (7 - xx)):
                    for sxx in range(scale):
                        for c in range(3):
                            line[(xx * scale + sxx) * 3 + c] = 255
            raw += b"\x00" + bytes(line)

    def chunk(tag, d):
        c = struct.pack(">I", len(d)) + tag + d
        c += struct.pack(">I", zlib.crc32(tag + d) & 0xffffffff)
        return c

    png = b"\x89PNG\r\n\x1a\n"
    png += chunk(b"IHDR", struct.pack(">IIBBBBB", sw, sh, 8, 2, 0, 0, 0))
    png += chunk(b"IDAT", zlib.compress(raw, 9))
    png += chunk(b"IEND", b"")
    Path(path).write_bytes(png)


def main():
    ap = argparse.ArgumentParser()
    sub = ap.add_subparsers(dest="cmd", required=True)

    ex = sub.add_parser("extract")
    ex.add_argument("--png", default=str(ROOT / "2.png"))
    ex.add_argument("--out", default=str(ROOT / "port/assets/font_ps1_8x8.bin"))
    ex.add_argument("--sheet", default=str(ROOT / "port/assets/font_ps1_extracted.png"))

    ma = sub.add_parser("match")
    ma.add_argument("--ref", default=str(ROOT / "port/assets/font_ps1_extracted.png"))
    ma.add_argument("--banks", nargs="*",
                    default=[str(ROOT / "port/assets/ff4.bin"),
                             str(ROOT / "port/assets/battle.bin"),
                             str(ROOT / "port/assets/slus_013.60")])

    args = ap.parse_args()
    if args.cmd == "extract":
        s = Sheet(args.png)
        glyphs = s.extract_glyphs()
        rows = []
        for g in glyphs:
            rows.extend(pack8x8(g))
        buf = bytes().join(bytes(r) for r in rows)
        Path(args.out).write_bytes(buf)
        png_from_rows(rows, tile=8, path=args.sheet, scale=8)
        print(f"extracted {len(glyphs)} glyphs -> {args.out}")
        print(f"contact sheet -> {args.sheet}")
        for g in glyphs[:20]:
            print(f"  x={g['x']:3d} y={g['y']:3d} {g['w']}x{g['h']} lit={g['lit']}")
    elif args.cmd == "match":
        # load extracted glyphs (via a re-extract) and scan banks
        s = Sheet(args.ref)
        glyphs = s.extract_glyphs()
        refs = [pack8x8(g) for g in glyphs]
        print(f"{len(refs)} reference glyphs; scanning banks...")
        best = []
        for bank in args.banks:
            data = Path(bank).read_bytes()
            n = len(data) - 8
            for off in range(0, n):
                tile = list(data[off:off + 8])
                lit = sum(b.bit_count() for b in tile)
                if not (2 <= lit <= 24):
                    continue
                for rr in refs:
                    score = sum((tile[k] ^ rr[k]).bit_count() for k in range(8))
                    if score <= 2:
                        best.append((score, off, bank, tile.hex()))
        best.sort()
        print("best exact/near matches (score, off, bank):")
        for s_, off_, b_, th in best[:25]:
            print(f"  {s_} @ {off_:#07x} {Path(b_).name} tile={th}")
        if not best:
            print("none found")
            return
        # cluster offsets
        offs = sorted(o for _, o, _, _ in best)
        print("first offsets:", offs[:10])


if __name__ == "__main__":
    main()