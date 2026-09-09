/* FF4 source-port — interpreted module for func_80180F70.
 * Ground truth: src/func_80180F70.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80180F70(void)
{
    /* battle anim: v0 gates; 801811F0 (L181004) vs 801810B8
       (L181040) rows. */
    if (io_just() == 0)
        goto L180FEC;
    goto L180FEC;
L180FEC:
    if (io_just() == 0)
        goto L18102C;
    func_801811F0();
    goto L181060;
L18102C:
    if (io_just() == 0)
        goto L181060;
    func_801810B8();
    return;
L181060:
    return;
}
