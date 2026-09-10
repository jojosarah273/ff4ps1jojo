/* FF4 source-port — interpreted module for event_gate_cc_spin_loop_l1958e8.
 * Ground truth: src/event_gate_cc_spin_loop_l1958e8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void event_gate_cc_spin_loop_l1958e8(void)
{
    /* event: 80196898 gate; 801968CC spin loop L1958E8. */
    if (func_80196898() == 0)
        goto L195918;
    do {
        func_801968CC();
        if (io_just() != 0)
            goto L195918;
    } while (io_just() != 0);
    return;
L195918:
    return;
}
