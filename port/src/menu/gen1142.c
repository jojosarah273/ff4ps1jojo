/* FF4 source-port — interpreted module for func_800F6274.
 * Ground truth: src/func_800F6274.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u32 D_8019ED50;
void func_800F6274(u32 a0)
{
    ((volatile u8 *)(cell_state_of()))[0x0] = ((u8)(((u8)((volatile u8 *)(cell_state_of()))[0x0] | a0) + 0x1));
    ((volatile u8 *)(cell_state_of()))[0x1] = ((u8)((s32)((((u8)((volatile u8 *)(cell_state_of()))[0x0] | a0) + 0x1)) >> 8));
    return (((volatile u8 *)(D_8019ED50))[0x0] = (((u8)((volatile u8 *)(cell_state_of()))[0x0] | a0) + 0x1));
}
