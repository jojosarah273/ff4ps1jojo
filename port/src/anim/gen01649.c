/* FF4 source-port — interpreted module for func_8017F5C0.
 * Ground truth: src/func_8017F5C0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8017F5C0(void)
{
    /* battle: v0 gate picks 8017EAC8 vs 8017F148 rows. */
    if (io_just() == 0)
        goto L17F60C;
    func_8017EAC8();
    return;
L17F60C:
    func_8017F148();
    return;
L17F630:
    return;
}
