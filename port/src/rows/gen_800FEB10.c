/* FF4 source-port — interpreted module for shop_rows_x79_window_x6f_x6e_stamp.
 * Ground truth: src/shop_rows_x79_window_x6f_x6e_stamp.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void shop_rows_x79_window_x6f_x6e_stamp(void)
{
    /* shop rows: 0x79 window + 0x6F/0x6E stamp rows, 0x4209/0x2126/
       0x2127 texts, 0x677/0xA1 windows; closes on 0x2A5 text. */
    row_page(0x79);
    row_sel_cell_cur();
    cell_cur_save54();
    latch(0x6F);
    sep_b();
    cell_tick_sub(cell_add16());
    cell_cur_save58();
    cell_pull60(0x4209);
    latch(0x80);
    sep_b();
    cell_tick_sub(cell_add16());
    txt_draw(0x2126);
    latch(0x7F);
    sep_a();
    ticker_advance(cell_add16());
    txt_draw(0x2127);
    row_page(0x79);
    cell_tick_half();
    sep_a();
    row_open_w(3);
    txt_draw(0x677);
    latch(0xA1);
    txt_draw(0x4200);
    return;
}
