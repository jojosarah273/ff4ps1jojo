/* FF4 source-port — interpreted module for cell_0xf6390.
 * Ground truth: src/cell_0xf6390.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u32 D_8019ED50;
extern u32 D_8019ED60;
void cell_0xf6390(u32 a0)
{
    ((volatile u8*)(D_8019ED60))[0x0] = ((u8)((u8)((volatile u8*)(D_8019ED60))[0x0] + 0x1));
    return (((volatile u8*)(D_8019ED50))[0x0] = (u8)((volatile u8*)(D_8019ED60))[0x0]);
}
