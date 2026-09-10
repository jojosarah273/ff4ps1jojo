/* FF4 source-port — interpreted module for event_v0_v1_latch_loop_l192a88_on.
 * Ground truth: src/event_v0_v1_latch_loop_l192a88_on.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void event_v0_v1_latch_loop_l192a88_on(void)
{
    /* event: v0/v1 latch loop L192A88 on 80191620/80197798(3)/
       801977B8 rows. */
    if (io_just() == 0)
        goto L192AE8;
    for (;;) {
        /* v0/v1 latch -> L192AD0 */
        func_80191620();
        func_80197798(3);
        event_jr_t2_dispatch_f078_spin_loo();
        goto L192AE8;
    L192AD0:
        if (io_just() != 0)
            continue;
        break;
    }
    return;
L192AE8:
    return;
}
