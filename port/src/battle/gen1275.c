/* FF4 source-port — interpreted module for func_8010B5DC.
 * Ground truth: src/func_8010B5DC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8010B5DC(void)
{
    /* battle: 3C3C/3B04 gates; v0 run to L10B6D0. */
    cell_state_of();
    cell_state_of();
    if (io_just() == 0)
        goto L10B6AC;
    if (io_just() != 0)
        goto L10B6D0;
    return;
L10B6AC:
    return;
L10B6D0:
    return;
}
