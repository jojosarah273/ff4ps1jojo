/* FF4 source-port — interpreted module for cell_0xf92d8.
 * Ground truth: src/cell_0xf92d8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u8 D_800D0000[8];
extern u32 D_8019ED4C;
extern u32 D_8019ED68;
void cell_0xf92d8(u32 a0, u32 a1, u32 a2)
{
    D_800D0000[0] = ((u8)(u8)((volatile u8*)(D_8019ED68))[0x0]);
    return (((volatile u8*)(D_8019ED4C))[0x0] = ((u16)((volatile u8*)(D_8019ED4C))[0x0] + -0x1));
}
