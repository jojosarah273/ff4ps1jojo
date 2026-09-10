/* FF4 source-port — interpreted module for cell_0xf5804.
 * Ground truth: src/cell_0xf5804.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u32 *D_8019ED50;
extern u8 *D_8019ED68;
extern u16 *D_8019ED58;
void cell_0xf5804(u8 *a0)
{
    *D_8019ED50 = *a0;
    *D_8019ED68 &= 0x7C;
    if ((u8)*D_8019ED50 == (u8)*D_8019ED58)
        *D_8019ED68 |= 0x3;
    else if ((u8)*D_8019ED50 < (u8)*D_8019ED58)
        *D_8019ED68 |= 0x80;
    else
        *D_8019ED68 |= 0x1;
}
