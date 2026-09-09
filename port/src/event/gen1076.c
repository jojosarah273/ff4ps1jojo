/* FF4 source-port — interpreted module for func_8018FD68.
 * Ground truth: src/func_8018FD68.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8018FD68(void)
{
    /* event: s6 gate; 80190004(1) + 8018F0C8/80191638/80190088
       rows with s2/v0 + v0 latches. */
    /* s6/v0 latch -> L18FFD8 */
    if (func_80190004(1) != 0)
        goto L18FE04;
    func_8018F0C8();
    goto L18FFDC;
L18FE04:
    if (io_just() != 0)
        goto L18FE2C;
    func_8018F0C8();
L18FE2C:
    if (io_just() == 0)
        goto L18FF88;
    func_80191638();
    /* s2 latch -> L18FEC0/L18FEB0 */
    func_80190088();
    if (io_just() != 0)
        goto L18FF54;
    func_8018F0C8();
L18FF54:
    if (io_just() == 0)
        goto L18FF88;
    /* loop -> L18FE4C */
L18FF88:
    if (io_just() == 0)
        goto L18FFB0;
L18FFB0:
    if (io_just() != 0)
        goto L18FFDC;
    func_8018F0C8();
    return;
L18FFDC:
    return;
}
