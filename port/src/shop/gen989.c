/* FF4 source-port — interpreted module for fn_1x6bf64.
 * Ground truth: src/fn_1x6bf64.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x6bf64(u32 a0, u32 a1)
{
    ((volatile u8 *)(cell_state(0)))[0x4B] = ((u8)((((u8)((volatile u8 *)(cell_state(0)))[0x6C] | a0) + a0) & 0xFFFF));
    ((volatile u8 *)(cell_state(0)))[0x4C] = ((u8)((u32)(((((u8)((volatile u8 *)(cell_state(0)))[0x6C] | a0) + a0) & 0xFFFF)) >> 8));
    ((volatile u8 *)(cell_state(0)))[0x4D] = ((u8)((((u8)((volatile u8 *)(cell_state(0)))[0x6E] | a0) + a0) & 0xFFFF));
    return (((volatile u8 *)(cell_state(0)))[0x4E] = ((u8)((u32)(((((u8)((volatile u8 *)(cell_state(0)))[0x6E] | a0) + a0) & 0xFFFF)) >> 8)));
}
