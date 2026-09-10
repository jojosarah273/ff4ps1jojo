/* FF4 source-port — interpreted module for cell_0xf6130.
 * Ground truth: src/cell_0xf6130.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u8 *D_8019ED68;
extern u32 *D_8019ED50;
void cell_0xf6130(void)
{
    u8 x = *D_8019ED68;
    u8 r = (*D_8019ED50 & 0x8000) ? (u8)((x & 0x7D) | 0x80) : (u8)(x & 0x7D);
    if ((u16)*D_8019ED50 != 0)
        r &= 0xFF;
    else
        r |= 0x2;
    *D_8019ED68 = r;
}
