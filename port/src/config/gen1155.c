/* FF4 source-port — interpreted module for options_b04_x2000_gates_v0_run_l15.
 * Ground truth: src/options_b04_x2000_gates_v0_run_l15.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void options_b04_x2000_gates_v0_run_l15(void)
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
