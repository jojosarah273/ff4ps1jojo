/* FF4 source-port — interpreted module for func_800F926C.
 * Ground truth: src/func_800F926C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u8 D_800D0000[8];
extern u32 D_8019ED4C;
extern u32 D_8019ED70;
void row_open2(u32 a0, u32 a1, u32 a2)
{
    D_800D0000[0] = ((u8)(u8)((volatile u8*)(D_8019ED70))[0x0]);
    return (((volatile u8*)(D_8019ED4C))[0x0] = ((u16)((volatile u8*)(D_8019ED4C))[0x0] + -0x1));
}
