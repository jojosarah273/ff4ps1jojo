/* FF4 source-port — interpreted module for func_801984B0.
 * Ground truth: src/func_801984B0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801984B0(void)
{
    /* event: v0 gate tree; 80198990(0x22) row; returns L1985E4. */
    if (io_just() != 0)
        goto L19850C;
    goto L1985E4;
L19850C:
    if (io_just() != 0)
        goto L198520;
    goto L1985E4;
L198520:
    if (io_just() == 0)
        goto L19854C;
L19854C:
    if (io_just() != 0)
        goto L198564;
L198564:
    goto L1985A0;
L1985A0:
    if (io_just() != 0)
        goto L1985D8;
    func_80198990(0x22);
L1985E0:
    return;
L1985D8:
    return;
L1985E4:
    return;
}
