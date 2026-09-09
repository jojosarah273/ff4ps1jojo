/* FF4 source-port — sprite/scaler.c
 *
 * 801773FC: 5-bit/chan color scaler over the 16 u16 entries at
 * 0x800D4524. scale = ceil(a0/4); per-channel (v*q + round) >> 5.
 */
#include <stdint.h>

void color_scale(int32_t a0)
{
    uint8_t *p = (uint8_t *)0x800D4524;
    int32_t i;
    int32_t q = (a0 >= 0) ? a0 : (a0 + 3);
    q >>= 2;
    for (i = 0; i < 16; i++) {
        uint16_t e = (uint16_t)(p[-1] | (p[0] << 8));
        int32_t r = (e & 0x1F) * q;
        int32_t g = ((e >> 5) & 0x1F) * q;
        int32_t b = ((e >> 10) & 0x1F) * q;
        uint16_t v;
        if (r < 0) r += 0x1F;
        if (g < 0) g += 0x1F;
        if (b < 0) b += 0x1F;
        r >>= 5;
        g >>= 5;
        b >>= 5;
        v = (uint16_t)(r | (g << 5) | (b << 10));
        p[-1] = v & 0xFF;
        p[0] = v >> 8;
        p += 2;
    }
}
