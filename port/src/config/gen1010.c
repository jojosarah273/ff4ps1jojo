/* FF4 source-port — interpreted module for func_801345B4.
 * Ground truth: src/func_801345B4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801345B4(void)
{
    /* ability rows: 0x45/0x46 windows with 54D4 gates pick the
       5480/5410 tails. */
    tail(0x45);
    if (io_press(cell_state(0x45)) == 0)
        goto L134624;
    if (io_press(cell_state(0x46)) != 0)
        goto L134614;
    if (io_go() != 0)
        goto L134624;
L134614:
    sep_b();
    return;
L134624:
    sep_a();
    return;
}
