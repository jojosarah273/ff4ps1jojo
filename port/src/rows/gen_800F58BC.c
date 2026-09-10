/* FF4 source-port — interpreted module for cell_0xf58bc.
 * Ground truth: src/cell_0xf58bc.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u32 *D_8019ED50;
extern u8 *D_8019ED68;
extern u8 *D_8019ED5C;
void cell_0xf58bc(u8 a0)
{
    *D_8019ED50 = a0;
    *D_8019ED68 &= 0x7C;
    if ((u8)*D_8019ED50 == *D_8019ED5C)
        *D_8019ED68 |= 0x3;
    else if ((u8)*D_8019ED50 < *D_8019ED5C)
        *D_8019ED68 |= 0x80;
    else
        *D_8019ED68 |= 0x1;
}
