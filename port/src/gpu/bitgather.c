/* FF4 source-port — gpu/bitgather.c
 *
 * 801824D8: pack four byte channels into one output byte per pass
 * (4 iterations -> out[0..3]). Exact register mirror.
 */
#include <stdint.h>

void bitgather_pack(uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3,
                    uint8_t *out)
{
    uint32_t t6 = a0 & 0xFF, t5 = a1 & 0xFF, t4 = a2 & 0xFF, t3 = a3 & 0xFF;
    uint32_t v1 = t6 >> 1;
    uint32_t t8 = 0x10000;
    int32_t i;
    for (i = 0; i < 4; i++) {
        uint32_t t2, t0, t7, a3l, a2l, a1l, a0l, t1;
        t6 = (t6 << 1) & 0xFF;
        t2 = t5 & 0x80;         t5 = (t5 << 1) & 0xFF;
        t0 = t4 & 0x80;         t4 = (t4 << 1) & 0xFF;
        a3l = t3 & 0x80;        t3 = (t3 << 1) & 0xFF;
        a2l = t6 & 0x80;        t6 = (t6 << 1) & 0xFE;
        a1l = t5 & 0x80;        t5 = (t5 << 1) & 0xFE;
        a0l = t4 & 0x80;        t4 = (t4 << 1) & 0xFE;
        t1 = t3 & 0x80;         t3 = (t3 << 1) & 0xFE;
        v1 = (v1 & 0x40) | t2;
        v1 >>= 1;
        t0 |= v1;  t0 >>= 1;
        a3l |= t0; a3l >>= 1;
        a2l |= a3l; a2l >>= 1;
        a1l |= a2l; a1l >>= 1;
        a0l |= a1l; a0l >>= 1;
        t1 |= a0l;
        t7 = t8 >> 16;
        out[t7] = (uint8_t)t1;
        t8 += 0x10000;
        v1 = t6 >> 1;
    }
}
