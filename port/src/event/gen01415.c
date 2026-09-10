/* FF4 source-port — interpreted module for event_cb88_row_v0_gates_returns_at.
 * Ground truth: src/event_cb88_row_v0_gates_returns_at.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void event_cb88_row_v0_gates_returns_at(void)
{
    /* event: 8018CB88 row; v0 gates; returns at L189C24. */
    gate_monolith_x304_v1_v0_compare_a();
    if (io_just() == 0)
        goto L189C10;
    return;
L189C10:
    if (io_just() == 0)
        goto L189C24;
    return;
L189C24:
    return;
}
