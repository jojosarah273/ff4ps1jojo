/* FF4 source-port — interpreted module for func_800F3F38.
 * Ground truth: src/func_800F3F38.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u8 *D_8019ED40;
extern u8 *D_8019ED68;
void cell_poke0(u8 *a0)
{
    u8 b = *a0;
    u8 y = *D_8019ED40;
    u8 x = *D_8019ED68;
    u8 a2 = (u8)(y + b + (x & 1));
    u8 r = (u8)((a2 & 0xC0) | (x & 0x3E));
    *D_8019ED40 = a2;
    *D_8019ED40 = (a2 & 0x100) ? (u8)(r | 1) : r;
}
