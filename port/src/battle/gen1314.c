/* FF4 source-port — interpreted module for func_801470F8.
 * Ground truth: src/func_801470F8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801470F8(void)
{
    /* battle: 3C3C/3B04 gates; 80146954 row. */
    cell_state_of();
    cell_state_of();
    if (io_just() == 0)
        goto L147158;
    goto L147158;
L147158:
    func_80146954();
    goto L1471A0;
L147168:
    func_80146954();
    return;
L1471A0:
    return;
}
