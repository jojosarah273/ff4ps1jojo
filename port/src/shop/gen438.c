/* FF4 source-port — interpreted module for shop_flow_x4200_x1000_x4218_texts.
 * Ground truth: src/shop_flow_x4200_x1000_x4218_texts.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void shop_flow_x4200_x1000_x4218_texts(void)
{
    /* shop flow: 0x4200/0x1000/0x4218 texts, 0x32 window, 80170198
       row; loop L16EB5C polls 9644/9330 pairs; tail 94B8/9448 close. */
    row_open2();
    row_open();
    row_sync();
    row_open3();
    latch_cur();
    cell_cursor_dec();
    row_pad();
    wnd_open_cur();
    row_open();
    cell_cursor_read();
    cell_state_of();
    cell_state(0x1000);
    cell_peek_cur();
    draw_pad(0x4218);
    wnd_open(4);
L16eb5c:
    for (;;) {
        row_sync();
        shop_c3c_b04_x1000_x2_b9c_gates_a0();
        row_done();
        cell_step();
        step2();
        row_prep(0x20);
        row_open();
        /* gates -> L16EBFC/L16EC3C/L16EC94 */
        row_close();
        cell_cursor_read();
        cell_state(0x20);
        row_prep_close();
        row_done();
        row_close();
        row_pad();
        break;
    }
    return;
}
