#!/usr/bin/env python3
"""export_sprites.py - export verified PNG art to the port's .rgba format.

Each output file = 8-byte header (u32 LE width, u32 LE height) followed by
raw RGBA8888 pixels. Assets land in port/assets/gfx/snes/.
"""
import sys, os, struct, zlib
from pathlib import Path

BASE = Path(__file__).resolve().parents[2] / "port/assets"
OUT = BASE / "gfx/snes"

ENEMIES = {
    "golbez_display": "gfx/fe/golbez_display.png",
    "fe_ZeromusHD": "gfx/fe/fe_ZeromusHD.png",
    "fe_Trainmus": "gfx/fe/fe_Trainmus.png",
    "fe_Kefkomus": "gfx/fe/fe_Kefkomus.png",
}


def png_read(path):
    d = open(path, "rb").read()
    i = 8
    ch = {}
    while i < len(d):
        ln = struct.unpack(">I", d[i:i + 4])[0]
        ch[d[i + 4:i + 8]] = d[i + 8:i + 8 + ln]
        i += 12 + ln
    w, h = struct.unpack(">II", ch[b"IHDR"][:8])
    raw = zlib.decompress(ch[b"IDAT"])
    ct = ch[b"IHDR"][9]
    pal = None
    if ct == 3:
        pl = ch[b"PLTE"]
        pal = [(pl[k], pl[k + 1], pl[k + 2]) for k in range(0, len(pl) - 2, 3)]
    if b"tRNS" in ch and ct == 3:
        tr = ch[b"tRNS"]
    if ct in (0, 3):
        N = 1 + (ct == 0)
        stride = w * N
        out = bytearray(w * h * 4)
        for y in range(h):
            row = y * stride
            for x in range(w):
                if ct == 3:
                    v = raw[row + x]
                    c = pal[v] if v < len(pal) else (0, 0, 0)
                    a = 255 if v >= len(tr) else tr[v]
                    out[(y * w + x) * 4:(y * w + x) * 4 + 4] = bytes((*c, a))
                else:
                    v = raw[row + x]
                    out[(y * w + x) * 4:(y * w + x) * 4 + 4] = bytes((v, v, v, 255))
        return w, h, out
    # RGBA / RGB
    N = 4 if ct == 6 else 3
    stride = w * N
    out = bytearray(w * h * 4)
    for y in range(h):
        row = y * stride
        for x in range(w):
            o = (y * w + x) * 4
            if ct == 6:
                out[o:o + 4] = raw[row + x * 4:row + x * 4 + 4]
            else:
                out[o:o + 3] = raw[row + x * 3:row + x * 3 + 3]
                out[o + 3] = 255
    return w, h, out


def main():
    if len(sys.argv) > 1 and sys.argv[1] == "--all":
        items = ENEMIES.items()
    else:
        items = [(k, v) for k, v in ENEMIES.items()
                 if sys.argv[1] in k] if len(sys.argv) > 1 else ENEMIES.items()
    for name, rel in items:
        p = BASE / rel
        if not p.exists():
            print("skip", name, p)
            continue
        w, h, px = png_read(str(p))
        # these verified renders were exported at 4x: reverse to native canvas
        if w % 4 == 0 and h % 4 == 0:
            nw, nh = w // 4, h // 4
            out = bytearray(nw * nh * 4)
            for y in range(nh):
                for x in range(nw):
                    o = ((y * 4) * w + (x * 4)) * 4
                    d = (y * nw + x) * 4
                    out[d:d + 4] = px[o:o + 4]
            w, h, px = nw, nh, out
        blob = struct.pack("<II", w, h) + bytes(px)
        (OUT / f"battle_enemy_{name}.rgba").write_bytes(blob)
        print(f"{name}: {w}x{h} -> battle_enemy_{name}.rgba ({len(blob)})")


if __name__ == "__main__":
    main()