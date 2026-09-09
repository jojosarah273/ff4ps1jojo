/* FF4 source-port — interpreted module for func_800F82B0.
 * Ground truth: src/func_800F82B0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u32 D_8019ED60;
void func_800F82B0(u32 a0, u32 a1)
{
    return (((volatile u8 *)((cell_state(func_800F3A70((u16)a0)) + a0)))[0x0] = ((u8)(u8)*((volatile u8 *)((0x1F800000) | 0x1F8003C8))));
}
