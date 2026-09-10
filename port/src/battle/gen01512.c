/* FF4 source-port — interpreted module for fn_1x096f0.
 * Ground truth: src/fn_1x096f0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u8 D_8019FFE8;
extern u32 D_8019ED54[8];
void fn_1x096f0(void)
{
    ((volatile u8 *)(D_8019FFE8))[0x34] = latch_cur();
    ((volatile u8 *)(D_8019FFE8))[0x2A] = 0;
    return (((volatile u8 *)(D_8019FFE8))[0x2C] = open_row_cur());
}
