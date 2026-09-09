/* FF4 source-port — interpreted module for func_800F80D0.
 * Ground truth: src/func_800F80D0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u16 *D_8019ED44;
extern u8 *D_8019ED68;
extern u8 *D_8019ED40;
extern u32 *D_8019ED50;
void func_800F80D0(u16 a0)
{
    u8 x = *D_8019ED68;
    u16 a2 = (u16)(*D_8019ED44 - a0 - ((x ^ 1) & 1));
    u8 a1 = (u8)((x & 0x3C) | (D_8019ED40[1] & 0xC0));
    u8 r = (a2 & 0x10000) ? a1 : (u8)(a1 | 1);
    if ((u16)a2 != 0)
        r &= 0xFF;
    else
        r |= 0x2;
    *D_8019ED44 = a2;
    *D_8019ED50 = a2;
    *D_8019ED68 = r;
}
