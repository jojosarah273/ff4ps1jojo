/* FF4 source-port — interpreted module for func_8015F1D0.
 * Ground truth: src/func_8015F1D0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8015F1D0(void)
{
    /* options: 0x2705/0x289D texts, 0xCF window, 0x2A04-0x2A06/0x29EB
       cells, 80152CDC/8015310C rows. */
    txt_set(0x2705);
    txt_draw_cur();
    row_page(0xCF);
    options_rows_run();
    latch(0x12);
    option_value_copy();
    page_open(0x3598);
    txt_set(0x289D);
    cell_draw(0x2A04);
    page_paint(0x2A05);
    latch(0x40);
    cell_draw(0x2A06);
    row_page(0xCF);
    row_sel_cell_cur();
    txt_cell(0x29EB);
    cell_draw_cur();
    return;
}
