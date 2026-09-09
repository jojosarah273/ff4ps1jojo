/* FF4 source-port — interpreted module for func_800F7604.
 * Ground truth: src/func_800F7604.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u32 D_8019ED54;
extern u32 D_8019ED60;
void func_800F7604(u32 a0)
{
    ((volatile u8 *)(D_8019ED60))[0x0] = ((u8)(u8)((volatile u8 *)((cell_state((u16)a0) + a0)))[0x0]);
    return (((volatile u8 *)(D_8019ED60))[0x1] = ((u8)(u8)((volatile u8 *)((cell_state((u16)a0) + a0)))[0x1]));
}
