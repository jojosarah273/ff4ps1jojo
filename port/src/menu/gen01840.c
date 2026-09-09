/* FF4 source-port — interpreted module for func_800F60A8.
 * Ground truth: src/func_800F60A8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u8 *D_8019ED68;
extern u8 *D_8019ED50;
void func_800F60A8(void)
{
    u8 x = *D_8019ED68;
    u8 r = (u8)((x & 0x7D) | (*D_8019ED50 & 0xFF));
    if (*D_8019ED50 != 0)
        r = (u8)((x & 0x7D) | 0x2);
    else
        r &= 0xFF;
    *D_8019ED68 = r;
}
