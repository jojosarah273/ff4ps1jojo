/* FF4 source-port — interpreted module for func_80182CB4.
 * Ground truth: src/func_80182CB4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80182CB4(void)
{
    /* battle anim: v1/v0 + v0 gates; 80197208 rows. */
    if (io_just() != 0)
        goto L182D50;
    if (io_just() != 0)
        goto L182D50;
    /* v0/v1 latch -> L182D50 */
    func_80197208();
    goto L182DCC;
L182D50:
    if (io_just() != 0)
        goto L182DCC;
    func_80197208();
    return;
L182DCC:
    return;
}
