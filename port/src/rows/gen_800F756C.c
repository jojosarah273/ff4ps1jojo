/* FF4 source-port — interpreted module for cell_0xf756c.
 * Ground truth: src/cell_0xf756c.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u32 D_8019ED60;
void cell_0xf756c(u32 a0)
{
    return (((volatile u8 *)(D_8019ED60))[0x0] = ((u8)(u8)((volatile u8 *)(cell_addr16((u16)a0)))[0x0]));
}
