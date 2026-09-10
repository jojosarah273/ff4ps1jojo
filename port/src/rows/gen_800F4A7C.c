/* FF4 source-port — interpreted module for cell_0xf4a7c.
 * Ground truth: src/cell_0xf4a7c.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u32 D_8019ED40;
extern u32 D_8019ED54;
void cell_0xf4a7c(u32 a0, u32 a1)
{
    return (((volatile u8 *)(D_8019ED40))[0x0] = ((u8)((u8)((volatile u8 *)(D_8019ED40))[0x0] & a0)));
}
