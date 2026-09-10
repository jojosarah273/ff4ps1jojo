/* FF4 source-port — interpreted module for options_row_xa6_x90_windows_x2053.
 * Ground truth: src/options_row_xa6_x90_windows_x2053.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void options_row_xa6_x90_windows_x2053(void)
{
    /* options row: 0xA6/0x90 windows, 0x2053/0x2054/0x3303 cells,
       801531CC + 8015E158 + 8015319C/80153098 rows; loops L15E030
       (5C64(0x202)) and L15E0F0 (6434(0x202)). */
    page(0xA6);
    page_paint(0x2053);
    page_paint(0x2054);
    func_801531CC();
    io_poll(0x46);
    if (io_go() != 0)
        goto L15E0D0;
    page_open(0x3534);
    draw_pad(5);
L15e030:
    for (;;) {
        txt_cell(0x3303);
        io_poll(2);
        if (io_just() != 0)
            goto L15E0A8;
        io_poll(3);
        if (io_just() != 0)
            goto L15E0A8;
        cell_step();
        cell_step();
        cell_step();
        cell_step();
        poll_pair_cur();
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    goto L15E0D0;
L15E0A8:
    open_row(0x90);
    fn_1x5e158();
    row_page(0x90);
    if (gate(0x202) == 0)
        return;
L15E0D0:
    page(0xA6);
    latch(0x80);
    cell_draw(0x2050);
    page_paint(0x2051);
L15e0f0:
    for (;;) {
        fn_1x5319c();
        txt_cell(0x3540);
        if (gate(0x202) != 0)
            continue;
        break;
    }
    sep();
    option_mark_54();
    page(0xA6);
    cell_draw(0x2054);
    return;
}
