/* FF4 source-port — interpreted module for func_800F9330.
 * Ground truth: src/func_800F9330.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u8 D_800D0000[8];
extern u32 D_8019ED4C;
extern u32 D_8019ED54;
void row_open(u32 a0, u32 a1, u32 a2, u32 a3)
{
    D_800D0000[0] = ((u8)(u16)((volatile u8*)(D_8019ED54))[0x0]);
    ((volatile u8*)(((u16)((volatile u8*)(D_8019ED4C))[0x0] + (0x800C80000000 | 0x800C8000))))[0x7FFF] = ((u8)((u32)((u16)((volatile u8*)(D_8019ED54))[0x0]) >> 8));
    return (((volatile u8*)(D_8019ED4C))[0x0] = ((u16)((volatile u8*)(D_8019ED4C))[0x0] + -0x2));
}
