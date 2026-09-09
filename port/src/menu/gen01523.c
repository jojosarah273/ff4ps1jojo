/* FF4 source-port — interpreted module for func_800F8FFC.
 * Ground truth: src/func_800F8FFC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u32 D_8019ED5C;
void func_800F8FFC(u32 a0)
{
    return (((volatile u8 *)((cell_state((u16)a0) + a0)))[0x0] = ((u8)0));
}
