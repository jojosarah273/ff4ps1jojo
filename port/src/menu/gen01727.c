/* FF4 source-port — interpreted module for func_800FC0DC.
 * Ground truth: src/func_800FC0DC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u32 D_8019ED54;
extern u32 D_8019ED58;
void func_800FC0DC(u32 a0)
{
    ((volatile u8*)(D_8019ED54))[0x0] = ((u16)((volatile u8*)(D_8019ED54))[0x0] + 0x4);
    return (((volatile u8*)(D_8019ED58))[0x0] = ((u16)((volatile u8*)(D_8019ED58))[0x0] + 0x4));
}
