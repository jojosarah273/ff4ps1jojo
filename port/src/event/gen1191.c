/* FF4 source-port — interpreted module for event_e8_spins_rows_then_e8_ae8_f0.
 * Ground truth: src/event_e8_spins_rows_then_e8_ae8_f0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void event_e8_spins_rows_then_e8_ae8_f0(void)
{
    /* event: 801928E8 spins, 80191838/80191858/80192858 rows, then
       801928E8/80192718/80191AE8(9)/801920F0 tail. */
    if (io_just() != 0)
        event_spin_wait();
L1924cc:
    for (;;) {
        event_spin_wait();
        if (io_just() == 0)
            goto L192524;
        if (io_just() != 0)
            continue;
        break;
    }
L1924F4:
    /* v1/v0 gates -> L192550 / L19255C */
L192524:
    fn_1x91838();
    goto L1924F4;
L192568:
    fn_1x91838();
    fn_1x91858();
    fn_1x92858();
L1925bc:
    for (;;) {
        event_spin_wait();
        fn_1x92718();
        if (io_just() == 0)
            goto L1925E8;
        event_s3_fp_s0_s7_latch_loops_on(9);
        break;
    }
L1925E8:
    battle_command_maps_preps_with_beq();
    return;
}
