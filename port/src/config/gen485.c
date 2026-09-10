/* FF4 source-port — interpreted module for ability_detail_x1b87_x1b83_x1b84_t.
 * Ground truth: src/ability_detail_x1b87_x1b83_x1b84_t.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void ability_detail_x1b87_x1b83_x1b84_t(void)
{
    /* ability detail: 0x1B87/0x1B83/0x1B84 texts, 0x45/0x1B93
       windows, 801308B4 row; gates 6434(2). */
    txt_set(0x1B87);
    if (gate(2) != 0)
        goto L130BB0;
    txt_set(0x1B83);
    row_sel_cell_cur();
    row_sel_cell2_cur();
    cell_poke0(cell_state(0x1B83));
    cell_poke0(cell_state(0x1B84));
    ability_rows_x1d_x1e_windows_x45_x();
    cell_push_c8_d58(0x1560);
    stat_sync();
    latch_cur();
    stat_sync();
    row_prep(0x20);
    row_arm_s_cur();
    cell_put_hi9(0x45);
    row_arm_s_cur();
    row_arm_s2_cur();
    cell_peek0(cell_state(0x45));
    row_prep_close();
    cell_push_c8();
    row_read(0x7F);
    txt_draw(0x1B93);
    return;
L130BB0:
    txt_set(0x1B93);
    return;
}
