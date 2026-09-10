/* FF4 source-port — interpreted module for shop_detail_cells_xe_x19_x18_xc_wi.
 * Ground truth: src/shop_detail_cells_xe_x19_x18_xc_wi.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void shop_detail_cells_xe_x19_x18_xc_wi(void)
{
    /* shop detail cells: 0xE/0x19/0x18/0xC windows with 76BC/7CC8
       pairs and 3F38(3C3C(0x18)) rows; 4248(0x10)/4120 gate. */
    row_page(0xE);
    row_read(0xF);
    cell_put(0x19);
    open_row(0x18);
    cell_word_half(cell_addr16(0x19));
    cell_flags_repack();
    cell_word_half_s(cell_addr16(0x18));
    cell_word_half(cell_addr16(0x19));
    cell_flags_repack();
    cell_word_half_s(cell_addr16(0x18));
    row_page(0xC);
    row_read(0xF);
    row_sel_cell_cur();
    sep_a();
    ticker_advance(cell_addr16(0x18));
    cell_put(0x18);
    row_page(0x19);
    sep_a();
    row_open_w(0x18);
    cell_put(0x19);
    row_page(0xC);
    row_read(0x10);
    if (ticker_reblend(2) != 0)
        goto L105340;
    row_page(0x19);
    sep_a();
    row_open_w(4);
    cell_put(0x19);
L105340:
    page(0x18);
    return;
}
