/* FF4 source-port — interpreted module for func_80189BCC.
 * Ground truth: src/func_80189BCC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80189BCC(void)
{
    /* event: 8018CB88 row; v0 gates; returns at L189C24. */
    func_8018CB88();
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
