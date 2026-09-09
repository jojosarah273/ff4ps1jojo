/* FF4 source-port — interpreted module for func_800F7D0C.
 * Ground truth: src/func_800F7D0C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u8 *D_8019ED68;
extern u32 *D_8019ED50;
void func_800F7D0C(void)
{
    u8 x = *D_8019ED68;
    u8 r = (u8)((x & 0x7C) | ((u8)*D_8019ED50 & 0x1));
    r = (*D_8019ED50 & 0x100) ? r : (u8)(r | 0x80);
    if (*D_8019ED50 == 0)
        r &= 0xFF;
    else
        r |= 0x2;
    *D_8019ED68 = r;
}
