/* FF4 source-port — interpreted module for func_80197964.
 * Ground truth: src/func_80197964.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80197964(void)
{
    /* event: v0 gates; 8018F078 spin loop L1979E8. */
    if (io_just() != 0)
        goto L1979A4;
    goto L1979A4;
L1979A4:
    if (io_just() == 0)
        goto L197A28;
L1979E8:
    func_8018F078();
    if (io_just() != 0)
        goto L197A14;
    goto L197A24;
L197A14:
    if (io_just() != 0)
        goto L1979E8;
    return;
L197A24:
    return;
L197A28:
    return;
}
