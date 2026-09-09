/* FF4 source-port — interpreted module for func_80108400.
 * Ground truth: src/func_80108400.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80108400(void)
{
    row_page(178);
    open_row(62);
    row_sel_cell_cur();
    row_sel_cell2_cur();
    row_sel2(cell_state(62));
    cell_put(61);
    page(61);
}
