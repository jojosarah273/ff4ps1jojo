/* FF4 source-port — interpreted module for options_row_x3540_x2003_texts_xa9.
 * Ground truth: src/options_row_x3540_x2003_texts_xa9.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void options_row_x3540_x2003_texts_xa9(void)
{
    /* options row: 0x3540/0x2003 texts, 0xA9 window, 8015330C row;
       loop L15E7B4 on 6434(0x202)/4120(0x202) gates. */
    row_open();
    row_sync();
    sep();
    tail(0xA9);
L15e7b4:
    for (;;) {
        cell_push_c8_d58(0x3540);
        if (gate(0x202) != 0)
            goto L15E7F4;
        txt_cell(0x2003);
        row_read(0xC0);
        if (sel(0x202) != 0)
            goto L15E7F4;
        key_page(0xA9);
    L15E7F4:
        rows_u16_d44_d54_swap_chain_with_c();
        step2();
        poll_t(5);
        if (io_just() == 0)
            continue;
        break;
    }
    row_done();
    row_close();
    row_page(0xA9);
    txt_draw(0x38DB);
    return;
}
