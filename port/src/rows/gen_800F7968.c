/* FF4 source-port — interpreted module for cell_0xf7968.
 * Ground truth: src/cell_0xf7968.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u32 D_8019ED40;
void cell_0xf7968(u32 a0, u32 a1, u32 a2)
{
    ((volatile u8*)(D_8019ED40))[0x0] = ((u8)((u8)((volatile u8*)(D_8019ED40))[0x0] | (u8)((volatile u8*)(a0))[0x0]));
    return (((volatile u8*)(D_8019ED40))[0x1] = ((u8)((u8)((volatile u8*)(D_8019ED40))[0x1] | (u8)((volatile u8*)(a0))[0x1])));
}
