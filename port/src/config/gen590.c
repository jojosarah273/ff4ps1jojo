/* FF4 source-port — interpreted module for battle_rows_x47_x1c_x1e_x22_x20_wi.
 * Ground truth: src/battle_rows_x47_x1c_x1e_x22_x20_wi.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_rows_x47_x1c_x1e_x22_x20_wi(void)
{
    /* battle rows: 0x47/0x1C/0x1E/0x22/0x20 windows, 8013F354 row,
       0x2A16/0x2A1E texts. */
    row_open();
    row_page(0x47);
    cell_push_c8();
    txt_cell(0x2A16);
    tail(0x1C);
    wnd_open(0xA);
    tail(0x1E);
    battle_class_rows_x1c_x22_x1e_wind();
    row_page(0x22);
    sep_a();
    row_open_w(0x70);
    txt_draw_cur();
    row_page(0x20);
    sep_a();
    row_open_w(0x70);
    txt_draw_cur();
    row_close();
    latch(4);
    cell_draw_cur();
    latch(9);
    txt_draw_cur();
    return;
}
