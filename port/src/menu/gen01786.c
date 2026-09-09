/* FF4 source-port — interpreted module for func_800F7C6C.
 * Ground truth: src/func_800F7C6C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u32 D_8019ED40;
extern u32 D_8019ED50;
extern u32 D_8019ED68;
void func_800F7C6C(u32 a0, u32 a1)
{
    ((volatile u8*)(D_8019ED40))[0x0] = ((u8)(((u8)((volatile u8*)(D_8019ED40))[0x0] << 1) + ((u8)((volatile u8*)(D_8019ED68))[0x0] & 0x1)));
    return (((volatile u8*)(D_8019ED50))[0x0] = (((u8)((volatile u8*)(D_8019ED40))[0x0] << 1) + ((u8)((volatile u8*)(D_8019ED68))[0x0] & 0x1)));
}
