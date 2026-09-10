/* FF4 source-port — interpreted module for options_x3558_x2016_texts_x202f_ce.
 * Ground truth: src/options_x3558_x2016_texts_x202f_ce.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void options_x3558_x2016_texts_x202f_ce(void)
{
    /* options: 0x3558/0x2016 texts, 0x202F cell, 8015ABEC/8015A56C
       rows; gate 6434(2). */
    txt_set(0x3558);
    if (gate(2) != 0)
        goto L15A8C4;
    txt_cell(0x202F);
L15A8C4:
    txt_cell(0x2016);
    sep_a();
    row_open_w(0x14);
    tail(0xA9);
    options_rows_b();
    options_cursor_cells();
    return;
}
