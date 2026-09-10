/* FF4 source-port — interpreted module for cell_0xf77cc.
 * Ground truth: src/cell_0xf77cc.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u8 *D_8019ED68;
extern u32 *D_8019ED50;
void cell_0xf77cc(void)
{
    u8 r = (*D_8019ED68 & 0x7C) | ((u8)*D_8019ED50 & 0x1);
    if ((*D_8019ED50 & 0xFE) == 0)
        r = r | 0x2;
    else
        r &= 0xFF;
    *D_8019ED68 = r;
}
