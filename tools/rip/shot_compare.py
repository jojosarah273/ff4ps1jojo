#!/usr/bin/env python3
"""shot_compare.py — screenshot-driven visual verification.

Compare a REFERENCE screenshot (of the real game, e.g. from an emulator)
against what THIS project renders, and turn the "huge discrepancy" into
numbers we can act on:

  python3 tools/rip/shot_compare.py REF.png MINE.png [--target WxH] [--tile N]

- both images are normalized to a target size (default: MINE's size)
- per-block stats: mean-abs luminance diff + average RGB per block
- prints the overall MAE, the worst blocks, and an ASCII diff heatmap
- prints dominant-color histograms for both (palette sanity)

The ref screenshots live in port/assets/gfx/snes/intro/refs/ (see
refs/README.md for capture instructions).
"""
import sys, os, struct, zlib, argparse

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))


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
    def sp(x, y):
        if ct == 3:
            v = raw[y * w + x]
            c = pal[v] if v < len(pal) else (0, 0, 0)
            return (c[0], c[1], c[2])
        if ct == 0:
            v = raw[y * w + x]
            return (v, v, v)
        if ct == 6:
            o = (y * w + x) * 4
            return (raw[o], raw[o + 1], raw[o + 2])
        o = (y * w + x) * 3
        return (raw[o], raw[o + 1], raw[o + 2])
    return w, h, sp


def to_img(w, h, sp):
    return [[sp(x, y) for x in range(w)] for y in range(h)]


def scale(img, tw, th):
    sh, sw = len(img), len(img[0])
    out = [[(0, 0, 0)] * tw for _ in range(th)]
    for y in range(th):
        sy = min(sh - 1, y * sh // th)
        for x in range(tw):
            out[y][x] = img[sy][min(sw - 1, x * sw // tw)]
    return out


def hist(img):
    from collections import Counter
    c = Counter()
    for row in img:
        for p in row:
            c[(p[0] >> 5, p[1] >> 5, p[2] >> 5)] += 1
    return c


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("ref")
    ap.add_argument("mine")
    ap.add_argument("--target", default=None, help="WxH to normalize to")
    ap.add_argument("--tile", default=16, type=int)
    a = ap.parse_args()
    rw, rh, rp = png_read(a.ref)
    mw, mh, mp = png_read(a.mine)
    ref = to_img(rw, rh, rp)
    mine = to_img(mw, mh, mp)
    if a.target:
        tw, th = (int(x) for x in a.target.split("x"))
    else:
        tw, th = len(ref[0]), len(ref)
    mine = scale(mine, tw, th)
    ref = scale(ref, tw, th)
    t = a.tile
    print(f"ref {rw}x{rh}  mine {mw}x{mh}  -> both at {tw}x{th}, tile {t}")
    mae = 0.0
    worst = []
    for ty in range(0, th, t):
        for tx in range(0, tw, t):
            d = 0.0
            rc = mc = [0, 0, 0]
            n = max(1, t * t)
            for y in range(ty, min(ty + t, th)):
                for x in range(tx, min(tx + t, tw)):
                    r, m = ref[y][x], mine[y][x]
                    lum = abs(sum(r) - sum(m)) / 3.0
                    d += lum
                    for k in range(3):
                        rc[k] += r[k]; mc[k] += m[k]
            d /= n
            mae += d
            worst.append((d, tx, ty,
                          tuple(c // n for c in rc), tuple(c // n for c in mc)))
    mae /= max(1, (th // t) * (tw // t))
    worst.sort(reverse=True)
    print(f"overall MAE: {mae:.1f}  (0 = identical; 128 = nonsense)")
    print("worst blocks (diff, x, y, avg ref RGB, avg mine RGB):")
    for w in worst[:12]:
        print("   %6.1f  (%3d,%3d)  %-14s %s" %
              (w[0], w[1], w[2], w[3], w[4]))
    # heatmap
    print("diff heatmap (16px rows, '#'=big diff):")
    for ty in range(0, th, t):
        line = "".join(" " if w[0] < 24 else ("+" if w[0] < 64 else "#")
                       for tx in range(0, tw, t)
                       for w in [next((x for x in worst if x[1] == tx and x[2] == ty),
                                      (0, tx, ty, 0, 0))])
        print("  " + line)
    # palettes
    h1, h2 = hist(ref), hist(mine)
    top1 = h1.most_common(6)
    top2 = h2.most_common(6)
    print("ref top colors :", [(hex((r << 5) | (g << 5) << 8 | (b << 5)), n)
                               for (r, g, b), n in top1])
    print("mine top colors:", [(hex((r << 5) | (g << 5) << 8 | (b << 5)), n)
                               for (r, g, b), n in top2])


if __name__ == "__main__":
    main()