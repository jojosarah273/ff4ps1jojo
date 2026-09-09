/* FF4 source-port — interpreted module for func_800F68F8.
 * Ground truth: src/func_800F68F8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u32 D_8019ED5C;
void func_800F68F8(u32 a0)
{
    *((volatile u8 *)((0x1F800000) | 0x1F8003C8)) = ((u8)(u8)((volatile u8 *)(cell_state_of()))[0x0]);
}
