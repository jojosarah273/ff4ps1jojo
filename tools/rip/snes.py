#!/usr/bin/env python3
"""snes.py — render decoded SNES FF4 art from ff4-en-data.json.

The FF4 SNES decomp (FF4_FROM_SOURCE/ff4/ff4-en-data.json) carries the
full artwork decoded from the real ROM: battle backgrounds (3bpp tiles
+ tilemaps + RGBA palettes), monster graphics, map palettes, etc.
The PS1 release reuses the same art (no new sprites), so this is the
port's graphic asset source (SoH-style: extract from the original).

Usage:
  python3 tools/rip/snes.py --out port/assets/gfx/snes
  python3 tools/rip/snes.py --items battleBackgroundGraphics --out /tmp/bg
"""
import argparse
import base64
import json
import struct
import sys
import zlib
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent.parent
DATA = ROOT.parent / "FF4_FROM_SOURCE" / "ff4" / "ff4-en-data.json"


def b64(s):
    if isinstance(s, list):
        return base64.b64decode("".join(s))
    return base64.b64decode(s)


def decode3bpp(data):
    """SNES 3bpp: 24 bytes/tile (3 planes x 8 rows). Returns tiles of
    8x8 pixel-index grids."""
    tiles = []
    for off in range(0, len(data) - 23, 24):
        g = [[0] * 8 for _ in range(8)]
        for r in range(8):
            b0 = data[off + r * 2]
            b1 = data[off + r * 2 + 1]
            b2 = data[off + 16 + r]
            for x in range(8):
                px = ((b0 >> (7 - x)) & 1) | ((b1 >> (7 - x)) & 1) << 1 | \
                     ((b2 >> (7 - x)) & 1) << 2
                g[r][x] = px
        tiles.append(g)
    return tiles


def palette_rgba(raw):
    """RGBA bytes (already expanded by the decomp) -> list of (r,g,b,a)."""
    out = []
    for i in range(0, len(raw) - 3, 4):
        out.append((raw[i], raw[i + 1], raw[i + 2], raw[i + 3]))
    return out


def render_tilemap(data, tiles, pal, w, h, tilemap=None):
    """Assemble an image from tiles + optional 2-byte tilemap entries."""
    W, H = w * 8, h * 8
    img = [[(0, 0, 0, 255)] * W for _ in range(H)]
    for ty in range(h):
        for tx in range(w):
            if tilemap is not None:
                idx = (ty * w + tx) * 2
                ent = tilemap[idx] | (tilemap[idx + 1] << 8)
                t = ent & 0x3FF
                flipx = ent & 0x4000
                flipy = ent & 0x8000
            else:
                t = ty * w + tx
                flipx = flipy = False
            if t >= len(tiles):
                continue
            g = tiles[t]
            for r in range(8):
                for c in range(8):
                    src_r = (7 - r) if flipy else r
                    src_c = (7 - c) if flipx else c
                    p = g[src_r][src_c]
                    col = pal[p] if p < len(pal) else (0, 0, 0, 255)
                    img[ty * 8 + r][tx * 8 + c] = col
    return img


def png_write(img, path, scale=1):
    W = len(img[0])
    H = len(img)
    sw, sh = W * scale, H * scale
    raw = b""
    for row in img:
        for _ in range(scale):
            line = bytearray(b"\x00" * (sw * 4))
            for x, (r, g, b, a) in enumerate(row):
                for s in range(scale):
                    o = (x * scale + s) * 4
                    line[o] = r
                    line[o + 1] = g
                    line[o + 2] = b
                    line[o + 3] = a
            raw += b"\x00" + bytes(line)

    def chunk(tag, d):
        c = struct.pack(">I", len(d)) + tag + d
        c += struct.pack(">I", zlib.crc32(tag + d) & 0xffffffff)
        return c

    png = b"\x89PNG\r\n\x1a\n"
    png += chunk(b"IHDR", struct.pack(">IIBBBBB", sw, sh, 8, 6, 0, 0, 0))
    png += chunk(b"IDAT", zlib.compress(raw, 9))
    png += chunk(b"IEND", b"")
    Path(path).write_bytes(png)


