/* FF4 source-port — interpreted module for func_80162490.
 * Ground truth: src/func_80162490.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80162490(void)
{
    /* options: 0x390A/0x397B texts, 0xD6/0xCD windows, 8015A374 +
       80153374 rows. */
    page_paint2(0x390A);
    latch(0x1F);
    txt_draw(0x397B);
    latch(0xC);
    cell_put(0xD6);
    row_page(0xCD);
    options_value_table();
    latch(3);
    option_row_d4();
    latch(8);
    cell_draw(0x2A06);
    sep_a();
    row_page(0xCD);
    row_open_w(3);
    cell_put(0xCD);
    row_page(0xCE);
    row_open_w0();
    cell_put(0xCE);
    page(0xCD);
    row_page(0xD4);
    cell_draw(0x2A04);
    row_page(0xD5);
    cell_draw(0x2A05);
    latch(8);
    cell_draw(0x2A06);
    return;
}
