#!/usr/bin/env python3
"""Generate C for the a0+*D port wrappers (0x1F8003C8 family, part 2)."""
import re
from pathlib import Path

ASM = Path("asm/nonmatchings/main")
pat = re.compile(r"/\* [0-9A-F]+ .*? \*/\s+(.+)$", re.M)

GROUPS = {
    # call-shape -> template builder
    "6B38": "byte_a0", "6B68": "half_a0", "6D40": "byte_a0", "6D70": "half_a0",
    "8738": "byte_a0_r", "8768": "half_a0_r", "8930": "byte_a0_r", "8960": "half_a0_r",
    "6A40": "byte_a0_off", "6A78": "half_a0_off",
    "8B68": "byte_a1_cc4", "8B98": "half_a1_cc4",
}

def d_of(txt):
    m = re.search(r"lw\s+\$v[01],\s*%gp_rel\((D_[0-9A-F]+)\)\(\$gp\)", txt)
    return m.group(1) if m else None

for suffix, kind in GROUPS.items():
    name = f"func_800F{suffix}"
    s = ASM / f"{name}.s"
    if not s.exists():
        continue
    txt = s.read_text()
    d = d_of(txt)
    assert d, f"no D for {name}"
    width = "u16" if kind.startswith("half") else "u8"
    extern = f"extern {width} *{d};"
    port = "volatile u8 *port = (volatile u8 *)0x1F800000;"
    if kind.endswith("_r"):
        # *func(a0 + *D) = port[0x3C8]
        body = f"u8 *dst = func_800F3B04(a0 + *{d});\n    {port}\n    *dst = port[0x3C8];"
        proto = "extern u8 *func_800F3B04(u32 a0);"
        sig = "u32 a0"
    elif kind.endswith("_a0"):
        # port = *func(a0 + *D)
        body = f"u8 *src = func_800F3B04(a0 + *{d});\n    {port}\n    *port = src[0x3C8];"
        proto = "extern u8 *func_800F3B04(u32 a0);"
        sig = "u32 a0"
    elif kind.endswith("_off"):
        # port = *(u8 *)(func_800F3C3C(a0) + *D)
        callee = "func_800F3C3C"
        if width == "u16":
            body = (f"u32 base = {callee}(a0);\n    {port}\n"
                    f"*port = *(u8 *)(base + *{d});")
        else:
            # for byte variant offset: v0 += a0(byte) -> base + *D
            body = (f"u32 base = {callee}(a0);\n    {port}\n"
                    f"*port = *(u8 *)(base + *{d});")
        proto = f"extern u8 *{callee}(u32 a0);"
        sig = "u32 a0"
    else:  # _cc4: *func_800F3CC4(?, *D) = port[0x3C8]  (a0 stale)
        body = (f"u8 *dst = func_800F3CC4(0, *{d});\n    {port}\n    *dst = port[0x3C8];")
        proto = f"extern u8 *func_800F3CC4(u32 a0, {width} a1);"
        sig = "u32 a0"
    c = f'#include "common.h"\n{extern}\n{proto}\nvoid {name}({sig}) {{\n    {body}\n}}\n'
    c = c.replace("func_800F3C3C(u32 a0);", "extern u8 *func_800F3C3C(u32 a0);") if "_off" in kind else c
    with open(f"src/{name}.c", "w") as fh:
        fh.write(c)
    print(f"wrote src/{name}.c  ({kind}, d={d})")