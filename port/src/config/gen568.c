/* FF4 source-port — interpreted module for func_80125F38.
 * Ground truth: src/func_80125F38.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80125F38(void)
{
    /* shop rows: 0x45/0x46 windows, 0x1/0x43 texts, 8012D204 gate;
       renders the 0x45 rows with 4064/3454 values. */
    cell_cursor_dec();
    cell_put(0x45);
    open_row(0x46);
    midrow_prep_a();
    if (io_just() == 0)
        goto L125F80;
    row_close2();
    return;
L125F80:
    txt_cell(1);
    row_read(0xF);
    cell_put(0x43);
    row_prep(0x20);
    row_read2(0x43);
    row_arm_s_cur();
    row_arm_s2_cur();
    cell_pos_fwd(0x45);
    row_read2();
    row_arm_s_cur();
    row_arm_s2_cur();
    cell_pos_fwd(0xF);
    row_sync2_cur();
    battle_wait_just(0xD7E);
    row_prep_close();
    row_close2();
    return;
}
