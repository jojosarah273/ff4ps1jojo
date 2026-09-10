/* FF4 source-port — interpreted module for event_s3_fp_s0_s7_latch_loops_on.
 * Ground truth: src/event_s3_fp_s0_s7_latch_loops_on.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void event_s3_fp_s0_s7_latch_loops_on(void)
{
    /* event: s3/fp + s0/s7 latch loops on 80190B44(1/2/0);
       801905FC tail. */
    event_cmd_flow_v0_v1_gates_through(1);
    if (io_just() == 0)
        goto L191BAC;
    if (event_cmd_flow_v0_v1_gates_through(2) != 0)
        goto L191BD0;
L191BAC:
    event_cmd_flow_v0_v1_gates_through();
    if (io_just() == 0)
        goto L191BE4;
L191BD0:
    /* s0/s7 latch -> L191B48 */
L191BE4:
    if (io_just() != 0)
        goto L191C00;
    event_e8_gates_f0c8_fd8_rows_c4c_l();
    return;
L191C00:
    return;
}
