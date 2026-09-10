/* FF4 source-port — interpreted module for fn_1x0d4ec.
 * Ground truth: src/fn_1x0d4ec.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u32 D_8019ED40[8];
void fn_1x0d4ec(u32 a0)
{
    return (((volatile u8 *)(D_8019ED40[0]))[0x0] = ((u8)cell_pull_c8_off()));
}
