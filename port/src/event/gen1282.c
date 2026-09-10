/* FF4 source-port — interpreted module for func_80198300.
 * Ground truth: src/func_80198300.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80198300(void)
{
    /* event: v0 gate tree; 80198990(0x22) row; returns L198494. */
    if (io_just() == 0)
        goto L198364;
    if (io_just() == 0)
        goto L198350;
    if (io_just() == 0)
        goto L198358;
    goto L19836C;
L198350:
    goto L198494;
L198364:
    goto L198494;
L198358:
    goto L19836C;
    return;
L19836C:
    /* gate tree -> L198488 row */
    fn_1x98990(0x22);
    return;
L198494:
    return;
}
