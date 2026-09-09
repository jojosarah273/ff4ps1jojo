/* FF4 source-port — interpreted module for func_800F7210.
 * Ground truth: src/func_800F7210.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u32 D_8019ED5C;
void page_open(void)
{
    ((volatile u8 *)(D_8019ED5C))[0x0] = ((u8)(u8)((volatile u8 *)(cell_state_of()))[0x0]);
    return (((volatile u8 *)(D_8019ED5C))[0x1] = ((u8)(u8)((volatile u8 *)(cell_state_of()))[0x1]));
}
