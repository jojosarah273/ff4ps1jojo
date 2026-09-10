/* FF4 source-port — interpreted module for event_v0_gates_x22_row_returns_l19.
 * Ground truth: src/event_v0_gates_x22_row_returns_l19.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void event_v0_gates_x22_row_returns_l19(void)
{
    /* event: v0 gates; 80198990(0x22) row; returns L1986C4. */
    if (io_just() != 0)
        goto L198650;
    goto L198648;
    fn_1x98990(0x22);
    return;
L198650:
    fn_1x98990(0x22);
    goto L1986C4;
L198648:
    goto L1986C4;
L1986C4:
    return;
}
