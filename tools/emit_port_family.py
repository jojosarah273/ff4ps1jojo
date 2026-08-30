#!/usr/bin/env python3
"""Generate C for the MMIO-port byte wrapper family (0x1F8003C8)."""

FAMILY = {
    # name: (callee, has_arg)   -- callee returns u8*
    "func_800F6564": ("func_800F3B04", False),
    "func_800F65C8": ("func_800F3B9C", False),
    "func_800F6630": ("func_800F3C3C", True),
    "func_800F6F28": ("func_800F3C94", False),
    "func_800F8188": ("func_800F3B04", False),
    "func_800F81E8": ("func_800F3B9C", False),
    "func_800F824C": ("func_800F3C3C", True),
    "func_800F8B08": ("func_800F3C94", False),
}

PROTO = "extern u8 *{callee}({args});"
CALL = "{callee}({args})"

for name, (callee, has_arg) in FAMILY.items():
    args = "u32 a0" if has_arg else "void"
    call_args = "a0" if has_arg else ""
    proto = PROTO.format(callee=callee, args=args)
    call = CALL.format(callee=callee, args=call_args)
    if name in ("func_800F8188", "func_800F81E8", "func_800F824C", "func_800F8B08"):
        # *retptr = port byte
        body = f"*(u8 *){call} = *(volatile u8 *)0x1F8003C8;"
    else:
        # port byte = *retptr
        body = f"*(volatile u8 *)0x1F8003C8 = *(u8 *){call};"
    plist = "u32 a0" if has_arg else "void"
    c = f"{proto}\nvoid {name}({plist}) {{ {body} }}\n"
    with open(f"src/{name}.c", "w") as fh:
        fh.write(f'#include "common.h"\n{c}')
    print(f"wrote src/{name}.c")