/* FF4 source-port — interpreted module for event_v0_v1_gate_v1_v0_gate_picks.
 * Ground truth: src/event_v0_v1_gate_v1_v0_gate_picks.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void event_v0_v1_gate_v1_v0_gate_picks(void)
{
    /* event: v0/v1 gate; v1/v0 gate picks 8018CFF8 vs the
       8018DAB4 row. */
    if (io_just() != 0)
        goto L18DC7C;
    goto L18DCC8;
L18DC7C:
    /* v1/v0 gate -> L18DCAC / 8018CFF8 */
    if (io_just() == 0)
        goto L18DCAC;
    event_spin_l18d01c_v1_a2_v1_v0_gat();
    return;
L18DCAC:
    event_v1_v0_gates_c608_e0c8_rows_t();
    return;
L18DCC8:
    return;
}
