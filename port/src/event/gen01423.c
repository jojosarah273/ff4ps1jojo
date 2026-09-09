/* FF4 source-port — interpreted module for func_80187504.
 * Ground truth: src/func_80187504.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80187504(void)
{
    /* battle: v0 gates; 8018767C row at L187590. */
    if (io_just() != 0)
        goto L187590;
    goto L187560;
    func_8018767C();
    return;
L187590:
    func_8018767C();
    return;
L187560:
    if (io_just() != 0)
        goto L187590;
    func_8018767C();
    return;
}
