/* FF4 source-port — interpreted module for func_800F8D00.
 * Ground truth: src/func_800F8D00.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u32 D_8019ED5C;
void label(u32 a0)
{
    ((volatile u8 *)(cell_state_of()))[0x0] = ((u8)(u8)((volatile u8 *)(D_8019ED5C))[0x0]);
    return (((volatile u8 *)(cell_state_of()))[0x1] = ((u8)(u8)((volatile u8 *)(D_8019ED5C))[0x1]));
}
