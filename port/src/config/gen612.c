/* FF4 source-port — interpreted module for func_801580B0.
 * Ground truth: src/func_801580B0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801580B0(void)
{
    /* options: 0xA9/0xD2/0xAD/0xAF windows, 0x2A04/0x3598 texts,
       80152CDC/8015310C rows; gates 7918(0x202)/4120(2). */
    row_page(0xA9);
    cell_put(0xD2);
    options_rows_run();
    row_page(0xAD);
    cell_put(0xD3);
    row_sel_cell_cur();
    sep_a();
    cell_poke0(cell_state(0xAD));
    cell_put(0xAF);
    row_page(0xAF);
    option_value_copy();
    page_open(0x3598);
    txt_cell(0x2A04);
    cell_tick_or(cell_state_of());
    if (ticker_reblend2(0x202) != 0)
        return;
    txt_cell(0x2A06);
    row_read(1);
    if (sel(2) != 0)
        return;
    key_page(0xD1);
    return;
}
