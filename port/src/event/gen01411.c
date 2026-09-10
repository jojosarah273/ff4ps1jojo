/* FF4 source-port — interpreted module for event_aac4_gate_spins_then_e408_e2.
 * Ground truth: src/event_aac4_gate_spins_then_e408_e2.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void event_aac4_gate_spins_then_e408_e2(void)
{
    /* event: 8018AAC4 gate spins; then 8018E408/8018E2C8(1) rows
       with the 8018D1AC/8018A75C(3) tail. */
    /* v1/v0 gate + spin L18D8AC */
    if (fn_1x8aac4() != 0)
        goto L18D958;
    if (io_just() == 0)
        goto L18D958;
L18D958:
    fn_1x8e408();
    event_a0_v0_latch_chain_l18e2e0_l1(1);
    if (io_just() != 0)
        goto L18DAA4;
    event_a75c_v1_v0_gate_spin_loops_l();
    event_drive(3);
    return;
L18DAA4:
    return;
}