def battle_backgrounds(data, outdir):
    obj, asm = data["obj"], data["assembly"]
    tiles_raw = obj["battleBackgroundGraphics"]
    layouts = obj.get("battleBackgroundLayoutLower") or obj.get("battleBackgroundLayoutUpper")
    pal = palette_rgba(b64(obj["battleBackgroundPalette"]))
    glyph = "".join
    n = min(len(tiles_raw), 17)
    for i in range(n):
        td = b64(tiles_raw[i]) if isinstance(tiles_raw[i], (str, list)) else bytes(tiles_raw[i])
        tiles = decode3bpp(td)
        # dimension guess: square-ish tile grid by item length
        nt = len(tiles)
        import math
        w = max(int(math.sqrt(nt)), 1)
        h = (nt + w - 1) // w
        img = render_tilemap(td, tiles, pal, w, h, tilemap=None)
        png_write(img, Path(outdir) / f"battle_bg_{i:02d}.png")
    return n




def battle_scenes(data, outdir):
    """Compose full battle background scenes (upper+lower layouts)."""
    obj = data["obj"]
    tiles_raw = obj["battleBackgroundGraphics"]
    lower = obj.get("battleBackgroundLayoutLower") or []
    upper = obj.get("battleBackgroundLayoutUpper") or []
    pal = palette_rgba(b64(obj["battleBackgroundPalette"]))
    n = min(len(tiles_raw), len(lower), len(upper))
    made = 0
    for i in range(n):
        td = b64(tiles_raw[i])
        tiles = decode3bpp(td)
        lo = b64(lower[i]) if isinstance(lower[i], (str, list)) else bytes(lower[i])
        up_ = b64(upper[i]) if isinstance(upper[i], (str, list)) else bytes(upper[i])
        # scenes: 32 cols x 24 rows (256x192); lower at bottom 8 rows,
        # upper at top 16 rows
        img = [[(0, 0, 0, 255)] * 256 for _ in range(192)]
        def blit(tm, y0, h):
            for ty in range(h):
                for tx in range(32):
                    idx = (ty * 32 + tx) * 2
                    if idx + 1 >= len(tm):
                        return
                    ent = tm[idx] | (tm[idx + 1] << 8)
                    t = ent & 0x3FF
                    fx = ent & 0x4000
                    fy = ent & 0x8000
                    if t >= len(tiles):
                        continue
                    g = tiles[t]
                    for r in range(8):
                        for c in range(8):
                            sr = (7 - r) if fy else r
                            sc = (7 - c) if fx else c
                            p = g[sr][sc]
                            col = pal[p] if p < len(pal) else (0, 0, 0, 255)
                            yy, xx = y0 * 8 + r, tx * 8 + c
                            if 0 <= yy < 192 and 0 <= xx < 256:
                                img[yy][xx] = col
        blit(lo, 24 - 8, 8)     # lower layer at the bottom
        blit(up_, 0, 16)        # upper layer at the top
        png_write(img, Path(outdir) / f"battle_scene_{i:02d}.png")
        made += 1
    return made


