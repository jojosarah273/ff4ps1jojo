/* FF4 source-port — interpreted module for func_80192A60.
 * Ground truth: src/func_80192A60.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80192A60(void)
{
    /* event: v0/v1 latch loop L192A88 on 80191620/80197798(3)/
       801977B8 rows. */
    if (io_just() == 0)
        goto L192AE8;
    for (;;) {
        /* v0/v1 latch -> L192AD0 */
        func_80191620();
        func_80197798(3);
        func_801977B8();
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
