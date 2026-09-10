/* FF4 source-port — interpreted module for event_s0_v0_v0_s0_latches_b9a8_row.
 * Ground truth: src/event_s0_v0_v0_s0_latches_b9a8_row.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void event_s0_v0_v0_s0_latches_b9a8_row(void)
{
    /* event: s0/v0 + v0/s0 latches; 8018B9A8 row; returns L18B908. */
    if (region_walk_shifted_like_b928_with() == 0)
        goto L18B8E8;
    goto L18B904;
L18B8E8:
    /* v0/s0 latch -> L18B8E8 */
    return;
L18B904:
    return;
L18B908:
    return;
}
