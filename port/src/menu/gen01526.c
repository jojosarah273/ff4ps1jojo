/* FF4 source-port — interpreted module for func_800F8EFC.
 * Ground truth: src/func_800F8EFC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u32 D_8019ED5C;
extern u32 D_8019ED60;
void func_800F8EFC(u32 a0, u32 a1, u32 a2)
{
    return (((volatile u8 *)((cell_state((u16)a0) + a1)))[0x0] = ((u8)(u8)((volatile u8 *)(D_8019ED60))[0x0]));
}
