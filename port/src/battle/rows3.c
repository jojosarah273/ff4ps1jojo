/* FF4 source-port — interpreted module for battle_rows_d5a0_row_gate_xff_pick.
 * Ground truth: src/battle_rows_d5a0_row_gate_xff_pick.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_rows_d5a0_row_gate_xff_pick(void)
{
    /* battle rows: 8014D5A0 row; gate 5574(0xFF) picks the
       960C/95A0 tail. */
    row_open();
    row_sync();
    txt_set_cur();
    io_poll(0xFF);
    if (io_just() != 0)
        goto L14D6E8;
    cell_push_c8();
    battle_confirm_x31_x33_x80_gates_p();
    return;
L14D6E8:
    row_done();
    row_close();
    return;
}
