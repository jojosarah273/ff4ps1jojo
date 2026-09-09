/* FF4 source-port — interpreted module for func_800F7CC8.
 * Ground truth: src/func_800F7CC8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u32 D_8019ED50;
extern u32 D_8019ED68;
void func_800F7CC8(u32 a0)
{
    ((volatile u8*)(D_8019ED50))[0x0] = ((u8)((volatile u8*)(a0))[0x0] + (((u8)((volatile u8*)(D_8019ED68))[0x0] & 0x1) << 8));
    return (((volatile u8*)(a0))[0x0] = ((u8)((s32)((((volatile u32*)(D_8019ED50))[0x0] + ((u32)(((volatile u32*)(D_8019ED50))[0x0]) >> 31))) >> 1)));
}