def battle_sprites(data, rom, outdir):
    """Extract the never-decoded battle-sprite region with its palettes
    (tiles 0x0D0000-0x0D7FFF basis + palette table 0x0E7D00, 13 x 16
    colors, bgr555 -> RGBA asset)."""
    def bgr(v):
        return ((v & 0x1F) * 255 // 31, ((v >> 5) & 0x1F) * 255 // 31,
                ((v >> 10) & 0x1F) * 255 // 31, 255)
    PT, NPAL = 0x0E7D00, 13
    pal = []
    for p in range(NPAL):
        cur = []
        for i in range(16):
            v = rom[PT + p*32 + i*2] | (rom[PT + p*32 + i*2 + 1] << 8)
            cur.append(bgr(v))
        pal.append(cur)
    raw = bytearray()
    for p in pal:
        for c in p:
            raw += bytes(c)
    Path(outdir / "battle_palette_table_13x16.rgba").write_bytes(bytes(raw))
    def tile(idx):
        g = [[0] * 8 for _ in range(8)]
        base = 0x0D0000 + idx * 24
        for r in range(8):
            b0 = rom[base + r*2]; b1 = rom[base + r*2 + 1]; b2 = rom[base + 16 + r]
            for x in range(8):
                g[r][x] = ((b0 >> (7-x)) & 1) | ((b1 >> (7-x)) & 1) << 1 | \
                          ((b2 >> (7-x)) & 1) << 2
        return g
    tiles = [tile(i) for i in range(512)]
    for p in (0, 1, 3, 5):
        cols = 48
        img = [[(0, 0, 0, 255)] * (cols * 8) for _ in range(((len(tiles) + cols - 1) // cols) * 8)]
        for i, g in enumerate(tiles):
            tx, ty = i % cols, min(i // cols, len(img) - 1)
            for r in range(8):
                for c in range(8):
                    ix = g[r][c]
                    img[ty*8 + r][tx*8 + c] = pal[p][ix] if ix < 16 and pal[p][ix][:3] != (0, 0, 0) else (12, 14, 20, 255)
        png_write(img, Path(outdir) / f"battle_tiles_pal{p}.png")
    return NPAL


def decode4bpp(datab):
    """SNES 4bpp: planes 0-1 rows 0-7, then planes 2-3 rows 0-7 (32B)."""
    tiles = []
    for off in range(0, len(datab) - 31, 32):
        g = [[0] * 8 for _ in range(8)]
        for r in range(8):
            b0 = datab[off + r*2]; b1 = datab[off + r*2 + 1]
            b2 = datab[off + 16 + r*2]; b3 = datab[off + 16 + r*2 + 1]
            for x in range(8):
                g[r][x] = ((b0 >> (7-x)) & 1) | ((b1 >> (7-x)) & 1) << 1 | \
                          ((b2 >> (7-x)) & 1) << 2 | ((b3 >> (7-x)) & 1) << 3
        tiles.append(g)
    return tiles

def characters(data, outdir):
    obj = data["obj"]
    names = ["Cecil","Kain","Rydia","Tellah","Edward","Rosa","Yang","Palom",
             "Porom","Edge","Cid","Anna","Golbez","FuSoYa","?14","?15"]
    for i in range(min(16, len(obj["characterGraphics"]), len(obj["characterPalette"]))):
        td = b64(obj["characterGraphics"][i])
        pal = palette_rgba(b64(obj["characterPalette"][i]))
        tiles = decode4bpp(td)
        cols = 12
        img = [[(0, 0, 0, 255)] * (cols * 8) for _ in range(((len(tiles) + cols - 1) // cols) * 8)]
        for t, g in enumerate(tiles):
            tx, ty = t % cols, min(t // cols, len(img) - 1)
            for r in range(8):
                for c in range(8):
                    ix = g[r][c]
                    img[ty*8 + r][tx*8 + c] = pal[ix] if ix < len(pal) and pal[ix][:3] != (0, 0, 0) else (8, 10, 14, 255)
        png_write(img, Path(outdir) / f"char_{i:02d}_{names[i]}.png", scale=3)
    return len(obj["characterGraphics"])

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--json", default=str(DATA))
    ap.add_argument("--out", default=str(ROOT / "port/assets/gfx/snes"))
    args = ap.parse_args()
    outdir = Path(args.out)
    outdir.mkdir(parents=True, exist_ok=True)
    data = json.load(open(args.json))
    n = battle_backgrounds(data, outdir)
    m = battle_scenes(data, outdir)
    print(f"wrote {n} tile-sheets + {m} composed scenes -> {args.out}")


if __name__ == "__main__":
    main()