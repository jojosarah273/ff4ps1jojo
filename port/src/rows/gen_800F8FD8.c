/* FF4 source-port — interpreted module for cell_0xf8fd8.
 * Ground truth: src/cell_0xf8fd8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void cell_0xf8fd8(u32 a0)
{
    ((volatile u8 *)(cell_addr16((u16)a0)))[0x0] = ((u8)0);
    return (((volatile u8 *)(cell_addr16((u16)a0)))[0x1] = ((u8)0));
}
