/* FF4 source-port — interpreted module for battle_c3c_b04_gates_row.
 * Ground truth: src/battle_c3c_b04_gates_row.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_c3c_b04_gates_row(void)
{
    /* battle: 3C3C/3B04 gates; 80146954 row. */
    cell_state_of();
    cell_state_of();
    if (io_just() == 0)
        goto L147158;
    goto L147158;
L147158:
    fn_1x46954();
    goto L1471A0;
L147168:
    fn_1x46954();
    return;
L1471A0:
    return;
}
