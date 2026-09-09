/* FF4 source-port — interpreted module for func_80107B74.
 * Ground truth: src/func_80107B74.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80107B74(void)
{
    /* config rows: 0x712/0x1440/0x1441 texts, 0x1441 window; loops
       L107B84 (5958(0x60)) and L107BBC (73E0 gates). */
    wnd_open_cur();
L107b84:
    for (;;) {
        page_paint(0x712);
        cell_step();
        poll_t(0x60);
        if (io_just() == 0)
            continue;
        break;
    }
    wnd_open_cur();
    draw_pad_cur();
L107bbc:
    for (;;) {
        txt_cell(0x1440);
        io_poll(0xCE);
        if (io_go() == 0)
            goto L107C58;
        io_poll(0xE7);
        if (io_go() == 0)
            goto L107C24;
        io_poll(0xEB);
        if (io_go() == 0)
            goto L107C58;
        io_poll(0xFE);
        if (io_go() != 0)
            goto L107C58;
    L107C24:
        func_800F8960(0x712);
        txt_cell(0x1441);
        func_800F8960(0x713);
    L107C58:
        poll_t(0x60);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
