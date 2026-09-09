/* FF4 source-port — interpreted module for func_80168BC4.
 * Ground truth: src/func_80168BC4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80168BC4(void)
{
    /* config help/credits: 0x180F/0x1813/0x1900 texts; key confirms
       (5574 0xD/0x10, 13/10 ladders), two scroll loops (L168D60/
       L168DD8 on 5A90(4/0x20)), 0x8000 gate at the end. */
    cell_clear_bank();
    cell_clear_bank();
    cell_clear_bank();
    cell_clear_bank();
    cell_clear_bank();
    cell_clear_bank();
    cell_cursor_dec();
    sep_b();
    cell_pos_back(0x4D);
    txt_draw_cur();
    io_poll(0xD);
    if (io_go() == 0)
        goto L168C9C;
    io_poll(0x10);
    if (io_just() != 0)
        goto L168C9C;
    cell_cursor_dec();
    page_paint2_cur();
    txt_set(0x1813);
    cell_push_c8_d58(0x1900);
    row_read(3);
    txt_draw_cur();
    row_close2();
L168C9C:
    io_poll(0xA);
    if (io_just() == 0)
        goto L168D0C;
    cell_cursor_dec();
    cell_clear_bank();
    latch(0x40);
    txt_draw_cur();
    latch(8);
    txt_draw_cur();
    txt_draw_cur();
    latch(2);
    txt_draw_cur();
    page_paint2_cur();
    row_close2();
L168D0C:
    sep();
L168d60:
    for (;;) {
        cell_push_c8();
        cell_pull_c8();
        cell_step();
        step2();
        poll_t(4);
        if (io_just() != 0)
            break;
    }
    row_close2();
    latch(0x38);
    txt_draw_cur();
    sep();
L168dd8:
    for (;;) {
        sep();
        cell_pull_c8();
        cell_step();
        step2();
        poll_t(0x20);
        if (io_just() != 0)
            break;
    }
    wnd_open(0x7FFF);
    label_cur();
    return;
}
