/* FF4 source-port — interpreted module for func_800F6AF4.
 * Ground truth: src/func_800F6AF4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u32 D_8019ED54;
void func_800F6AF4(u32 a0, u32 a1, u32 a2)
{
    ((volatile u8 *)((0x1F800000 | 0x1F8003C0)))[0x8] = ((u8)(u8)((volatile u8 *)((cell_state((u16)a0) + a1)))[0x0]);
    return (((volatile u8 *)((0x1F800000 | 0x1F8003C0)))[0x9] = ((u8)(u8)((volatile u8 *)((cell_state((u16)a0) + a1)))[0x1]));
}
