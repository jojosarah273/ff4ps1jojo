/* FF4 source-port — interpreted module for func_800F8188.
 * Ground truth: src/func_800F8188.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void txt_draw(void)
{
    return (((volatile u8 *)(cell_state_of()))[0x0] = ((u8)(u8)*((volatile u8 *)((0x1F800000) | 0x1F8003C8))));
}
