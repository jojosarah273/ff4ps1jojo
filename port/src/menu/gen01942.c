/* FF4 source-port — interpreted module for func_800F3F94.
 * Ground truth: src/func_800F3F94.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u8 *D_8019ED68;
extern u16 *D_8019ED44;
extern u8 *D_8019ED40;
extern u32 *D_8019ED50;
void cell_peek0(u8 *a0)
{
    u16 a = (u16)(*D_8019ED44 + a0[0] + (a0[1] << 8) + (*D_8019ED68 & 1));
    u8 r = (u8)((*D_8019ED68 & 0x3E) | (D_8019ED40[1] & 0xC0));
    if (a & 0x10000)
        r |= 1;
    *D_8019ED44 = a;
    *D_8019ED68 = r;
    *D_8019ED50 = a;
}
