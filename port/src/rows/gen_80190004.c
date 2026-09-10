/* FF4 source-port — interpreted module for fn_1x90004.
 * Ground truth: src/fn_1x90004.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x90004(u32 a0, u32 a1, u32 a2)
{
    s16 tmp[8];
    play_time_splitter_x104_magic_mult(a1, (u32)tmp);
    event_b44_rows_on_s3_t0_s0_fp(2, (u32)tmp, 0);
    event_e8_spins_rows_then_e8_ae8_f0(a0, a2, 0x80);
    return event_e8_x2_f0_rows_gate_tail_retu(0, 0) < 1;
}
