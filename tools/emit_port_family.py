#!/usr/bin/env python3
"""Generate C for the MMIO-port byte wrapper family (0x1F8003C8).

Pattern (matches the ROM): destination/result first, then the port base as
a local AFTER the call so the (hi,lo) address pair folds into the load.
"""

FAMILY = {
    # name: (callee, has_arg, direction)   direction: 'p2r' or 'r2p'
    "func_800F6564": ("func_800F3B04", False, "r2p"),
    "func_800F65C8": ("func_800F3B9C", False, "r2p"),
    "func_800F6630": ("func_800F3C3C", True, "r2p"),
    "func_800F6F28": ("func_800F3C94", False, "r2p"),
    "func_800F8188": ("func_800F3B04", True, "p2r"),
    "func_800F81E8": ("func_800F3B9C", True, "p2r"),
    "func_800F824C": ("func_800F3C3C", True, "p2r"),
    "func_800F8B08": ("func_800F3C94", False, "p2r"),
}

for name, (callee, has_arg, direction) in FAMILY.items():
    args = "u32 a0" if has_arg else "void"
    call = f"{callee}(a0)" if has_arg else f"{callee}()"
    proto = f"extern u8 *{callee}({args});"
    if direction == "r2p":
        # port byte = *retptr  (src = call result first)
        body = (
            f"u8 *src = {call};\n"
            f"volatile u8 *port = (volatile u8 *)0x1F800000;\n"
            f"*port = src[0x3C8];"
        )
    else:
        # *retptr = port byte (dst = call result first)
        body = (
            f"u8 *dst = {call};\n"
            f"volatile u8 *port = (volatile u8 *)0x1F800000;\n"
            f"*dst = port[0x3C8];"
        )
    c = f"{proto}\nvoid {name}({args}) {{\n    {body}\n}}\n"
    # avoid double '(void)' in signature
    c = c.replace("(void))", "(void))")
    with open(f"src/{name}.c", "w") as fh:
        fh.write(f'#include "common.h"\n{c}')
    print(f"wrote src/{name}.c")