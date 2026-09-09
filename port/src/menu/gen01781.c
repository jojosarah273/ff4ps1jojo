/* FF4 source-port — interpreted module for func_800F7DDC.
 * Ground truth: src/func_800F7DDC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u32 D_8019ED50;
extern u32 D_8019ED68;
void func_800F7DDC(u32 a0, u32 a1, u32 a2)
{
    ((volatile u8*)(a0))[0x0] = ((u8)(((u32)((((u8)((volatile u8*)(a0))[0x0] | ((u8)((volatile u8*)(a0))[0x1] << 8)) + (((u8)((volatile u8*)(D_8019ED68))[0x0] & 0x1) << 16))) >> 1) & 0xFFFF));
    ((volatile u8*)(a0))[0x1] = ((u8)((u32)((((u32)((((u8)((volatile u8*)(a0))[0x0] | ((u8)((volatile u8*)(a0))[0x1] << 8)) + (((u8)((volatile u8*)(D_8019ED68))[0x0] & 0x1) << 16))) >> 1) & 0xFFFF)) >> 8));
    return (((volatile u8*)(D_8019ED50))[0x0] = (((u8)((volatile u8*)(a0))[0x0] | ((u8)((volatile u8*)(a0))[0x1] << 8)) + (((u8)((volatile u8*)(D_8019ED68))[0x0] & 0x1) << 16)));
}
