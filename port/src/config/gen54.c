/* FF4 source-port — interpreted module for func_8015E158.
 * Ground truth: src/func_8015E158.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8015E158(void)
{
    page_open(0x3536);
    tail(0xA9);
    draw_pad(0x30);
LE178:
    for (;;) {
        txt_cell(0x2C7A);
        if (gate(0x8080) != 0)
            goto LE1D8;
        cell_step();
        cell_step();
        cell_step();
        cell_step();
        poll_pair_cur();
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    key_page(0x90);
    return;
LE1D8:
    sep();
    latch(0x2F);
    config_banner_96();
    label(0x393D);
    wnd_open(4);
    label(0x393F);
    func_8015236C();
    sep_a();
    row_page(0xA9);
    cell_poke0(cell_state(0x3941));
    cell_put(0xAB);
    row_page(0xAA);
    cell_poke0(cell_state(0x3942));
    cell_put(0xAC);
    page(0xAB);
    txt_cell(0x2C7A);
    cell_put(0xAD);
    if (gate(0x80) != 0)
        goto LE1D8;
    txt_cell(0x2C7B);
    page(0xA6);
    cell_draw(0x2052);
    latch(0x20);
    cell_draw(0x2050);
    latch(2);
    cell_draw(0x2051);
    row_page(0xAD);
    row_read(0x40);
    if (sel(0x202) != 0)
        goto LE3CC;
    row_page(0xAD);
    row_read(0x10);
    if (sel(2) != 0)
        goto LE3AC;
LE328:
    for (;;) {
        func_8015316C();
        cell_put(0xAB);
        sep_a();
        row_open_w(5);
        txt_cell(0x3540);
        if (gate(0x202) != 0)
            continue;
        break;
    }
    row_page(0xAB);
    sep();
    func_80153098();
    goto LE3B4;
LE3AC:
    latch(0xFF);
LE3B4:
    page(0xA6);
    cell_draw(0x2053);
    return;
LE3CC:
    row_page(0xAD);
    row_read(0x10);
    if (sel(2) != 0)
        goto LE43C;
LE3EC:
    for (;;) {
        func_8015319C();
        txt_cell(0x3540);
        if (gate(0x202) != 0)
            continue;
        break;
    }
    sep();
    func_80153098();
    goto LE444;
LE43C:
    latch(0xF8);
LE444:
    page(0xA6);
    cell_draw(0x2054);
    return;
}
