/* FF4 source-port — interpreted module for func_800FDA9C.
 * Ground truth: src/func_800FDA9C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u16 D_801CFD68[];
extern u16 *D_8019ED54;
void func_800FDA9C(u16 a0)
{
    /* table builder: 8 iterations, each writes the u16 formed by
       (D_801CFD68[a2*2] | D_8019ED54[0]+0x800E7C00 byte) into
       D_801CFD68[a2*2]; a2 walks a0..a0+7. */
    u16 a2 = a0;
    u8 *tbl = (u8 *)D_801CFD68;
    u8 *q = (u8 *)(D_8019ED54[0] + 0x800E7C00);
    s32 i;
    for (i = 0; i < 8; i++) {
        u8 *dst = tbl + (a2 * 2);
        u16 v = dst[0] | ((u16)q[0] << 8);
        dst[0] = v & 0xFF;
        dst[1] = v >> 8;
        a2 = (a2 + 1) & 0xFFFF;
        q++;
    }
}
