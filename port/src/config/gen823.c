/* FF4 source-port — interpreted module for options_cast_x2706_text_xd6_xcf_wi.
 * Ground truth: src/options_cast_x2706_text_xd6_xcf_wi.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void options_cast_x2706_text_xd6_xcf_wi(void)
{
    /* options cast: 0x2706 text, 0xD6/0xCF windows, 8015A374 +
       80153374 rows. */
    txt_set(0x2706);
    txt_draw_cur();
    latch(9);
    cell_put(0xD6);
    row_page(0xCF);
    options_value_table();
    latch(6);
    option_row_d4();
    latch(0x40);
    cell_draw(0x2A06);
    row_page(0xCF);
    row_sel_cell_cur();
    txt_cell(0x29EB);
    cell_draw_cur();
    return;
}
