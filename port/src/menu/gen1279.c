/* FF4 source-port — interpreted module for func_800F6240.
 * Ground truth: src/func_800F6240.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u32 D_8019ED50;
void page_paint2(void)
{
    ((volatile u8 *)(cell_state_of()))[0x0] = ((u8)((u8)((volatile u8 *)(cell_state_of()))[0x0] + 0x1));
    return (((volatile u8 *)(D_8019ED50))[0x0] = (((u8)((volatile u8 *)(cell_state_of()))[0x0] + 0x1) & 0xFF));
}
