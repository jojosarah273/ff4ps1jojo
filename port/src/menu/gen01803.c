/* FF4 source-port — interpreted module for func_800F7780.
 * Ground truth: src/func_800F7780.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u32 D_8019ED50;
void func_800F7780(u32 a0, u32 a1, u32 a2)
{
    ((volatile u8*)(D_8019ED50))[0x0] = (u8)((volatile u8*)(a0))[0x0];
    ((volatile u8*)(D_8019ED50))[0x0] = (((volatile u32*)(D_8019ED50))[0x0] | ((u8)((volatile u8*)(a0))[0x1] << 8));
    ((volatile u8*)(a0))[0x0] = ((u8)((u32)((u16)((volatile u8*)(D_8019ED50))[0x0]) >> 1));
    return (((volatile u8*)(a0))[0x1] = ((u8)((u32)(((u32)((u16)((volatile u8*)(D_8019ED50))[0x0]) >> 1)) >> 8)));
}
