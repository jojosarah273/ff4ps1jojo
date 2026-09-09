/* FF4 source-port — interpreted module for func_8017DB7C.
 * Ground truth: src/func_8017DB7C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8017DB7C(void)
{
    /* battle anim dispatch: a0/v0 + v0 gate tree routes
       8017D7D8 / 8017D898 / 8017D980 / 8017DA64 rows. */
    /* a0/v0 latch -> L17DBDC */
    if (io_just() != 0)
        goto L17DBAC;
    func_8017D7D8();
    return;
L17DBAC:
    func_8017D898();
    return;
L17DBDC:
    func_8017D898();
    return;
L17DBF4:
    func_8017D980();
    return;
L17DC0C:
    func_8017DA64();
    return;
}
