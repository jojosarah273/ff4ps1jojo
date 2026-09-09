/* FF4 source-port — interpreted module for func_800F95D8.
 * Ground truth: src/func_800F95D8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u8 D_800D0000[8];
extern u32 D_8019ED4C;
extern u32 D_8019ED60;
void func_800F95D8(u32 a0)
{
    ((volatile u8*)(D_8019ED60))[0x0] = ((u8)D_800D0000[0]);
    return (((volatile u8*)(D_8019ED4C))[0x0] = (((u16)((volatile u8*)(D_8019ED4C))[0x0] + 0x1) & 0xFFFF));
}
