/* FF4 source-port — interpreted module for shop_detail_xca_window_x172c_x172e.
 * Ground truth: src/shop_detail_xca_window_x172c_x172e.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void shop_detail_xca_window_x172c_x172e(void)
{
    /* shop detail: 0xCA window, 0x172C/0x172E-0x172F/0x1726/0x1706-
       0x1707 texts, 8011AB18/80169128/800FD718 rows; 5574(0xFB)
       gate. */
    open_row(0xCA);
    page_open(0x172C);
    txt_cell(0x172E);
    io_poll(0xFB);
    if (io_go() != 0)
        goto L11207C;
    txt_draw(0x1722);
    latch(3);
    cell_cursor_dec();
    txt_cell(0x172F);
    row_read(0x3F);
    txt_draw(0x1706);
    txt_cell(0x1730);
    txt_draw(0x1707);
    txt_cell(0x172F);
    row_read(0xC0);
    txt_draw(0x1725);
    goto L1120B4;
L11207C:
    sep_b();
    cell_pos_back(0xFB);
    cell_cursor_dec();
    txt_cell(0x172F);
    txt_draw(0x1706);
    txt_cell(0x1730);
    txt_draw(0x1707);
L1120B4:
    row_close2();
    shop_main_xca_window_x1700_gate_pi();
    cell_clear_bank(0x1E05);
    battle_cb_86120();
    battle_rows_run();
    open_row(0xD6);
    return;
}
