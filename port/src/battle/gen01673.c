/* FF4 source-port — interpreted module for fn_1x4c9cc.
 * Ground truth: src/fn_1x4c9cc.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u32 D_8019ED40[8];
void fn_1x4c9cc(void)
{
    return (((volatile u8 *)(D_8019ED40[0]))[0x0] = ((u8)sep_a()));
}
