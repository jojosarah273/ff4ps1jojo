/* FF4 source-port — interpreted module for battle_rows_x28_x4_x2b_x5_x2_windo.
 * Ground truth: src/battle_rows_x28_x4_x2b_x5_x2_windo.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_rows_x28_x4_x2b_x5_x2_windo(void)
{
    /* battle rows: 0x28/0x4/0x2B/0x5/0x2 windows, 80148FC0 row,
       7600 cells; loop L149B6C on 5DD4/5C64(0x202). */
    cell_cursor_dec();
    latch(0x20);
    cell_put(0x28);
    row_close2();
    battle_rows_x26_x2b_windows_row_ga();
    cell_put(4);
    row_arm2(cell_state(0x2B));
    row_sel_cell2_cur();
    row_sel2(cell_state(5));
    row_page(5);
    row_read(1);
    cell_put(5);
    draw_pad(0x18);
    row_info();
    row_page(2);
    row_prep(0x20);
    row_read2(4);
L149b6c:
    for (;;) {
        cell_stamp8_9_b(0x7600);
        cell_dec_cell();
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    sep();
    row_prep_close();
    row_page(2);
    sep_a();
    row_open_w(0x18);
    cell_put(2);
    return;
}
