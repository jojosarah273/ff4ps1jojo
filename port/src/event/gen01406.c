/* FF4 source-port — interpreted module for func_801913C8.
 * Ground truth: src/func_801913C8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801913C8(void)
{
    /* event: 801928E8 x2; 80191620/8018F0C8/80190FD8 rows with
       gate at L1914E0. */
    func_801928E8();
    func_801928E8();
    func_80191620();
    func_8018F0C8();
    func_80190FD8();
    if (io_just() != 0)
        goto L191510;
    if (io_just() == 0)
        goto L191510;
    return;
L191510:
    return;
}
