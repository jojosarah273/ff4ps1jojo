/* FF4 source-port — interpreted module for event_twin_b44_rows_on_s2_fp_s0.
 * Ground truth: src/event_twin_b44_rows_on_s2_fp_s0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void event_twin_b44_rows_on_s2_fp_s0(void)
{
    /* event (twin): 80190B44(1/2/0) rows on s2/fp + s0/s7 latch. */
    event_cmd_flow_v0_v1_gates_through(1);
    if (io_just() == 0)
        goto L191A48;
    if (event_cmd_flow_v0_v1_gates_through(2) != 0)
        goto L191A9C;
L191A48:
    event_cmd_flow_v0_v1_gates_through();
    if (io_just() == 0)
        goto L191AB8;
L191A9C:
    /* s0/s7 latch -> L191A14 */
    return;
L191AB8:
    return;
}
