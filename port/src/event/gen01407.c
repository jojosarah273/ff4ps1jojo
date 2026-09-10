/* FF4 source-port — interpreted module for event_v0_gate_run_l1910e8_l1910ec.
 * Ground truth: src/event_v0_gate_run_l1910e8_l1910ec.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void event_v0_gate_run_l1910e8_l1910ec(void)
{
    /* event: v0 gate run -> L1910E8/L1910EC. */
    if (io_just() != 0)
        goto L1910E8;
    if (io_just() != 0)
        goto L1910EC;
    return;
L1910E8:
    return;
L1910EC:
    return;
}
