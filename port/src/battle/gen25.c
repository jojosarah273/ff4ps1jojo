/* FF4 source-port — interpreted module for func_8011B874.
 * Ground truth: src/func_8011B874.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8011B874(void)
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
        func_800F6C68();
        cell_step();
        tail(0x3D);
        row_close();
        row_page(0x40);
        row_prep(0x20);
        sep_a();
        func_800F4064(0x100);
        func_800F88E4();
        row_sync2_cur();
        row_prep_close();
        cell_fmt2(0x3D);
        poll_t(0xF0);
        if (io_just() != 0)
            break;
    }
    func_8011BCD8();
    row_page(0x40);
    io_poll(0x80);
    if (io_just() == 0)
        goto L8b0;
L9d0:
    for (;;) {
        row_open();
        page(0x3D);
        func_800F6C68();
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
        func_800F885C();
        row_page(6);
        func_800F61E8();
        func_800F885C();
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
        func_800F6C68();
        cell_step();
        tail(0x3D);
        row_close();
        row_page(0x40);
        row_prep(0x20);
        sep_a();
        func_800F4064(0x100);
        func_800F88E4();
        row_sync2_cur();
        row_prep_close();
        cell_fmt2(0x3D);
        poll_t(0xF0);
        if (io_just() != 0)
            break;
    }
    func_8011BCD8();
    row_page(0x40);
    io_poll(0x80);
    if (io_just() == 0)
        goto Lac8;
Lbec:
    for (;;) {
        row_open();
        page(0x3D);
        func_800F6C68();
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
        func_800F885C();
        row_page(6);
        func_800F61E8();
        func_800F885C();
        cell_fmt2(0x3D);
        poll_t(0xF0);
        if (io_just() != 0)
            break;
    }
    return;
}
