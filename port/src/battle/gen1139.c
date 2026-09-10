/* FF4 source-port — interpreted module for battle_rows_c3c_b9c_gates_d54c_a0.
 * Ground truth: src/battle_rows_c3c_b9c_gates_d54c_a0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_rows_c3c_b9c_gates_d54c_a0(void)
{
    /* battle rows: 3C3C/3B9C + 9330 gates; 8010D54C + 95A0 tail. */
    cell_state_of();
    cell_peek_cur();
    row_open();
    if (io_just() == 0)
        goto L10D438;
    if (io_just() == 0)
        goto L10D438;
    fn_1x0d54c();
L10D43C:
    row_close();
    return;
L10D438:
    goto L10D43C;
}
