/* FF4 source-port — interpreted module for func_8013F5A8.
 * Ground truth: src/func_8013F5A8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8013F5A8(void)
{
    txt_set(0x3581);
    txt_draw(0x6CC0);
    sep();
    wnd_open(0xED50);
    for (;;) {
        cell_draw_cur();
        cell_step();
        poll_t(0xF4BC);
        if (io_just() != 0)
            break;
    }
    wnd_open(0x180C);
    for (;;) {
        cell_draw_cur();
        cell_step();
        poll_t(0x1847);
        if (io_just() != 0)
            break;
    }
    sep();
    open_row(0xD7);
    open_row(0x47);
    tail(0x48);
    tail(0x4A);
    tail(0x4C);
    open_row(0x4E);
    tail(0x5F);
    tail(0x61);
    open_row(0x63);
    open_row(0x64);
    tail(0x37);
    tail(0x39);
    txt_draw(0x6CC1);
    txt_draw(0x6CC2);
    page_paint2(0xF07B);
    page_paint2(0xF07F);
    page_paint2(0xF083);
    page_paint2(0xF087);
    page_paint2(0xF08B);
    for (;;) {
        cell_draw(0x4F);
        cell_step();
        cell_step();
        cell_step();
        cell_step();
        poll_t(0x10);
        if (io_just() != 0)
            break;
    }
    page_open(0x1800);
    poll_t(0xF4);
    if (io_just() == 0)
        goto L754;
    latch(2);
    goto L774;
L754:
    poll_t(0x1AF);
    if (io_just() == 0)
        goto L77c;
    latch(0x12);
L774:
    txt_draw(0xF411);
L77c:
    page_paint2(0xF28B);
    sep();
    for (;;) {
        latch(0xFF);
        cell_draw(0xF2B4);
        latch(0x80);
        cell_draw(0xEF6B);
        cell_draw(0xEF7A);
        cell_step();
        poll_t(8);
        if (io_just() != 0)
            break;
    }
    latch(2);
    txt_draw(0x183A);
    txt_draw(0x183C);
    txt_draw(0x183E);
    wnd_open(0x101);
    label(0xEF69);
    label(0xEF83);
    label(0xEF76);
    label(0xEF78);
    page_paint2(0xEF73);
    sep();
    row_prep(0x20);
    row_sync2(0xB6C0);
    for (;;) {
        func_800F88E4();
        sep_a();
        cell_pos_fwd(0x18);
        cell_step();
        cell_step();
        poll_t(0x600);
        if (io_just() != 0)
            break;
    }
    row_sync2_cur();
    row_prep_close();
    sep();
    for (;;) {
        cell_draw(0xF488);
        cell_step();
        poll_t(0x12);
        if (io_just() != 0)
            break;
    }
    func_80168750();
    latch(0x18);
    txt_draw(0x1DD);
    latch(3);
    txt_draw(0x1DC);
    return;
}
