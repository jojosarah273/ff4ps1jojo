/* FF4 source-port — interpreted module for func_8014BB94.
 * Ground truth: src/func_8014BB94.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8014BB94(void)
{
    txt_draw(0xF133);
    txt_set(0x34C5);
    if (gate(0x202) == 0)
        return;
    latch(4);
    txt_draw(0xF2D0);
    wnd_open(0x8060);
    label(0xF289);
    func_8014B98C();
    latch(0x8D);
    func_8014D780();
    func_8014096C();
    latch(2);
    txt_draw(0xEF87);
    func_800F8F74(0xF2D0);
    sep();
    for (;;) {
        page_paint(0xEBE6);
        cell_draw(0xEBE7);
        func_800F9200();
        latch(0x80);
        cell_draw(0xEC06);
        row_close2();
        sep_a();
        row_open_w(0x10);
        poll_t(0x20);
        if (io_just() != 0)
            break;
    }
    latch(0xA0);
    txt_draw(0xF29F);
Lbcb8:
    for (;;) {
        func_8007259C();
        func_8014D98C();
        wnd_open_cur();
    Lbcd0:
        txt_cell(0xEBE7);
        if (gate(0x202) != 0)
            goto Lbd48;
        txt_set(0x34C4);
        if (gate(0x80) != 0)
            goto Lbd28;
        func_8014E9C4();
        row_read(0x7F);
        sep_a();
        row_open_w(0x60);
        goto Lbd30;
    Lbd28:
        func_8014E9C4();
    Lbd30:
        cell_draw(0xEBE6);
        latch(0xF);
        cell_draw(0xEC06);
    Lbd48:
        row_read(7);
        sep_a();
        row_open_w(3);
        cell_put(2);
        txt_set(0x34C4);
        if (gate(0x8080) != 0)
            goto Lbe10;
        latch(0x3F);
        cell_put_cur();
        txt_cell(0xEBE6);
        sep_b();
        func_800F7F48(cell_state(2));
        cell_draw(0xEBE6);
        if (io_go() != 0)
            goto Lbec0;
        txt_cell(0xEC06);
        cell_draw(0xEC06);
        goto Lbec0;
    Lbe10:
        latch(0x7F);
        cell_put_cur();
        txt_cell(0xEBE6);
        sep_a();
        cell_poke0(cell_state(2));
        cell_draw(0xEBE6);
        if (io_go() == 0)
            goto Lbec0;
        txt_cell(0xEC06);
        cell_draw(0xEC06);
    Lbec0:
        txt_cell(0xEBE7);
        sep_a();
        row_open_w(8);
        cell_draw(0xEBE7);
        poll_t(0x20);
        if (io_just() == 0)
            goto Lbcd0;
        break;
    }
    wnd_open_cur();
    draw_pad_cur();
Lbf20:
    for (;;) {
        txt_cell(0xEC06);
        if (gate(0x8080) != 0)
            goto Lbf58;
        latch(0xF0);
        func_800F8960(0x3C0);
        func_800F8960(0x3C1);
        goto Lc088;
    Lbf58:
        func_800F5B2C(cell_state_of());
        txt_cell(0xEBE6);
        func_800F8960(0x3C0);
        txt_cell(0xEBE7);
        sep_b();
        func_800F8058(4);
        func_800F8960(0x3C1);
        txt_set(0xF133);
        io_poll(0xE4);
        if (io_just() != 0)
            goto Lbff0;
        txt_set(0x1813);
        row_read(2);
        sep_a();
        cell_poke0(cell_state(0xF133));
    Lbff0:
        func_800F8960(0x3C2);
        txt_set(0x6CC0);
        if (gate(2) != 0)
            goto Lc078;
        row_page(0x3C3);
        func_800F8960();
        txt_cell(0xEBE6);
        sep_b();
        func_800F8058(0x10);
        func_800F8960(0x3C0);
        goto Lc088;
    Lc078:
        row_page_cur();
        func_800F8960(0x3C3);
    Lc088:
        poll_t(0x20);
        if (io_just() == 0)
            continue;
        break;
    }
    func_800F5D24(0xF29F);
    if (poll_go(2) == 0)
        goto Lbcb8;
    func_800F8F74(0xEF87);
    wnd_open_cur();
    label(0xF289);
    return;
}
