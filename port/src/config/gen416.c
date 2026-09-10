/* FF4 source-port — interpreted module for options_cast_x38e6_x2703_texts_x2a.
 * Ground truth: src/options_cast_x38e6_x2703_texts_x2a.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void options_cast_x38e6_x2703_texts_x2a(void)
{
    /* options cast: 0x38E6/0x2703 texts, 0x2A06/0x353F/0x29EB cells,
       0xD6/0xCF windows, 8015A374/80153374 rows; 6434/53C0 gates. */
    latch(2);
    txt_draw(0x38E6);
    txt_set(0x2703);
    if (gate_cur() != 0)
        goto L15FE68;
    cell_clear_bank(0x2703);
    cell_clear_bank(0x2704);
    cell_clear_bank(0x2705);
    cell_clear_bank(0x2706);
    open_row(0xD6);
    row_page(0xCF);
    options_value_table();
    latch(3);
    option_row_d4();
    page_paint(0x2A06);
    txt_set(0x353F);
    row_sel_cell_cur();
    latch(0x40);
    cell_draw(0x29EB);
    row_page(0xCF);
    io_poll(5);
    if (io_go() == 0)
        goto L15FE68;
    sep_b();
    cell_pos_back(5);
    txt_cell(0x29BD);
    cell_draw(0x29B5);
    cell_state_of();
    cell_dispatch_cur();
    page_paint2(0x29CD);
    return;
L15FE68:
    txt_set(0x2709);
    txt_draw(0x2707);
    txt_set(0x270A);
    txt_draw(0x2708);
    return;
}
