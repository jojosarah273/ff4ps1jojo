/* FF4 source-port — interpreted module for func_8015D1C8.
 * Ground truth: src/func_8015D1C8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8015D1C8(void)
{
    /* options dispatch: 8005A234 prep, 0xD2/0xD3 windows, 0xAB/0x3598/
       0x3535 texts; the 6-entry jr-a0 table selects the value-row:
       8015D310 / 8015D3E8 / 8015D450 / 8015D4C8 / 8015D6C0 /
       8015D878 (returns at L15D300). */
    func_8005A234();
    row_page(0xD2);
    options_rows_run();
    row_page(0xD3);
    cell_put(0xAB);
    row_sel_cell_cur();
    sep_a();
    cell_poke0(cell_state(0xAB));
    option_value_copy();
    page_open(0x3598);
    label(0x3535);
    row_page(0xD3);
    row_sel_cell_cur();
    return;
}
