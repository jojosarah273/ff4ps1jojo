/* FF4 source-port — interpreted module for x_byte_bit_gather_rotates_four_inp.
 * Ground truth: src/x_byte_bit_gather_rotates_four_inp.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void x_byte_bit_gather_rotates_four_inp(u32 a0, u32 a1, u32 a2, u32 a3, u8 *out)
{
    /* 4x byte bit-gather: rotates four input bytes and packs one
       output byte per pass into out[0..3]. */
    u32 t6 = a0 & 0xFF, t5 = a1 & 0xFF, t4 = a2 & 0xFF, t3 = a3 & 0xFF;
    u32 v1 = t6 >> 1;
    u32 t8 = 0x10000;
    s32 i;
    for (i = 0; i < 4; i++) {
        u32 t2, t0, t7, a3l, a2l, a1l, a0l, t1;
        t6 = (t6 << 1) & 0xFF;
        t2 = t5 & 0x80;
        t5 = (t5 << 1) & 0xFF;
        t0 = t4 & 0x80;
        t4 = (t4 << 1) & 0xFF;
        a3l = t3 & 0x80;
        t3 = (t3 << 1) & 0xFF;
        a2l = t6 & 0x80;
        t6 = (t6 << 1) & 0xFE;
        a1l = t5 & 0x80;
        t5 = (t5 << 1) & 0xFE;
        a0l = t4 & 0x80;
        t4 = (t4 << 1) & 0xFE;
        t1 = t3 & 0x80;
        t3 = (t3 << 1) & 0xFE;
        v1 = (v1 & 0x40) | t2;
        v1 >>= 1;
        t0 |= v1;
        t0 >>= 1;
        a3l |= t0;
        a3l >>= 1;
        a2l |= a3l;
        a2l >>= 1;
        a1l |= a2l;
        a1l >>= 1;
        a0l |= a1l;
        a0l >>= 1;
        t1 |= a0l;
        t7 = t8 >> 16;
        out[t7] = t1;
        t8 += 0x10000;
        v1 = t6 >> 1;
    }
}
