/* FF4 source-port — interpreted module for event_b44_rows_on_s3_t0_s0_fp.
 * Ground truth: src/event_b44_rows_on_s3_t0_s0_fp.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void event_b44_rows_on_s3_t0_s0_fp(void)
{
    /* event: 80190B44(1/2/0) rows on s3/t0 + s0/fp latch loop
       L1918D8. */
    event_cmd_flow_v0_v1_gates_through(1);
    if (io_just() == 0)
        goto L191914;
    if (event_cmd_flow_v0_v1_gates_through(2) != 0)
        goto L191968;
L191914:
    event_cmd_flow_v0_v1_gates_through();
    if (io_just() == 0)
        goto L191984;
L191968:
    /* s0/fp latch -> L1918D8 */
    return;
L191984:
    return;
}
