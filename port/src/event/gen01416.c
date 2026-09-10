/* FF4 source-port — interpreted module for event_v0_gate_ae28_t0_v0_latch_c9b.
 * Ground truth: src/event_v0_gate_ae28_t0_v0_latch_c9b.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void event_v0_gate_ae28_t0_v0_latch_c9b(void)
{
    /* event: v0 gate; 8018AE28 + t0/v0 latch + 8018C9B8; 8018CA48
       tail. */
    if (io_just() != 0)
        goto L1899D8;
    event_v0_gate_tree_b1c8_spins_l18a();
    /* t0/v0 latch -> L189A24 */
    fn_1x8c9b8();
    return;
L1899D8:
    if (io_just() != 0)
        goto L189A10;
L189A10:
    event_v0_gate_a9dc_ab08_rows();
    return;
L189A24:
    return;
}
