/* FF4 source-port — interpreted module for func_8018DC58.
 * Ground truth: src/func_8018DC58.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8018DC58(void)
{
    /* event: v0/v1 gate; v1/v0 gate picks 8018CFF8 vs the
       8018DAB4 row. */
    if (io_just() != 0)
        goto L18DC7C;
    goto L18DCC8;
L18DC7C:
    /* v1/v0 gate -> L18DCAC / 8018CFF8 */
    if (io_just() == 0)
        goto L18DCAC;
    func_8018CFF8();
    return;
L18DCAC:
    func_8018DAB4();
    return;
L18DCC8:
    return;
}
