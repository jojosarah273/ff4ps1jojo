/* FF4 source-port — interpreted module for config_rows_5a.
 * Ground truth: src/config_rows_5a.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void config_rows_5a(void)
{
    /* rows with 6764/8768 writes on 0x5A-0x5E windows, 8011F3F8
       row; 0x45/0x48 cells. */
    row_prep(0x20);
    row_open();
    tail(0x45);
    sep_a();
    cell_peek0(cell_state(0x45));
    cell_push89_sel(0x48);
    shared_scroll_column_x5a_window_x3();
    row_prep_close();
    row_page(0x5A);
    cell_draw_cur();
    row_page(0x5B);
    cell_draw(2);
    row_page(0x5D);
    cell_draw(4);
    row_page(0x5E);
    cell_draw(6);
    row_prep(0x20);
    row_close();
    return;
}
