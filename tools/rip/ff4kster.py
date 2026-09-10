#!/usr/bin/env python3
"""
ff4kster.py - SNES FF4 resource ripper driven by FF4KSTER's own address map.

Reads a vanilla FF2us 1MB ROM (LoROM, crc32 0x23084FCD) using the exact
addresses + decode loops from the FF4KSTER source (FF4KSTER_LINUX):
  - subs/read/readdata.bas   -> spritesheet offsets, palette base
  - types/gameobjects/methods/tileset.bas -> 4bpp tile decode + display
  - subs/graphics/setpalette.bas -> palette load (BGR555 << 3)
  - types/gameobjects/methods/map.bas -> map properties / tilemap RLE

Usage:
  python3 tools/rip/ff4kster.py ROM [outdir]
"""
import sys, os
from pathlib import Path

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import snes

# --- spritesheet offsets: readdata.bas lines ~193-205 (1-based) ---
SHEETS = [
    (1, 0xADE00, 0xFBBC0, "airship_ship"),
    (2, 0xF61A8, 0xFBBC0, "lunar_core"),
    (3, 0xF0220, 0xFBBC0, "sealed_cave"),
    (4, 0xEEF40, 0xFBEC0, "castle_exterior"),
    (5, 0xF1768, 0xFC040, "town"),
    (6, 0xF2EC0, 0xFC4C0, "house"),
    (7, 0xF3AC0, 0xFC640, "castle_interior"),
    (8, 0xF51E8, 0xFCAC0, "crystal_room"),
    (9, 0xF9700, 0xFCAC0, "lunar_whale_tower_giant"),
    (10, 0xF8200, 0xFCAC0, "feymarch"),
    (11, 0xF61A8, 0xFCAC0, "lunar_subterrane"),
    (12, 0xFD408, 0xFCF40, "mountain"),
    (13, 0xFEA88, 0xFCF40, "cave"),
]

PAL_BASE = 0xA6000          # 32 map palettes, 0x80B each (8 blocks x 8 cols x 2B)
TILE_ATTR = 0xA1000         # tile attribute table (0x100B per tileset)
TILEMAP = 0xA2000           # tile -> 4 sprite indices (0x400B per tileset)
MAP_PROPS = 0xA9E84         # map properties, 13B per map
ENCOUNTERS = 0x74542        # encounter rate per map
MONSTER_TBL = 0x7CC00       # monster: size,pal,gfx_ptr1,gfx_ptr2 (4B each)
MONSTER_NAMES = 0x71A00     # monster names, 8B each

TILES_SHEET = 0x400         # static tiles per sheet
TILES_ANIM = 0x80           # animated tiles per sheet


def _b(rom, off):
    return rom[off] if off < len(rom) else 0   # ByteAt() = 0 past EOF


def read_spritesheet(rom, offset, count=TILES_SHEET + TILES_ANIM):
    """Exact decode of tileset.bas ReadFromROM (bpp=4 branch)."""
    tiles = []
    for i in range(count):
        base = offset + i * 32
        g = [[0] * 8 for _ in range(8)]
        for j in range(8):
            b0 = _b(rom, base + j * 2)
            b1 = _b(rom, base + j * 2 + 1)
            b2 = _b(rom, base + 16 + j * 2)
            b3 = _b(rom, base + 16 + j * 2 + 1)
            for k in range(8):
                g[j][k] = ((b0 >> (7 - k)) & 1) | ((b1 >> (7 - k)) & 1) << 1 \
                    | ((b2 >> (7 - k)) & 1) << 2 | ((b3 >> (7 - k)) & 1) << 3
        tiles.append(g)
    return tiles


def read_palette(rom, index):
    """setpalette.bas: 8 blocks x 8 colors x 2B, BGR555 << 3."""
    base = PAL_BASE + index * 0x80
    cols = []
    for i in range(8):
        block = []
        for j in range(8):
            v = _b(rom, base + i * 16 + j * 2) | (_b(rom, base + i * 16 + j * 2 + 1) << 8)
            r = (v & 31) << 3
            g = ((v >> 5) & 31) << 3
            b = ((v >> 10) & 31) << 3
            block.append((r, g, b, 255))
        cols.append(block)
    return cols


def sheet_image(tiles, pal, ncols=32, scale=3, from_tile=0, count=None):
    """Raster the tile set with an 8-block palette (color = block<<3 | px&7)."""
    if count is None:
        count = len(tiles)
    sel = tiles[from_tile:from_tile + count]
    rows = (len(sel) + ncols - 1) // ncols
    W, H = ncols * 8, rows * 8
    img = [[(0, 0, 0, 255)] * W for _ in range(H)]
    for t, g in enumerate(sel):
        tx, ty = t % ncols, t // ncols
        for r in range(8):
            for c in range(8):
                v = g[r][c]
                block = (v >> 3) & 7          # 4bpp: palette-select bit
                col = v & 7
                img[ty * 8 + r][tx * 8 + c] = pal[block][col]
    big = []
    for y in range(H):
        row = []
        for x in range(W):
            row += [img[y][x]] * scale
        big += [row] * scale
    return big


def main():
    rom_path = sys.argv[1] if len(sys.argv) > 1 else "ff2.smc"
    outdir = Path(sys.argv[2]) if len(sys.argv) > 2 else \
        Path(__file__).resolve().parents[2] / "port/assets/gfx/snes/tilesets"
    rom = open(rom_path, "rb").read()
    outdir.mkdir(parents=True, exist_ok=True)
    for idx, off, aoff, name in SHEETS:
        tiles = read_spritesheet(rom, off)
        # strip the animated offset if it aliases later data beyond the sheet
        for p in range(4):
            pal = read_palette(rom, p)
            img = sheet_image(tiles, pal)
            snes.png_write(img, outdir / f"sheet_{idx:02d}_{name}_{p}.png", scale=1)
        # animated/NPC range, palettes 0-3 as 4 horizontal panels
        panels = []
        for p in range(4):
            pal = read_palette(rom, p)
            panels.append(sheet_image(tiles, pal, ncols=32, scale=2,
                                      from_tile=TILES_SHEET))
        gw = max(len(x[0]) for x in panels)
        gh = sum(len(x) for x in panels) + 4 * (len(panels) - 1)
        sheet = [[(0, 0, 0, 255)] * gw for _ in range(gh)]
        y0 = 0
        for pn in panels:
            for y in range(len(pn)):
                for x in range(len(pn[0])):
                    sheet[y0 + y][x] = pn[y][x]
            y0 += len(pn) + 4
        snes.png_write(sheet, outdir / f"sheet_{idx:02d}_{name}_animated.png", scale=1)
        print(f"sheet {idx:02d} {name}: {off:#x} done")


if __name__ == "__main__":
    main()