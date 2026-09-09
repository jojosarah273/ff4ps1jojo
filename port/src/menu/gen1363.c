/* FF4 source-port — interpreted module for func_800F8DE0.
 * Ground truth: src/func_800F8DE0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u32 D_8019ED58;
extern u32 D_8019ED5C;
void func_800F8DE0(u32 a0, u32 a1, u32 a2)
{
    ((volatile u8 *)((cell_state((u16)a0) + a1)))[0x0] = ((u8)(u8)((volatile u8 *)(D_8019ED5C))[0x0]);
    return (((volatile u8 *)((cell_state((u16)a0) + a1)))[0x1] = ((u8)(u8)((volatile u8 *)(D_8019ED5C))[0x1]));
}
