/* FF4 source-port — interpreted module for func_801910AC.
 * Ground truth: src/func_801910AC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801910AC(void)
{
    /* event: v0 gate run -> L1910E8/L1910EC. */
    if (io_just() != 0)
        goto L1910E8;
    if (io_just() != 0)
        goto L1910EC;
    return;
L1910E8:
    return;
L1910EC:
    return;
}
