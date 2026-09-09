/* FF4 source-port — interpreted module for func_80161C88.
 * Ground truth: src/func_80161C88.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80161C88(void)
{
    latch(0xFF);
    txt_draw(0x357B);
    page(0xA6);
    tail(0x8C);
    txt_cell(0x2005);
    row_read(0xFB);
    cell_draw(0x2005);
    txt_set(0x2685);
    row_read(0xFB);
    txt_draw(0x2685);
    wnd_open(1);
    row_page(0xCD);
    if (io_press(cell_state(0x3539)) != 0)
        goto Ld18;
    cell_set50_from54();
Ld18:
    open_row(0xD6);
    txt_cell(0x3539);
    func_8015A374();
    page(0xA6);
    txt_cell(0x2005);
    row_read(0xFB);
    cell_draw(0x2005);
    txt_cell(0x2003);
    row_read(0xC0);
    if (sel(0x202) != 0)
        goto Ld90;
    txt_cell(0x2004);
    row_read(0x3C);
    if (sel(2) != 0)
        goto Le68;
Ld90:
    latch(0x21);
    cell_draw(0x2051);
    row_prep(0x20);
    func_80152A20();
    row_sel2_cur();
    cell_put_hi9(0xA9);
    row_prep_close();
    sep();
    for (;;) {
        txt_cell(0x3539);
        if (io_press(cell_state(0xA9)) != 0)
            goto Le38;
        cell_step();
    }
Le38:
    cell_draw_cur();
    func_80161C48();
    return;
Le68:
    latch(3);
    func_80153374();
    page_paint(0x2A06);
    page(0xA6);
    tail(0x92);
    txt_cell(0x2005);
    row_read(0x40);
    if (sel(0x202) != 0)
        goto Ld90;
    page(0x8C);
    txt_cell(0x2003);
    row_read(0xC0);
    if (sel(0x202) != 0)
        goto Ld90;
    txt_cell(0x2004);
    row_read(0x3C);
    if (sel(0x202) != 0)
        goto Ld90;
    txt_cell(0x2000);
    row_read(0x1F);
    io_poll(0x13);
    if (io_just() != 0)
        goto Lf38;
    io_poll(0x15);
    if (io_just() == 0)
        goto Lf48;
Lf38:
    latch(0x5E);
    goto Lfb8;
Lf48:
    func_80153218();
    io_poll(0xFF);
    if (io_go() == 0)
        goto Lf88;
    latch(0x11);
    txt_draw(0x34CA);
    func_8015329C();
    return;
Lf88:
    io_poll(0x40);
    if (io_go() == 0)
        goto Lfb0;
    latch(0x41);
    goto Lfb8;
Lfb0:
    latch(0x40);
Lfb8:
    cell_put(0x94);
    tail(0xE5);
    wnd_open(0x97A0);
    tail(0x80);
    latch(0xF);
    cell_put(0x82);
    latch(6);
    func_801526F8();
    txt_set(0x28A0);
    row_read(0x7F);
    cell_put(0xDF);
    latch(3);
    cell_put(0xE1);
    options_row_run();
    page(0xE3);
    sep();
    for (;;) {
        cell_push_c8();
        cell_pull_c8(0x28A2);
        step2();
        cell_step();
        poll_t(3);
        if (io_just() != 0)
            break;
    }
    txt_set(0x268B);
    cell_put(0xA9);
    txt_set(0x268C);
    if (gate(2) == 0) {
        latch(0xFF);
        cell_put(0xA9);
    }
    txt_set(0x28A1);
    row_read(0x7F);
    cell_put(0xAB);
    if (io_press(cell_state(0xA9)) != 0)
        goto L128;
    if (io_go() != 0)
        return;
L128:
    page(0x92);
    sep_b();
    txt_cell(0x200B);
    cell_tick_sub(cell_state(0xAB));
    cell_put(0xA9);
    txt_cell(0x200C);
    cell_pos_back();
    cell_put(0xAA);
    if (io_go() == 0)
        return;
    row_page(0xA9);
    cell_draw(0x200B);
    row_page(0xAA);
    cell_draw(0x200C);
    row_page(0x94);
    txt_draw(0x26D2);
    page_paint2(0x355D);
    func_80062B08();
    return;
}
