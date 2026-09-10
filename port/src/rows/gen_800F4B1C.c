/* FF4 source-port — interpreted module for cell_0xf4b1c.
 * Ground truth: src/cell_0xf4b1c.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u32 D_8019ED40;
extern u32 D_8019ED54;
void cell_0xf4b1c(u32 a0, u32 a1, u32 a2)
{
    ((volatile u8 *)(D_8019ED40))[0x0] = ((u8)((u8)((volatile u8 *)(D_8019ED40))[0x0] & a0));
    return (((volatile u8 *)(D_8019ED40))[0x1] = ((u8)((u8)((volatile u8 *)(D_8019ED40))[0x1] & a0)));
}
