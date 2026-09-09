/* FF4 source-port — interpreted module for func_800F65C8.
 * Ground truth: src/func_800F65C8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void func_800F65C8(void)
{
    *((volatile u8 *)((0x1F800000) | 0x1F8003C8)) = ((u8)(u8)((volatile u8 *)(cell_peek_v(0, 1)))[0x0]);
}
