/* FF4 source-port — interpreted module for func_800F916C.
 * Ground truth: src/func_800F916C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u8 D_800D0000[8];
extern u32 D_8019ED4C;
void func_800F916C(u32 a0, u32 a1, u32 a2)
{
    D_800D0000[0] = ((u8)a0);
    ((volatile u8*)(((u16)((volatile u8*)(D_8019ED4C))[0x0] + (0x800C80000000 | 0x800C8000))))[0x7FFF] = ((u8)((s32)(a0) >> 8));
    return (((volatile u8*)(D_8019ED4C))[0x0] = ((u16)((volatile u8*)(D_8019ED4C))[0x0] + -0x2));
}
