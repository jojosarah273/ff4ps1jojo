/* FF4 source-port — interpreted module for fn_1x1b874.
 * Ground truth: src/fn_1x1b874.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x1b874(void)
{
    latch_cur();
    txt_draw(0x2105);
    wnd_open_cur();
    tail(0x3D);
    tail(0x40);
    tail(0x43);
L8b0:
    for (;;) {
        row_open();
        page(0x3D);
        cell_push_c8();
        cell_step();
        tail(0x3D);
        row_close();
        row_page(0x40);
        row_prep(0x20);
        sep_a();
        cell_pos_fwd(0x100);
        cell_pull89_fn();
        row_sync2_cur();
        row_prep_close();
        cell_fmt2(0x3D);
        poll_t(0xF0);
        if (io_just() != 0)
            break;
    }
    fn_1x1bcd8();
    row_page(0x40);
    io_poll(0x80);
    if (io_just() == 0)
        goto L8b0;
L9d0:
    for (;;) {
        row_open();
        page(0x3D);
        cell_push_c8();
        cell_step();
        tail(0x3D);
        row_close();
        open_row(6);
        row_sel_cell_cur();
        row_sel_cell2_cur();
        row_sel2(cell_state(6));
        row_sel_cell_cur();
        row_sel_cell2_cur();
        row_sel2(cell_state(6));
        cell_pull_c8_off();
        row_page(6);
        cell_set50_from40();
        cell_pull_c8_off();
        cell_fmt2(0x3D);
        poll_t(0xF0);
        if (io_just() != 0)
            break;
    }
    wnd_open_cur();
    tail(0x3D);
    tail(0x40);
    tail(0x43);
Lac8:
    for (;;) {
        row_open();
        page(0x3D);
        cell_push_c8();
        cell_step();
        tail(0x3D);
        row_close();
        row_page(0x40);
        row_prep(0x20);
        sep_a();
        cell_pos_fwd(0x100);
        cell_pull89_fn();
        row_sync2_cur();
        row_prep_close();
        cell_fmt2(0x3D);
        poll_t(0xF0);
        if (io_just() != 0)
            break;
    }
    fn_1x1bcd8();
    row_page(0x40);
    io_poll(0x80);
    if (io_just() == 0)
        goto Lac8;
Lbec:
    for (;;) {
        row_open();
        page(0x3D);
        cell_push_c8();
        cell_step();
        tail(0x3D);
        row_close();
        open_row(6);
        row_sel_cell_cur();
        row_sel_cell2_cur();
        row_sel2(cell_state(6));
        row_sel_cell_cur();
        row_sel_cell2_cur();
        row_sel2(cell_state(6));
        cell_pull_c8_off();
        row_page(6);
        cell_set50_from40();
        cell_pull_c8_off();
        cell_fmt2(0x3D);
        poll_t(0xF0);
        if (io_just() != 0)
            break;
    }
    return;
}
