/* FF4 source-port — interpreted module for fn_1x773fc.
 * Ground truth: src/fn_1x773fc.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x773fc(s32 a0)
{
    /* 5-bit/chan color scaler over the 16 u16 entries at 0x800D4524;
       scale = ceil(a0/4), per-channel (v*q + round) >> 5. */
    u8 *p = (u8 *)0x800D4524;
    s32 i;
    s32 q = (a0 >= 0) ? a0 : (a0 + 3);
    q >>= 2;
    for (i = 0; i < 16; i++) {
        u16 e = (u16)(p[-1] | (p[0] << 8));
        s32 r = (e & 0x1F) * q;
        s32 g = ((e >> 5) & 0x1F) * q;
        s32 b = ((e >> 10) & 0x1F) * q;
        if (r < 0) r += 0x1F;
        if (g < 0) g += 0x1F;
        if (b < 0) b += 0x1F;
        r >>= 5;
        g >>= 5;
        b >>= 5;
        {
            u16 v = (u16)(r | (g << 5) | (b << 10));
            p[-1] = v & 0xFF;
            p[0] = v >> 8;
        }
        p += 2;
    }
}
