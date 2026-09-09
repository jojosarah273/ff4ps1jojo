/* FF4 source-port — interpreted module for func_8018A5F8.
 * Ground truth: src/func_8018A5F8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8018A5F8(void)
{
    /* event: 8018AC90 + v0 spins; 80197648 tail row. */
    if (io_just() != 0)
        goto L18A614;
    func_8018AC90();
L18A614:
    for (;;) {
        if (io_just() == 0)
            goto L18A668;
        if (io_just() != 0)
            continue;
        break;
    }
L18A668:
    if (io_just() == 0)
        goto L18A6A4;
    func_80197648();
    return;
L18A6A4:
    return;
}
