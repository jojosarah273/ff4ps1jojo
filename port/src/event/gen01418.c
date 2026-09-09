/* FF4 source-port — interpreted module for func_801887A8.
 * Ground truth: src/func_801887A8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801887A8(void)
{
    /* battle: a0/v1 latch + v0 gate; 80191C58 rows. */
    /* a0/v1 latch -> L1888A4 */
    if (io_just() == 0)
        goto L188850;
    func_80191C58();
    goto L188884;
L188850:
    func_80191C58();
L188884:
    if (io_just() != 0)
        goto L188898;
    goto L1888AC;
L188898:
    return;
L1888AC:
    return;
}
