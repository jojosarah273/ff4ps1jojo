/* FF4 source-port — interpreted module for fn_1x21d8c.
 * Ground truth: src/fn_1x21d8c.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u32 D_8019ED54[8];
void fn_1x21d8c(void)
{
    return (((volatile u8 *)(D_8019ED54[0]))[0x0] = latch_cur());
}
