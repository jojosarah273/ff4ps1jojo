/* FF4 source-port — interpreted module for event_poll_loop_l191570_returns_at.
 * Ground truth: src/event_poll_loop_l191570_returns_at.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void event_poll_loop_l191570_returns_at(void)
{
    /* event: 80190098 poll loop L191570; returns at L1915E8. */
L191570:
    if (event_dispatcher_gate_tree_with_jr() == 0)
        goto L1915B4;
    if (io_just() == 0)
        goto L1915B0;
    goto L191570;
L1915B0:
    return;
L1915B4:
    if (io_just() == 0)
        goto L191570;
    if (io_just() == 0)
        goto L191570;
    goto L191570;
L1915E8:
    return;
}
