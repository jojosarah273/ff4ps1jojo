/* FF4 source-port — interpreted module for func_8015254C.
 * Ground truth: src/func_8015254C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8015254C(void)
{
    /* options: 3B04(0x2000) gates; v0 run -> L152614 / L152630. */
    cell_state(0x2000);
    if (io_just() == 0)
        goto L152630;
    if (io_just() == 0)
        goto L152630;
    if (io_just() != 0)
        goto L1525D8;
    goto L152630;
L1525D8:
    if (io_just() != 0)
        goto L152614;
    return;
L152614:
    return;
L152630:
    return;
}
