/* FF4 source-port — interpreted module for func_8018746C.
 * Ground truth: src/func_8018746C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8018746C(void)
{
    /* battle: v0 gates; 8018767C row at L1874E8. */
    if (io_just() != 0)
        goto L1874F4;
    func_8018767C();
    return;
L1874F4:
    return;
}
