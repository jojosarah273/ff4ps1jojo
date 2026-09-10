#!/usr/bin/env python3
"""tim.py — parse and render PlayStation TIM textures.

Handles 4bpp/8bpp + optional CLUT blocks, PS1 15-bit colours, VRAM
coords. Renders to a scale-N PNG (strict writer).

Usage:
  python3 tools/rip/tim.py port/assets/sqea.tim --out port/assets/sqea.png
  python3 tools/rip/tim.py "/media/.../cardtim/savemod.tim" --out /tmp/t.png
"""
import argparse
import struct
import zlib
from pathlib import Path


def ps1_rgb555(v):
    r = ((v >> 10) & 0x1F) * 255 // 31
    g = ((v >> 5) & 0x1F) * 255 // 31
    b = (v & 0x1F) * 255 // 31
    return (r, g, b)


def parse_tim(data):
    if struct.unpack_from("<I", data, 0)[0] != 0x10:
        raise ValueError("not a TIM (magic)")
    flags = struct.unpack_from("<H", data, 6)[0]
    nxt = 8
    clut = None
    if flags & 8:
        csize, cx, cy = struct.unpack_from("<IHH", data, nxt)
        cbuf = data[nxt + 8: nxt + 8 + csize]
        ncol = csize // 2
        clut = [(cx, cy, [ps1_rgb555(struct.unpack_from("<H", cbuf, k * 2)[0])
                          for k in range(ncol)])]
        nxt += 8 + csize
    isize, ix, iy = struct.unpack_from("<IHH", data, nxt)
    ibuf = data[nxt + 8: nxt + 8 + isize]
    bpp = 4 if (flags & 3) == 0 else 8
    return flags, clut, (ix, iy, bpp, ibuf)


def render_tim(tim, scale=4):
    flags, clut, (ix, iy, bpp, ibuf) = tim
    if clut:
        cx, cy, palette = clut[0]
    else:
        palette = [(v, v, v) for v in range(256)]
    # image strides
    if bpp == 4:
        stride = (ix + 3) // 4 * 2  # 2 bytes per 4 px
    else:
        stride = ix
    w = ix
    h = len(ibuf) // stride if stride else 0
    px = bytearray()
    for yy in range(h):
        for xx in range(w):
            if bpp == 4:
                byte = ibuf[yy * stride + xx // 4]
                idx = (byte >> (4 * (3 - xx % 4))) & 0xF
            else:
                idx = ibuf[yy * stride + xx]
            r, g, b = palette[idx % len(palette)]
            px += bytes((r, g, b))

    W, H = w * scale, h * scale
    raw = b""
    for yy in range(h):
        for _ in range(scale):
            line = bytearray(b"\x00" * (W * 3))
            base = yy * w * 3
            for xx in range(w):
                for s in range(scale):
                    for k in range(3):
                        line[(xx * scale + s) * 3 + k] = px[base + xx * 3 + k]
            raw += b"\x00" + bytes(line)

    def chunk(tag, d):
        c = struct.pack(">I", len(d)) + tag + d
        c += struct.pack(">I", zlib.crc32(tag + d) & 0xffffffff)
        return c

    png = b"\x89PNG\r\n\x1a\n"
    png += chunk(b"IHDR", struct.pack(">IIBBBBB", W, H, 8, 2, 0, 0, 0))
    png += chunk(b"IDAT", zlib.compress(raw, 9))
    png += chunk(b"IEND", b"")
    return png


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("tim")
    ap.add_argument("--out", default=None)
    ap.add_argument("--scale", type=int, default=4)
    args = ap.parse_args()
    data = Path(args.tim).read_bytes()
    tim = parse_tim(data)
    flags, clut, (ix, iy, bpp, ibuf) = tim
    print(f"{args.tim}: bpp={bpp} image={ix}x? clut={'yes' if clut else 'no'}")
    png = render_tim(tim, args.scale)
    out = args.out or (Path(args.tim).with_suffix(".png"))
    Path(out).write_bytes(png)
    print(f"wrote {len(png)} bytes -> {out}")


if __name__ == "__main__":
    main()