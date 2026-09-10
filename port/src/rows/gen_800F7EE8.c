/* FF4 source-port — interpreted module for cell_0xf7ee8.
 * Ground truth: src/cell_0xf7ee8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u32 D_8019ED40;
extern u32 D_8019ED50;
extern u32 D_8019ED68;
void cell_0xf7ee8(u32 a0, u32 a1)
{
    ((volatile u8*)(D_8019ED40))[0x0] = ((u8)((u32)(((u8)((volatile u8*)(D_8019ED40))[0x0] + (((u8)((volatile u8*)(D_8019ED68))[0x0] & 0x1) << 8))) >> 1));
    return (((volatile u8*)(D_8019ED50))[0x0] = ((u8)((volatile u8*)(D_8019ED40))[0x0] + (((u8)((volatile u8*)(D_8019ED68))[0x0] & 0x1) << 8)));
}
