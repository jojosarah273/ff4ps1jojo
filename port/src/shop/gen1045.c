/* FF4 source-port — interpreted module for fn_1x66c50.
 * Ground truth: src/fn_1x66c50.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x66c50(void)
{
    row_open();
    shop_rows_x1d_window_x30_x20_gates();
    txt_cell(61381);
    sep_a();
    cell_poke0(cell_state(0));
    cell_draw(61381);
    row_close();
}
