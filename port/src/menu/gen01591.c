/* FF4 source-port — interpreted module for func_800F6A78.
 * Ground truth: src/func_800F6A78.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u32 D_8019ED54;
void func_800F6A78(u32 a0)
{
    *((volatile u8 *)((0x1F800000) | 0x1F8003C8)) = ((u8)(u8)((volatile u8 *)((cell_state((u16)a0) + a0)))[0x0]);
}
