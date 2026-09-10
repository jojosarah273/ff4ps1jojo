/* FF4 source-port — interpreted module for event_gate_cc_spin_loop_l1958e8.
 * Ground truth: src/event_gate_cc_spin_loop_l1958e8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void event_gate_cc_spin_loop_l1958e8(void)
{
    /* event: 80196898 gate; 801968CC spin loop L1958E8. */
    if (fn_1x96898() == 0)
        goto L195918;
    do {
        event_e8_gate_f0c8_x_c74_rows();
        if (io_just() != 0)
            goto L195918;
    } while (io_just() != 0);
    return;
L195918:
    return;
}
