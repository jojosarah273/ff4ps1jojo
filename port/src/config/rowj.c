/* FF4 source-port — interpreted module for func_8012EC48.
 * Ground truth: src/func_8012EC48.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8012EC48(void)
{
    func_800F8F74(0x1B27);
    func_80122FF4();
    row_page(0xE8);
    if (gate(0x8080) == 0)
        return;
    row_page(0xE8);
    func_8012D204();
    if (io_just() != 0)
        return;
    row_open();
    func_80177224();
    row_close();
    txt_cell(3);
    txt_draw(0x1A86);
    row_read(0xC4);
    if (sel(0x202) != 0)
        goto L3d0;
    txt_cell(1);
    row_read(0xF);
    cell_put(0x45);
    row_sel_cell_cur();
    row_sel_cell2_cur();
    cell_poke0(cell_state(0x45));
    func_801224D0();
    func_800F6C68();
    func_800F4A7C();
    func_800F4A7C();
    io_poll(0xFF);
    if (io_just() != 0)
        goto L3d0;
    row_open();
    func_801241B8();
    row_page(0xE8);
    func_80122CF0();
    func_8011F684();
    func_80124158();
    func_80122844();
    func_80126528();
    latch(0x20);
    cell_put(0x3F);
    func_80120F1C();
    draw_pad_cur();
    func_8011EF30();
    draw_pad(0xDBAB);
    draw_pad_cur();
    wnd_open_cur();
    func_80121124();
    wnd_open(0x952E);
    tail(0xD0);
    wnd_open(0x824F);
    tail(0xCD);
    row_page(0xE8);
    func_80122B54();
    row_prep(0x20);
    row_prep_close();
    cell_put(0xBA);
    stat_sync();
    cell_put(0xBC);
    open_row(0xB9);
    open_row(0xBB);
    latch(0x28);
    cell_put(0xC2);
    cell_put(0xD2);
    latch(0xC8);
    cell_put(0xB3);
    cell_put(0xBD);
    latch(0x81);
    cell_put(0xB4);
    cell_put(0xBE);
    row_page(0xE7);
    cell_put(0xB7);
    cell_put(0xC0);
    latch(0x68);
    cell_put(0xB0);
    latch(4);
    cell_put(0xAE);
    latch(0x34);
    cell_put(0xAD);
    row_page(0xE8);
    cell_put(0xD3);
    row_close();
    func_800F6C68();
    txt_draw(0x1B7E);
    if (gate(0x80) != 0)
        goto Lf4c;
    draw_pad(0xB214);
    goto Lf54;
Lf4c:
    draw_pad(0xB234);
Lf54:
    func_8011FBA4();
    func_800F6C68();
    txt_draw(0x1B7F);
    if (gate(0x80) != 0)
        goto Lf90;
    draw_pad(0xB21C);
    goto Lf98;
Lf90:
    draw_pad(0xB23C);
Lf98:
    func_8011FBA4();
    func_800F6C68();
    txt_draw(0x1B80);
    if (gate(0x80) != 0)
        goto Lfd4;
    draw_pad(0xB224);
    goto Lfdc;
Lfd4:
    draw_pad(0xB244);
Lfdc:
    func_8011FBA4();
    row_page(0xE8);
    func_8012D204();
    io_poll(0x12);
    if (io_just() == 0)
        goto L01c;
    draw_pad(0xB22C);
    func_8011FBA4();
L01c:
    func_80120FBC();
    draw_pad_cur();
    func_8011EF30();
L03c:
    for (;;) {
        txt_set(0x1B81);
        func_801224D0();
        txt_cell(0x1B7E);
        if (gate(0x8080) != 0)
            break;
        txt_set(0x1B81);
        func_800F61E8();
        io_poll(3);
        if (io_just() == 0)
            goto L094;
        latch(0);
    L094:
        txt_draw(0x1B81);
    }
    page_paint2(0x1B87);
    func_8012F9D0();
    func_800F8F74(0x1B87);
    wnd_open(0xFF18);
    tail(0x93);
    func_8016EA7C();
    latch(5);
    cell_put(0xAB);
    latch(0x9A);
    cell_put(0xAA);
    func_80126458();
    func_80120E2C();
    func_801228B4();
    row_page(0xE7);
    row_sel_cell_cur();
    func_801224D0();
    row_prep(0x20);
    row_prep_close();
    draw_pad_cur();
    func_80121124();
    func_8012F3F0();
    latch(0x30);
    cell_put(0x3F);
    func_801241B8();
    func_80120F1C();
    draw_pad(0x20A);
    latch(0xD);
    sep_b();
    func_801222A4();
    func_801264C0();
    func_8011F6A4();
    latch(0x28);
    cell_put(0xC2);
    latch(1);
    cell_put(0xB4);
    row_page(0xE7);
    cell_put(0xB7);
    cell_put(0xC0);
    latch(0x68);
    cell_put(0xB0);
    latch(0x84);
    cell_put(0xAE);
    latch(0x34);
    cell_put(0xAD);
    latch(6);
    cell_put(0xAB);
    func_80120E2C();
    row_page(0xE7);
    row_sel_cell_cur();
    func_801224D0();
    row_prep(0x20);
    row_prep_close();
    wnd_open_cur();
    func_80121124();
    func_801240D0();
    func_801266F0();
    func_80126458();
    func_8016EA7C();
    func_80120F1C();
    draw_pad_cur();
    wnd_open_cur();
    func_80121124();
    func_80122A9C();
    func_80126528();
    func_80120F1C();
    func_80120B6C();
    func_80177284();
    return;
L3d0:
    func_8012EBF8();
    return;
}
