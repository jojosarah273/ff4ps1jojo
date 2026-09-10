/* FF4 source-port — interpreted module for fn_1x5a91c.
 * Ground truth: src/fn_1x5a91c.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x5a91c(void)
{
    txt_set(14715);
    cell_put(173);
    open_row(174);
    row_arm2(cell_state(173));
    row_sel_cell2_cur();
    row_sel2(cell_state(174));
    sep_a();
    row_page(173);
    row_open_w(30);
    cell_put(169);
    row_page(174);
    row_open_w(0);
    cell_put(170);
    options_rows_b();
    options_cursor_cells();
}
