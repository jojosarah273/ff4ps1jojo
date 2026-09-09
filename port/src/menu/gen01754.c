/* FF4 source-port — interpreted module for func_800F93DC.
 * Ground truth: src/func_800F93DC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u8 D_800D0000[8];
extern u32 D_8019ED40;
extern u32 D_8019ED4C;
void row_close2(u32 a0)
{
    ((volatile u8*)(D_8019ED40))[0x0] = ((u8)D_800D0000[0]);
    return (((volatile u8*)(D_8019ED4C))[0x0] = (((u16)((volatile u8*)(D_8019ED4C))[0x0] + 0x1) & 0xFFFF));
}
