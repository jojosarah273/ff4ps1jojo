/* FF4 source-port — interpreted module for event_s3_fp_s0_s7_latch_loops_on.
 * Ground truth: src/event_s3_fp_s0_s7_latch_loops_on.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void event_s3_fp_s0_s7_latch_loops_on(void)
{
    /* event: s3/fp + s0/s7 latch loops on 80190B44(1/2/0);
       801905FC tail. */
    func_80190B44(1);
    if (io_just() == 0)
        goto L191BAC;
    if (func_80190B44(2) != 0)
        goto L191BD0;
L191BAC:
    func_80190B44();
    if (io_just() == 0)
        goto L191BE4;
L191BD0:
    /* s0/s7 latch -> L191B48 */
L191BE4:
    if (io_just() != 0)
        goto L191C00;
    func_801905FC();
    return;
L191C00:
    return;
}
