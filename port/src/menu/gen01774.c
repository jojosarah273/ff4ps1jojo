/* FF4 source-port — interpreted module for func_800F8058.
 * Ground truth: src/func_800F8058.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u8 *D_8019ED40;
extern u8 *D_8019ED68;
extern u32 *D_8019ED50;
void func_800F8058(u8 a0)
{
    u8 x = *D_8019ED68;
    u8 a2 = (u8)(*D_8019ED40 - a0 - ((x ^ 1) & 1));
    u8 a1 = (u8)((x & 0x3C) | (a2 & 0xC0));
    u8 r = (a2 & 0x100) ? a1 : (u8)(a1 | 1);
    if ((u8)a2 != 0)
        r &= 0xFF;
    else
        r |= 0x2;
    *D_8019ED40 = a2;
    *D_8019ED50 = a2;
    *D_8019ED68 = r;
}
