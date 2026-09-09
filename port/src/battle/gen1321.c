/* FF4 source-port — interpreted module for func_80141100.
 * Ground truth: src/func_80141100.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80141100(void)
{
    /* battle: 3C3C/3B04 gates; 801411BC/80141240 pair rows. */
    cell_state_of();
    cell_state_of();
    if (io_just() == 0)
        goto L1411A8;
    func_801411BC();
    func_80141240();
    goto L1411A8;
L141178:
    func_801411BC();
    func_80141240();
    return;
L1411A8:
    return;
}
