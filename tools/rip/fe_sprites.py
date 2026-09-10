#!/usr/bin/env python3
"""fe_sprites.py — compose Free-Enterprise sprite scripts into the exact
in-engine display image (chr + packed tilemap + bgr555 palette + size +
offset), i.e. the round-trip proof: PNG -> FE encoder -> these bytes ->
the display the SNES actually draws.

Usage:
  python3 tools/rip/fe_sprites.py /tmp/golbez.f4c --out port/assets/gfx/fe/x.png
  python3 tools/rip/fe_sprites.py ASSET.json --type asset --out x.png
"""
import argparse
import base64
import json
import re
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import snes  # noqa: E402

CANVAS_TW, CANVAS_TH = 0x13, 0x12


def bgr555(v):
    return ((v & 0x1F) * 255 // 31, ((v >> 5) & 0x1F) * 255 // 31,
            ((v >> 10) & 0x1F) * 255 // 31, 255)


def decode4bpp(b):
    out = []
    for off in range(0, len(b) - 31, 32):
        g = [[0] * 8 for _ in range(8)]
        for r in range(8):
            b0, b1 = b[off + r*2], b[off + r*2 + 1]
            b2, b3 = b[off + 16 + r*2], b[off + 16 + r*2 + 1]
            for x in range(8):
                g[r][x] = (((b0 >> (7-x)) & 1) | ((b1 >> (7-x)) & 1) << 1 |
                           ((b2 >> (7-x)) & 1) << 2 | ((b3 >> (7-x)) & 1) << 3)
        out.append(g)
    return out


def compose(script):
    def grab(pat):
        m = re.search(pat, script)
        return [int(x, 16) for x in m.group(1).split()] if m else []
    size = grab(r'patch\(\$6ffb0\) \{ ([0-9A-F ]+)\}')
    offset = grab(r'patch\(\$7cf1d\) \{ ([0-9A-F ]+)\}')
    pal = grab(r'patch\(\$e7a90\) \{([^}]*)\}')
    tm = grab(r'patch\(\$75e56\) \{([^}]*)\}')
    chr_ = grab(r'patch\(\$616f8\) \{([^}]*)\}') or \
           grab(r'patch\(\$228000 bus\) \{([^}]*)\}')
    if not (size and tm and chr_):
        raise ValueError("incomplete f4c script")
    tiles_idx = []
    i = 0
    while i < len(tm):
        if tm[i] == 0xFF:
            tiles_idx.append(0xFF)
            i += 1
        elif tm[i] == 0xFE and i + 1 < len(tm):
            tiles_idx += [0xFF] * tm[i + 1]
            i += 2
        else:
            tiles_idx.append(tm[i])
            i += 1
    w, h = size[0], size[1]
    pal_rgba = [bgr555(pal[k] | (pal[k + 1] << 8)) for k in range(0, len(pal), 2)]
    tiles = decode4bpp(chr_)
    offset = offset[0] if offset else 0
    ox, oy = (offset >> 4) & 0xF, offset & 0xF
    cw = max(CANVAS_TW, ox + w)
    ch = max(CANVAS_TH, oy + h)
    canvas = [[(0, 0, 0, 0)] * (cw * 8) for _ in range(ch * 8)]
    for ty in range(h):
        for tx in range(w):
            t = tiles_idx[ty * w + tx] if ty * w + tx < len(tiles_idx) else 0xFF
            if t == 0xFF or t >= len(tiles):
                continue
            g = tiles[t]
            for r in range(8):
                for c in range(8):
                    ix = g[r][c]
                    canvas[(oy + ty) * 8 + r][(ox + tx) * 8 + c] = \
                        pal_rgba[ix] if ix < 16 else (0, 0, 0, 0)
    img = canvas[oy * 8: oy * 8 + h * 8]
    img = [row[ox * 8: ox * 8 + w * 8] for row in img]
    return img


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("input")
    ap.add_argument("--type", default="f4c", choices=["f4c", "asset"])
    ap.add_argument("--out", required=True)
    ap.add_argument("--scale", type=int, default=4)
    args = ap.parse_args()
    if args.type == "asset":
        d = json.load(open(args.input))
        png = base64.b64decode(d["png"])
        script_path = Path(args.out).with_suffix(".f4c")
        # convert via the FE engine (needs its venv python with Pillow)
        import subprocess
        fe = Path.home() / "DEV" / "FE_GOLBEZ"
        code = ("import sys; sys.path.insert(0, 'fetools/processors');"
                "import zsprites;"
                "png=open('TMP','rb').read();"
                "print(zsprites.generate_sprite_script(png,'X'))")
        code = code.replace("TMP", str(Path("/tmp/_fe_in.png")))
        Path("/tmp/_fe_in.png").write_bytes(png)
        r = subprocess.run([str(fe / "venv/bin/python")] if (fe / "venv/bin/python").exists()
                           else ["python3"], ["-c", code], cwd=fe,
                           capture_output=True, text=True)
        script = r.stdout
        if not script.strip():
            raise RuntimeError("FE convert failed: " + r.stderr[:200])
        script_path.write_text(script)
    else:
        script = Path(args.input).read_text()
    img = compose(script)
    snes.png_write(img, Path(args.out), scale=args.scale)
    print(f"composed {len(img)}x{len(img[0]) // 1} -> {args.out}")


if __name__ == "__main__":
    main()