/* FF4 source-port — interpreted module for event_spin_wait.
 * Ground truth: src/event_spin_wait.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void event_spin_wait(void)
{
    /* event: v1/v0 spin loop L19290C; a0/v0 latches; 2x 80192A60
       rows with spin loops; returns at L192A4C. */
    for (;;) {
        if (io_just() != 0)
            continue;
        break;
    }
    /* a0/v0 latch -> L192A48 / L19298C */
    event_v0_v1_latch_loop_l192a88_on();
    event_v0_v1_latch_loop_l192a88_on();
    if (io_just() != 0)
        goto L1929F4;
    return;
L1929F4:
    for (;;) {
        if (io_just() == 0)
            continue;
        break;
    }
    return;
L192A48:
    return;
}
