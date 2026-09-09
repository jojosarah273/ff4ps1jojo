/* FF4 source-port — interpreted module for func_800F960C.
 * Ground truth: src/func_800F960C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u8 D_800D0001[8];
extern u32 D_8019ED4C;
extern u32 D_8019ED58;
void row_done(u32 a0, u32 a1, u32 a2)
{
    ((volatile u8*)(D_8019ED4C))[0x0] = ((u16)((volatile u8*)(D_8019ED4C))[0x0] + 0x2);
    return (((volatile u8*)(D_8019ED58))[0x0] = (D_800D0001[0] | (D_800D0001[0] << 8)));
}
