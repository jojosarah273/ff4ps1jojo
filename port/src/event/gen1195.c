/* FF4 source-port — interpreted module for func_801810B8.
 * Ground truth: src/func_801810B8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801810B8(void)
{
    /* battle anim: 80180BB4/80180E28/80180D64/80180C90 row loop
       L181180 on v0 gates; returns at L1811D0. */
    if (io_just() != 0)
        goto L18110C;
    goto L18110C;
L18110C:
    if (io_just() == 0)
        goto L1811D0;
    do {
        func_80180BB4();
        func_80180E28();
        func_80180D64();
        func_80180C90();
        if (io_just() == 0)
            goto L1811D0;
    } while (io_just() != 0);
L1811D0:
    return;
}
