/* FF4 source-port — interpreted module for cell_0xf8a8c.
 * Ground truth: src/cell_0xf8a8c.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void cell_0xf8a8c(u32 a0)
{
    return (((volatile u8 *)(cell_add16((cell_0xf3ab4((u16)a0) + 0), 1)))[0x0] = ((u8)(u8)*((volatile u8 *)((0x1F800000) | 0x1F8003C8))));
}
