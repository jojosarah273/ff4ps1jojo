/* FF4 source-port — interpreted module for func_8015C604.
 * Ground truth: src/func_8015C604.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8015C604(void)
{
    row_page(0xD0);
    txt_draw(0x3975);
    func_80152CDC();
    txt_set(0x352B);
    if (gate(2) == 0) {
        func_8015A284();
        func_80155778();
        func_801583FC();
        cell_clear_bank(0x352B);
    }
    txt_set(0x393A);
    cell_tick_or(cell_state(0x393B));
    if (ticker_reblend2(0x202) == 0) {
        row_page(0xD0);
        sep();
        func_80153098();
        txt_draw(0x393B);
    }
    page(0xA6);
    page_paint(0x2052);
    txt_set(0x3938);
    cell_draw(0x2050);
    if (gate(0x8080) != 0)
        goto L800;
    wnd_open(0x1C);
    tail(0xAB);
    wnd_open(0x3302);
    tail(0xAD);
    func_8015CD98();
    txt_set(0x388B);
    if (gate(2) != 0)
        goto L738;
    row_page(0xDC);
    goto L748;
L738:
    draw_pad(1);
    cell_push_c8_sel(0x80);
L748:
    txt_draw(0x397B);
    cell_cursor_dec();
    io_poll(0x10);
    if (io_just() == 0)
        goto L7c0;
    wnd_open(1);
    row_page(0xD0);
    if (io_press(cell_state(0x3539)) == 0)
        cell_set50_from54();
    txt_cell(0x3539);
    txt_draw(0x357B);
    goto L7e0;
L7c0:
    io_poll(0xA);
    if (io_just() != 0)
        func_8015CF18();
L7e0:
    latch(0xC);
    cell_put(0xD6);
    row_close2();
    goto Lb08;
L800:
    row_read(0x40);
    if (sel(2) != 0)
        goto L9f0;
    sep();
    tail(0xAB);
    wnd_open(0x321A);
    tail(0xAD);
    func_8015CD98();
    page(0xA6);
    txt_cell(0x2050);
    row_read(8);
    if (sel(2) != 0)
        goto L8e8;
    latch(2);
    cell_put(0xD6);
    draw_pad(1);
    cell_push_c8_sel(0x80);
    cell_draw(0x2052);
    step2();
    cell_push_c8_sel(0x80);
    poll_spin();
    cell_pull_c8_bank(0x80);
    func_800F5B4C();
    func_8015CEA0();
    latch(0x16);
    goto Lb08;
L8e8:
    txt_set(0x388B);
    if (gate(2) != 0)
        goto L910;
    row_page(0xDC);
    goto L920;
L910:
    draw_pad(1);
    cell_push_c8_sel(0x80);
L920:
    io_poll(0xB0);
    if (io_go() != 0)
        goto L958;
    cell_draw(0x2052);
    latch(2);
    cell_put(0xD6);
    goto L9e0;
L958:
    cell_draw(0x2052);
    txt_draw(0x397B);
    latch(0xB);
    cell_put(0xD6);
    txt_set(0x388B);
    if (gate(0x202) != 0)
        goto L9e0;
    txt_set(0x397B);
    io_poll(0xC8);
    if (io_just() != 0)
        goto L9e0;
    draw_pad(2);
    cell_push_c8_sel(0x80);
    poll_spin();
    cell_pull_c8_bank(0x80);
    func_800F5B4C();
    func_8015CEA0();
L9e0:
    latch(1);
    goto Lb08;
L9f0:
    txt_set(0x3938);
    row_read(0x20);
    if (sel(2) != 0)
        goto Laa8;
    latch(3);
    cell_put(0xD6);
    wnd_open(0x120);
    tail(0xAB);
    wnd_open(0x2C7A);
    tail(0xAD);
    func_8015CD98();
    page(0xA6);
    txt_set(0x388B);
    if (gate(2) != 0)
        goto La78;
    row_page(0xDC);
    goto La88;
La78:
    draw_pad(1);
    cell_push_c8_sel(0x80);
La88:
    txt_draw(0x397B);
    cell_draw(0x2052);
    latch(2);
    goto Lb08;
Laa8:
    latch(2);
    cell_put(0xD6);
    wnd_open(8);
    tail(0xAB);
    wnd_open(0x32DA);
    tail(0xAD);
    func_8015CD98();
    page(0xA6);
    draw_pad(1);
    cell_push_c8_sel(0x80);
    cell_draw(0x2052);
    latch(1);
Lb08:
    page(0xA6);
    cell_draw(0x2051);
    func_8015CB80();
    txt_set(0x393A);
    cell_draw(0x2053);
    txt_set(0x393B);
    cell_draw(0x2054);
    row_page(0xD0);
    func_8015A374();
    latch(3);
    func_80153374();
    latch(8);
    cell_draw(0x2A06);
    return;
}
