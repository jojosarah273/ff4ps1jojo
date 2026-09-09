#!/usr/bin/env python3
"""Text/glyph atlas decoder — turns a dump of the 0x800D text page
(or the disc file that maps there) into a font sheet + string table.

The catalog page layout (from db/catalogs.c + cell_cursor_read):
  * cells are 2 bytes; the charset page lives at ids 0x20xx..0x21FF
    (cell_char's mapping); 0x29xx looks like a u16 string-index table
    the cursor walks (cell_cursor_read: v = p[1]<<8 | p[2], advance 2)
  * glyphs: FF4 PS1 text is drawn as 16x16 cells (the PS1 VRAM text
    page has 16x16 tiles); each glyph id's low byte is the ASCII/u16
    code; the pixel data + CLUT live adjacent in the page.

Unknowns are resolved by scanning the dump for plauible tile rows;
this decoder renders whatever 16x16 pattern runs it finds and saves
them as PNG sheets for visual verification.

Usage:
  python3 tools/rip/atlas.py DUMP.BIN [--out sheet.png] [--tile 16]
"""
import argparse
import struct
import sys
from pathlib import Path


def scan_tiles(blob: bytes, tile: int):
    """Naive glyph scan: every tile row of `tile**2//8` bytes is kept if
    it has both lit and empty pixels (a glyph, not solid fill)."""
    row = tile * tile // 8
    glyphs = []
    for off in range(0, len(blob) - row, row):
        px = blob[off: off + row]
        lit = sum(b.bit_count() for b in px)
        if 0 < lit < row * 8 * 3 // 4:
            glyphs.append((off, lit, px))
    return glyphs


def png_bytes(tiles, tile: int, cols: int):
    """Minimal PNG writer (uncompressed) - no deps."""
    import zlib
    rows = (len(tiles) + cols - 1) // cols
    w, h = cols * tile, rows * tile
    raw = b""
    for row in range(rows):
        raw += b"\x00"
        for col in range(cols):
            i = row * cols + col
            for yy in range(tile):
                line = b""
                for xx in range(tile):
                    byte_i = (yy * tile + xx) // 8
                    bit = 7 - ((yy * tile + xx) % 8)
                    if i < len(tiles):
                        on = (tiles[i][2][byte_i] >> bit) & 1
                    else:
                        on = 0
                    line += b"\xff" if on else b"\x00\x00\x00"
                raw += line
    def chunk(tag, data):
        c = struct.pack(">I", len(data)) + tag + data
        c += struct.pack(">I", zlib.crc32(tag + data) & 0xffffffff)
        return c
    png = b"\x89PNG\r\n\x1a\n"
    png += chunk(b"IHDR", struct.pack(">IIBBBBB", w, h, 8, 2, 0, 0, 0))
    png += chunk(b"IDAT", zlib.compress(raw, 9))
    png += chunk(b"IEND", b"")
    return png


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("dump", help="binary dump of the text page")
    ap.add_argument("--tile", type=int, default=16)
    ap.add_argument("--out", default="glyphs.png")
    args = ap.parse_args()

    blob = Path(args.dump).read_bytes()
    tiles = scan_tiles(blob, args.tile)
    if not tiles:
        print("no glyph-like tile runs found in", Path(args.dump).name)
        print("(try a section of the dump, or the region starting 0x1000)")
        return
    cols = 32
    Path(args.out).write_bytes(png_bytes(tiles, args.tile, cols))
    print(f"{len(tiles)} candidate glyph tiles (first at {tiles[0][0]:#x}); "
          f"sheet -> {args.out}")
    print("next: run against the disc's text sector and verify shapes,")
    print("then pair ids with strings via the 0x29xx index table.")


if __name__ == "__main__":
    main()