/* FF4 source-port — interpreted module for func_800F63BC.
 * Ground truth: src/func_800F63BC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u32 D_8019ED50;
extern u32 D_8019ED58;
void step2(u32 a0)
{
    ((volatile u8*)(D_8019ED58))[0x0] = ((u16)((volatile u8*)(D_8019ED58))[0x0] + 0x1);
    return (((volatile u8*)(D_8019ED50))[0x0] = (u16)((volatile u8*)(D_8019ED58))[0x0]);
}
