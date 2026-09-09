/* FF4 source-port — interpreted module for func_8015D3E8.
 * Ground truth: src/func_8015D3E8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void func_8015D3E8(void) {
    page(0xA6);
    txt_cell(0x2004);
    row_read(0xCF);
    cell_draw(0x2004);
    open_row(0xD6);
    row_page(0xD2);
    options_value_table();
    latch(0x3);
    option_row_d4();
    page_paint(0x2A06);;
}
