#!/usr/bin/env python3
"""intro_pack.py - the game's opening storyboard, extracted to native C.

Emits (into port/assets + port/data):
  intro/title.rgba, prologue_1.rgba, prologue_2.rgba   native-res scenes
  port/data/intro_strings.h                            the storyboard lines
                                                        (real dialogue, names
                                                        resolved from the pack)
"""
import json, base64, sys, struct
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import snes

DATA_JSON = "/home/jojosarah273/DEV/FF4_FROM_SOURCE/ff4/ff4-en-data.json"
OUT = Path(__file__).resolve().parents[2] / "port"

NAMES = {   # \charNN -> character[NN]
    0: "Cecil", 1: "Kain", 2: "Rydia", 3: "Tellah", 4: "Edward",
    5: "Rosa", 6: "Yang", 7: "Palom", 8: "Porom", 9: "Cid",
    10: "Edge", 11: "FuSoYa", 12: "Golbez", 13: "Anna",
}

# the opening beat, in story order: (scene file, [dialogue ids])
STORY = [
    ("prologue_1", [32, 33, 34, 35]),
    ("prologue_2", [36, 37, 38]),
    ("prologue_2", [40, 41, 42, 43, 44, 45, 46]),
    ("prologue_2", [49]),
]


def bgr555(b):
    out = []
    for i in range(0, len(b) - 1, 2):
        v = b[i] | (b[i + 1] << 8)
        out.append(((v & 31) * 8, ((v >> 5) & 31) * 8, ((v >> 10) & 31) * 8, 255))
    return out


def tiles4(b):
    nt = len(b) // 32
    out = []
    for t in range(nt):
        off = t * 32
        g = [[0] * 8 for _ in range(8)]
        for j in range(8):
            b0 = b[off + j * 2]; b1 = b[off + j * 2 + 1]
            b2 = b[off + 16 + j * 2]; b3 = b[off + 16 + j * 2 + 1]
            for k in range(8):
                g[j][k] = (((b0 >> (7 - k)) & 1) | ((b1 >> (7 - k)) & 1) << 1
                           | ((b2 >> (7 - k)) & 1) << 2 | ((b3 >> (7 - k)) & 1) << 3)
        out.append(g)
    return out


def tiles3(b):
    nt = len(b) // 24
    out = []
    for t in range(nt):
        off = t * 24
        g = [[0] * 8 for _ in range(8)]
        for j in range(8):
            b0 = b[off + j * 2]; b1 = b[off + j * 2 + 1]; b2 = b[off + 16 + j]
            for k in range(8):
                g[j][k] = (((b0 >> (7 - k)) & 1) | ((b1 >> (7 - k)) & 1) << 1
                           | ((b2 >> (7 - k)) & 1) << 2)
        out.append(g)
    return out


def compose(tiles, tmb, pal, w, h):
    entries = [tmb[i] | (tmb[i + 1] << 8) for i in range(0, len(tmb), 2)]
    img = [[(0, 0, 0, 0)] * (w * 8) for _ in range(h * 8)]
    for my in range(h):
        for mx in range(w):
            idx = my * w + mx
            if idx >= len(entries):
                continue
            e = entries[idx]
            t = e & 0x3FF
            hf = e & 0x4000; vf = e & 0x8000
            sel = (e >> 10) & 7
            if t >= len(tiles):
                continue
            g = tiles[t]
            for yy in range(8):
                for xx in range(8):
                    v = g[yy if not vf else 7 - yy][xx if not hf else 7 - xx]
                    if not v:
                        continue
                    base = sel * 16
                    img[my * 8 + yy][mx * 8 + xx] = pal[base + v] if base + v < len(pal) \
                        else (255, 0, 255, 255)
    return img


def write_rgba(img, path):
    raw = bytearray()
    for row in img:
        for p in row:
            raw += bytes((p[0], p[1], p[2], 255))
    hdr = struct.pack("<II", len(img[0]), len(img))
    path.write_bytes(hdr + bytes(raw))


def clean(line, names):
    import re
    line = line.replace("\\n", " ")        # \n = literal backslash-n: split into spaces FIRST
    line = re.sub(r"\\char(\d+)", lambda m: names.get(int(m.group(1)), "?"), line)
    line = re.sub(r"\\[^\s]*", "", line)   # any leftover codes (\song[x], \keyX, ...)
    line = re.sub(r"\s{2,}", " ", line).strip()
    return line


def main():
    data = json.load(open(DATA_JSON))
    obj = data["obj"]
    gfx = Path(__file__).resolve().parents[2] / "port/assets/gfx/snes/intro"
    gfx.mkdir(parents=True, exist_ok=True)

    # title
    img = compose(tiles4(base64.b64decode(obj["splashGraphics"])),
                  base64.b64decode(obj["splashTilemap"]),
                  bgr555(base64.b64decode(obj["splashPalette"])), 32, 28)
    write_rgba(img, gfx / "title.rgba")
    print("title.rgba", len(img[0]), "x", len(img))

    # prologue scenes (3bpp)
    pt = tiles3(base64.b64decode(obj["prologueGraphics"]))
    ppal = bgr555(base64.b64decode(obj["prologuePalette"]))
    for nm, w, h in (("prologue_1", 32, 24), ("prologue_2", 32, 28)):
        img = compose(pt, base64.b64decode(obj["prologueTilemap1" if w == 32 and h == 24
                                           else "prologueTilemap2"]), ppal, w, h)
        # prologue_1 w/h check: tilemap1 = 1536B = 768 entries = 32x24; tilemap2 = 32x28
        write_rgba(img, gfx / f"{nm}.rgba")
        print(nm + ".rgba", len(img[0]), "x", len(img))

    # storyboard header
    lines = []
    lines.append("/* intro_strings.h - GENERATED by tools/rip/intro_pack.py */")
    lines.append("#ifndef INTRO_STRINGS_H")
    lines.append("#define INTRO_STRINGS_H")
    lines.append("")
    lines.append("#include <stddef.h>")
    lines.append("")
    lines.append('typedef struct { const char *file; const char *text; } intro_card_t;')
    lines.append("")
    lines.append("static const intro_card_t g_intro_cards[] = {")
    for scene, ids in STORY:
        for i in ids:
            t = obj["eventDialog1"][i]
            lines.append('    { "%s.rgba", "%s" },' % (
                scene, clean(t, NAMES).replace("\\n", " ").replace('"', "'")))
    lines.append("};")
    lines.append("")
    lines.append("static const int g_intro_cards_n = %d;" % sum(len(x[1]) for x in STORY))
    lines.append("#endif")
    (Path(__file__).resolve().parents[2] / "port/data/intro_strings.h").write_text("\n".join(lines))
    n = sum(len(x[1]) for x in STORY)
    print("intro_strings.h written:", n, "cards")
    for x in STORY:
        for i in x[1]:
            print("  ", obj["eventDialog1"][i][:70].replace("\\n", " / "))


if __name__ == "__main__":
    main()