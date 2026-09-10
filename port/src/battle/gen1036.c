/* FF4 source-port — interpreted module for fn_1x08400.
 * Ground truth: src/fn_1x08400.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x08400(void)
{
    row_page(178);
    open_row(62);
    row_sel_cell_cur();
    row_sel_cell2_cur();
    row_sel2(cell_state(62));
    cell_put(61);
    page(61);
}
