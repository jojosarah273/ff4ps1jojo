/* FF4 source-port — interpreted module for func_800F5CF8.
 * Ground truth: src/func_800F5CF8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u32 D_8019ED44;
extern u32 D_8019ED50;
void row_scan(u32 a0)
{
    ((volatile u8*)(D_8019ED44))[0x0] = ((u16)((volatile u8*)(D_8019ED44))[0x0] + -0x1);
    return (((volatile u8*)(D_8019ED50))[0x0] = (u16)((volatile u8*)(D_8019ED44))[0x0]);
}
