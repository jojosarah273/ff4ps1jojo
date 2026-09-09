/* FF4 source-port — interpreted module for func_800F63F8.
 * Ground truth: src/func_800F63F8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u8 *D_8019ED68;
void func_800F63F8(void)
{
    u8 x = *(volatile u8 *)(0x1F8003C0u + 0x13);
    u8 y = *(volatile u8 *)(0x1F8003C0u + 0x8);
    u8 r = (u8)((x & 0x7D) | (y & 0x80));
    if (y != 0)
        r &= 0xFF;
    else
        r |= 0x2;
    *D_8019ED68 = r;
}
