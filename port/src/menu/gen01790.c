/* FF4 source-port — interpreted module for func_800F7AC8.
 * Ground truth: src/func_800F7AC8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u8 *D_8019ED68;
extern u8 *D_8019ED50;
void func_800F7AC8(void)
{
    u8 x = *D_8019ED68;
    u8 r = (u8)((x & 0x7C) | (*D_8019ED50 & 0xFF));
    if (*D_8019ED50 == 0)
        r = (u8)((x & 0x7C) | 0x1);
    else
        r &= 0xFF;
    *D_8019ED68 = r;
}
