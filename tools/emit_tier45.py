#!/usr/bin/env python3
"""Emit src/<name>.c candidates for the 4-7 insn tier (hand-curated table)."""
import subprocess

# (func, C body WITHOUT common.h include; externs included inline)
CASES = {
    # --- and/or/xor bitops on byte globals (D = u8* pointer globals) ---
    "func_800F4248": 'extern u8 *D_8019ED40;\nvoid func_800F4248(u8 m) { *D_8019ED40 &= m; }',
    "func_800F4264": 'extern u16 *D_8019ED44;\nvoid func_800F4264(u16 m) { *D_8019ED44 &= m; }',
    "func_800F5480": 'extern u8 *D_8019ED68;\nvoid func_800F5480(void) { *D_8019ED68 |= 0x1; }',
    "func_800F549C": 'extern u8 *D_8019ED68;\nvoid func_800F549C(void) { *D_8019ED68 |= 0x8; }',
    "func_800F54B8": 'extern u8 *D_8019ED68;\nvoid func_800F54B8(void) { *D_8019ED68 |= 0x4; }',
    "func_800F9660": 'extern u8 *D_8019ED68;\nvoid func_800F9660(u8 m) { *D_8019ED68 |= m; }',
    "func_800F40CC": 'extern u8 *D_8019ED40;\nvoid func_800F40CC(u8 *m) { *D_8019ED40 &= *m; }',
    "func_800F5ECC": 'extern u8 *D_8019ED40;\nvoid func_800F5ECC(u8 *m) { *D_8019ED40 ^= *m; }',
    "func_800F78C4": 'extern u8 *D_8019ED40;\nvoid func_800F78C4(u8 *m) { *D_8019ED40 |= *m; }',
    "func_800F9644": 'extern u8 *D_8019ED68;\nvoid func_800F9644(u8 m) { *D_8019ED68 &= ~m; }',
    # --- copy global -> param ---
    "func_800F814C": 'extern u8 *D_8019ED40;\nvoid func_800F814C(u8 *p) { *p = *D_8019ED40; }',
    "func_800F8C48": 'extern u8 *D_8019ED5C;\nvoid func_800F8C48(u8 *p) { *p = *D_8019ED5C; }',
    "func_800F8C84": 'extern u8 *D_8019ED60;\nvoid func_800F8C84(u8 *p) { *p = *D_8019ED60; }',
    # --- u16 global copies (*B = *A) ---
    "func_800F9690": 'extern u16 *D_8019ED44;\nextern u16 *D_8019ED54;\nvoid func_800F9690(void) { *D_8019ED54 = *D_8019ED44; }',
    "func_800F96E0": 'extern u16 *D_8019ED44;\nextern u16 *D_8019ED58;\nvoid func_800F96E0(void) { *D_8019ED58 = *D_8019ED44; }',
    "func_800F971C": 'extern u16 *D_8019ED48;\nextern u16 *D_8019ED44;\nvoid func_800F971C(void) { *D_8019ED44 = *D_8019ED48; }',
    # --- MMIO byte swap 0x1F8003C8/0x1F8003C9 ---
    "func_800F3D48": (
        'void func_800F3D48(void) { volatile u8 *r = (volatile u8 *)0x1F8003C8;\n'
        '    u8 b = r[1]; u8 a = r[0];\n'
        '    r[0] = b; r[1] = a;\n}'
    ),
    # --- store batches to u16/u32 globals ---
    "func_80187AEC": 'extern u16 D_8019EF20;\nextern u16 D_8019EF0A;\nvoid func_80187AEC(void) { D_8019EF20 = 0; D_8019EF0A = 4; }',
    "func_80187C20": 'extern u32 D_8019EF24;\nextern u32 D_8019EF28;\nvoid func_80187C20(void) { D_8019EF24 = 0x11; D_8019EF28 = 0; }',
    "func_80187CB8": ('extern s16 D_8019EEF6;\nextern u32 D_8019EF24;\nextern u32 D_8019EF28;\n'
                      'void func_80187CB8(void) { s16 v = D_8019EEF6; D_8019EF24 = 1; D_8019EF28 = v; }'),
    # --- address-of-global return ---
    "func_80192738": 'extern u8 D_8019BA04[];\nu8 *func_80192738(void) { return D_8019BA04; }',
    # --- absolute u16 global load ---
    "func_80192C4C": 'extern u16 D_8019BE6E;\nint func_80192C4C(void) { return D_8019BE6E; }',
}

for name, body in CASES.items():
    with open(f"src/{name}.c", "w") as fh:
        fh.write(f'#include "common.h"\n{body}\n')
    print(f"wrote src/{name}.c")