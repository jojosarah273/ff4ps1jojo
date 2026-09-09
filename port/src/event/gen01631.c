/* FF4 source-port — interpreted module for func_8018A1B8.
 * Ground truth: src/func_8018A1B8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8018A1B8(void)
{
    /* event: 8018AC90 gate; spins L18A240/L18A2F0 with 8018F0C8;
       8018A438 row; 8x 8018AC90 tail. */
    if (func_8018AC90() == 0)
        goto L18A288;
    /* spin loops with 8018F0C8 */
    for (;;) {
        if (io_just() != 0)
            continue;
        break;
    }
L18A288:
    func_8018A438();
    func_8018AC90();
    func_8018AC90();
    func_8018AC90();
    func_8018AC90();
    func_8018AC90();
    func_8018AC90();
    func_8018AC90();
    func_8018AC90();
    return;
}
