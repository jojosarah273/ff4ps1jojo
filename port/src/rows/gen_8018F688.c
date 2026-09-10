/* FF4 source-port — interpreted module for fn_1x8f688.
 * Ground truth: src/fn_1x8f688.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x8f688(u32 a0, u32 a1, u32 a2)
{
    return ((((((((((((((((u32)((u8)((volatile u8 *)(a0))[0x0]) >> 4) << 2) + a1) << 1) + ((u8)((volatile u8 *)(a0))[0x0] & 0xF)) << 4) - ((((((u32)((u8)((volatile u8 *)(a0))[0x0]) >> 4) << 2) + a1) << 1) + ((u8)((volatile u8 *)(a0))[0x0] & 0xF))) << 2) + ((((((u32)((u8)((volatile u8 *)(a0))[0x1]) >> 4) << 2) + ((u32)((u8)((volatile u8 *)(a0))[0x1]) >> 4)) << 1) + a2)) << 2) + a1) << 4) - ((((((((((((u32)((u8)((volatile u8 *)(a0))[0x0]) >> 4) << 2) + a1) << 1) + ((u8)((volatile u8 *)(a0))[0x0] & 0xF)) << 4) - ((((((u32)((u8)((volatile u8 *)(a0))[0x0]) >> 4) << 2) + a1) << 1) + ((u8)((volatile u8 *)(a0))[0x0] & 0xF))) << 2) + ((((((u32)((u8)((volatile u8 *)(a0))[0x1]) >> 4) << 2) + ((u32)((u8)((volatile u8 *)(a0))[0x1]) >> 4)) << 1) + a2)) << 2) + a1)) + ((((((u32)((u8)((volatile u8 *)(a0))[0x2]) >> 4) << 2) + a0) << 1) + a1)) + -0x96);
}
