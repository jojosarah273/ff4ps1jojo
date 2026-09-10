/* FF4 source-port — interpreted module for event_a75c_v1_v0_gate_spin_loops_l.
 * Ground truth: src/event_a75c_v1_v0_gate_spin_loops_l.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void event_a75c_v1_v0_gate_spin_loops_l(void)
{
    /* event: 8018A75C(2) + v1/v0 gate; spin loops L18D300/L18D340;
       8018A75C(1) closes. */
    if (io_just() != 0)
        goto L18D21C;
    goto L18D258;
L18D21C:
    event_drive(2);
L18D258:
    /* v1/v0 gate -> L18D3A8 */
    for (;;) {
        if (io_just() != 0)
            continue;
        break;
    }
    if (io_just() == 0)
        goto L18D368;
    /* spin loop L18D340 */
    goto L18D3A8;
L18D368:
    for (;;) {
        if (io_just() != 0)
            goto L18D3A0;
        if (io_just() != 0)
            continue;
        break;
    }
L18D3A0:
    goto L18D3A8;
L18D3A8:
    event_drive(1);
    return;
}
