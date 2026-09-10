/* FF4 source-port — interpreted module for fn_1x74f0c.
 * Ground truth: src/fn_1x74f0c.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x74f0c(void)
{
    u8 *p = (u8 *)cell_state(0);
    u32 a = ((u32)p[0x19] << 8) | p[0x18];
    u32 b = ((u32)p[0x1B] << 8) | p[0x1A];
    u32 m = a * b;
    p[0x30] = (u8)m;
    p[0x31] = (u8)(m >> 8);
    p[0x32] = (u8)(m >> 16);
}
