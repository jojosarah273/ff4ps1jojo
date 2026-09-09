/* FF4 source-port — interpreted module for func_800F6E30.
 * Ground truth: src/func_800F6E30.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void func_800F6E30(u32 a0)
{
    *((volatile u8 *)((0x1F800000) | 0x1F8003C8)) = ((u8)(u8)((volatile u8 *)(cell_state(func_800F3A70((u16)a0))))[0x0]);
}
