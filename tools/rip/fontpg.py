#!/usr/bin/env python3
"""fontpg.py — render candidate font regions as PNG contact sheets.

The disc font in ff4.bin / slus_013.60 hasn't been pinned to an offset.
This renders every plausible 16x16 1bpp region (and 8x8 variants) as
PNG sheets for visual identification against the reference sheet
(96960.png). Bigger lit count = more font-like.

Usage:
  python3 tools/rip/fontpg.py port/assets/ff4.bin --out port/assets/font_sheets
  python3 tools/rip/fontpg.py port/assets/slus_013.60 --tile 8 --min-run 32
"""
import argparse
import struct
import zlib
from pathlib import Path


def png_write(w, h, rows16, path, scale=2):
    """1bpp 16-bit rows -> PNG. One filter byte per scanline (strict)."""
    import zlib
    sw, sh = w * scale, h * scale
    raw = b""
    for yy in range(h):
        v = rows16[yy]
        line = bytearray(b"\x00" * (sw * 3))
        for xx in range(w):
            if v & (1 << (w - 1 - xx)):
                for sxx in range(scale):
                    for c in range(3):
                        line[(xx * scale + sxx) * 3 + c] = 255
        for _ in range(scale):
            raw += b"\x00" + bytes(line)   # filter byte per scanline
    def chunk(tag, d):
        c = struct.pack(">I", len(d)) + tag + d
        c += struct.pack(">I", zlib.crc32(tag + d) & 0xffffffff)
        return c
    png = b"\x89PNG\r\n\x1a\n"
    png += chunk(b"IHDR", struct.pack(">IIBBBBB", sw, sh, 8, 2, 0, 0, 0))
    png += chunk(b"IDAT", zlib.compress(raw, 9))
    png += chunk(b"IEND", b"")
    Path(path).write_bytes(png)
    def chunk(tag, d):
        c = struct.pack(">I", len(d)) + tag + d
        c += struct.pack(">I", zlib.crc32(tag + d) & 0xffffffff)
        return c
    png = b"\x89PNG\r\n\x1a\n"
    png += chunk(b"IHDR", struct.pack(">IIBBBBB", sw, sh, 8, 2, 0, 0, 0))
    png += chunk(b"IDAT", zlib.compress(raw, 9))
    png += chunk(b"IEND", b"")
    Path(path).write_bytes(png)


def scan(data, tile, min_run, min_density, max_density):
    rowbytes = tile * 2 if tile == 16 else tile
    step = tile * 2 if tile == 16 else tile
    n = len(data) - step
    runs = []
    i = 0
    while i < n:
        blk = data[i:i + step]
        lit = sum(b.bit_count() for b in blk)
        d = lit / (step * 8)
        if min_density < d < max_density:
            j = i
            while j < n:
                b2 = data[j:j + step]
                d2 = sum(b.bit_count() for b in b2) / (step * 8)
                if min_density < d2 < max_density:
                    j += step
                else:
                    break
            run = (j - i) // step
            if run >= min_run:
                runs.append((i, run))
            i = j + step
        else:
            i += 1
    return runs


def tile_rows(data, off, tile):
    if tile == 16:
        return [ (data[off + r*2] << 8) | data[off + r*2 + 1] for r in range(tile) ]
    return [ ((data[off + r] << 8) & 0xFF00) for r in range(tile) ]

def sheet_from(data, off, step, tile, ncols, ntiles):
    """ntiles x ncols grid of tile-size glyphs -> flat rows (each row spans
    a glyph column only; rendering later tiles means the PNG is ntiles rows
    of glyphs drawn side by side via width = tile)."""
    rows = []
    for t in range(ntiles):
        g = tile-rows(data, off + t * step, tile)
        rows.append(g)
    return rows  # list of glyph columns (ntiles rows of the sheet)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("image")
    ap.add_argument("--tile", type=int, default=16, choices=(8, 16))
    ap.add_argument("--min-run", type=int, default=48)
    ap.add_argument("--min-density", type=float, default=0.04)
    ap.add_argument("--max-density", type=float, default=0.55)
    ap.add_argument("--out", default="port/assets/font_sheets")
    args = ap.parse_args()

    data = Path(args.image).read_bytes()
    runs = scan(data, args.tile, args.min_run, args.min_density, args.max_density)
    runs = sorted(runs, key=lambda r: -r[1])[:24]
    outdir = Path(args.out)
    outdir.mkdir(parents=True, exist_ok=True)
    step = args.tile * 2 if args.tile == 16 else args.tile
    ncols = 40
    for idx, (off, run) in enumerate(runs):
        # pack N tiles row-major into a flat rows array of width tile
        ntiles = 44
        allrows = []
        for t in range(ntiles):
            g = tile_rows(data, off + t * step, args.tile)
            allrows.extend(g)
        name = f"{Path(args.image).stem}_{args.tile}x{args.tile}_{off:05x}_{run}.png"
        png_write(args.tile, len(allrows), allrows, outdir / name)
        print(f"{idx:2d} @ {off:#07x} run={run:6d} -> {name}")

    print(f"\nwrote sheets to {outdir}; compare against 96960.png (the "
          f"reference font sheet) to find the real font offset.")


if __name__ == "__main__":
    main()