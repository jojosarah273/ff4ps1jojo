/* FF4 source-port — interpreted module for play_time_splitter_x104_magic_mult.
 * Ground truth: src/play_time_splitter_x104_magic_mult.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void play_time_splitter_x104_magic_mult(void)
{
    /* play-time splitter (0x104): magic-mult chain on (a0+0x96)
       (-75/-5/-6/-10 style stages using 0x1B4E81B5/0x88888889/
       0x66666667) packing the remainder digits as 4-bit pairs into
       out[0..2]. The exact mflo/sra order is in the asm spec; the
       draft arithmetic was deferred rather than risk a register-lifetime
       error. */
    return;
}
