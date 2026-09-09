/* FF4 source-port — interpreted module for func_800F95A0.
 * Ground truth: src/func_800F95A0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u8 D_800D0001[8];
extern u32 D_8019ED4C;
extern u32 D_8019ED54;
void row_close(u32 a0, u32 a1, u32 a2)
{
    ((volatile u8*)(D_8019ED4C))[0x0] = ((u16)((volatile u8*)(D_8019ED4C))[0x0] + 0x2);
    return (((volatile u8*)(D_8019ED54))[0x0] = (D_800D0001[0] | (D_800D0001[0] << 8)));
}
