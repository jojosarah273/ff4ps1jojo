/* FF4 source-port — interpreted module for func_801811F0.
 * Ground truth: src/func_801811F0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801811F0(void)
{
    /* battle anim: v0 gates; 80180BB4 row loop L1812B0. */
    if (io_just() != 0)
        goto L181240;
    goto L181240;
L181240:
    if (io_just() == 0)
        goto L1812E4;
    do {
        if (func_80180BB4() == 0)
            goto L1812E4;
    } while (io_just() != 0);
    return;
L1812E4:
    return;
}
