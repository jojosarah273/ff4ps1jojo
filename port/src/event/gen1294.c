/* FF4 source-port — interpreted module for func_801813C0.
 * Ground truth: src/func_801813C0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801813C0(void)
{
    /* battle anim: v0 gates; 801808D8 row loop L181450. */
    if (io_just() != 0)
        goto L1813F8;
    goto L1813F8;
L1813F8:
    if (io_just() == 0)
        goto L181480;
    do {
        if (func_801808D8() == 0)
            goto L181480;
    } while (io_just() != 0);
    return;
L181480:
    return;
}
