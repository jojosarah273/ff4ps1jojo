/* FF4 source-port — interpreted module for func_8018FCC4.
 * Ground truth: src/func_8018FCC4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8018FCC4(void)
{
    /* event: v0 + v0/s3 gates; 8018F078 spin loop L18FCF8. */
    do {
        if (io_just() == 0)
            goto L18FD44;
        /* v0/s3 latch -> L18FD30 */
        func_8018F078();
        if (io_just() != 0)
            goto L18FD34;
        goto L18FD48;
    L18FD30:
        break;
    L18FD34:
        if (io_just() != 0)
            continue;
        break;
    } while (1);
    return;
L18FD44:
    return;
L18FD48:
    return;
}
