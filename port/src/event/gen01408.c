/* FF4 source-port — interpreted module for func_8018F708.
 * Ground truth: src/func_8018F708.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8018F708(void)
{
    /* event: v1/v0 gates; 8018FA00 row; loops L18F7A0/L18F7B4 with
       8018FCC4; 8018F0C8/8018FD68/8018F9E0 rows. */
    if (func_8018FA00() == 0)
        goto L18F9B8;
    /* v1/v0 gates -> L18F788 / L18F780 / L18F810 */
    func_8018FCC4();
    /* gates + 8018F0C8 -> L18F848 / L18F9B8 */
    if (func_8018FD68() != 0)
        goto L18F8B0;
    anim_reg_stub();
    goto L18F9B8;
L18F8B0:
    if (io_just() != 0)
        goto L18F8DC;
    anim_reg_stub();
L18F8DC:
    if (io_just() == 0)
        goto L18F990;
    func_8018F9E0();
    return;
L18F990:
    return;
L18F9B8:
    return;
}
