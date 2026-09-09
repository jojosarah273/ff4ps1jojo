/* FF4 source-port — interpreted module for func_800F76BC.
 * Ground truth: src/func_800F76BC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u32 D_8019ED50;
void func_800F76BC(u32 a0)
{
    ((volatile u8*)(D_8019ED50))[0x0] = (u8)((volatile u8*)(a0))[0x0];
    return (((volatile u8*)(a0))[0x0] = ((u8)((s32)((u8)((volatile u8*)(D_8019ED50))[0x0]) >> 1)));
}
