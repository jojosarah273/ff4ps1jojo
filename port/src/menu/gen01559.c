/* FF4 source-port — interpreted module for func_800F824C.
 * Ground truth: src/func_800F824C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void cell_put(u32 a0)
{
    return (((volatile u8 *)(cell_state((u16)a0)))[0x0] = ((u8)(u8)*((volatile u8 *)((0x1F800000) | 0x1F8003C8))));
}
