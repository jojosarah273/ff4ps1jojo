/* FF4 source-port — interpreted module for func_80162DF8.
 * Ground truth: src/func_80162DF8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80162DF8(void)
{
    row_page(0xCD);
    if (gate(0x8080) != 0)
        goto Lfa4;
    txt_draw(0x34C7);
    latch(0xF8);
    txt_draw(0x34C5);
    sep();
    for (;;) {
        txt_cell(0x33C2);
        cell_pull_c8(0x289C);
        io_poll(0xCE);
        if (io_just() != 0)
            break;
        io_poll(0xC5);
        if (io_just() != 0)
            break;
        cell_step();
        step2();
    }
    step2();
    latch(0xF8);
    cell_pull_c8(0x289C);
    step2();
    latch(4);
    cell_pull_c8(0x289C);
    step2();
    cell_step();
    for (;;) {
        txt_cell(0x33C2);
        cell_pull_c8(0x289C);
        io_poll(0xFF);
        if (io_just() != 0)
            break;
        cell_step();
        step2();
    }
    sep();
    for (;;) {
        txt_cell(0x289C);
        cell_draw(0x33C2);
        io_poll(0xFF);
        if (io_just() != 0)
            break;
        cell_step();
    }
Lfa4:
    latch(0xF8);
    txt_draw(0x33C6);
    latch(4);
    txt_draw(0x33C7);
    txt_set(0x3881);
    if (gate(2) == 0)
        return;
    page(0xA6);
    txt_cell(0x201B);
    cell_put(0xDF);
    row_page(0xC1);
    if (gate(0x202) != 0)
        goto L044;
    cell_word_half(cell_state(0xDF));
    cell_flags_repack();
    row_page(0xDF);
    if (gate(0x202) != 0)
        goto L044;
    key_page(0xDF);
L044:
    row_page(0xDF);
    cell_put(0x84);
    txt_cell(0x201D);
    cell_put(0xC5);
    cell_put(0xE1);
    func_8015240C();
    cell_word_half(cell_state(0xE4));
    cell_flags_repack();
    cell_word_half_s(cell_state(0xE3));
    page(0xE3);
    tail(0xCB);
    row_page(0xCD);
    if (gate(0x80) != 0)
        goto L0ec;
    wnd_open(5);
    tail(0xC7);
    wnd_open(0xD);
    tail(0xC3);
    goto L124;
L0ec:
    sep();
    tail(0xC7);
    wnd_open(5);
    tail(0xC3);
L124:
    sep();
    row_page(0xC5);
    func_80152224();
    cell_put(0xC9);
    sep_a();
    row_page(0xCB);
    cell_poke0(cell_state(0xC9));
    cell_put(0xC9);
    row_page(0xCC);
    row_open_w0();
    cell_put(0xCA);
    row_page(0xC7);
    txt_cell(0x3540);
    if (gate(0x202) != 0)
        goto L3f4;
    row_page(0xC7);
    func_80152CDC();
    page(0xA6);
    txt_cell(0x2003);
    row_read(0xC0);
    if (sel(0x202) != 0)
        goto L3f4;
    txt_cell(0x2005);
    row_read(2);
    if (sel(0x202) != 0)
        goto L3f4;
    txt_cell(0x2006);
    if (gate(0x80) != 0)
        goto L3f4;
    txt_cell(0x2040);
    row_read(0x20);
    if (sel(0x202) != 0)
        goto L3f4;
    row_page(0xC1);
    if (gate(2) != 0)
        goto L2ec;
    txt_cell(0x2040);
    if (gate(0x8080) != 0)
        goto L2ec;
    cell_word_half(cell_state(0xCA));
    cell_flags_repack();
    cell_word_half_s(cell_state(0xC9));
    cell_word_half(cell_state(0xCA));
    cell_flags_repack();
    cell_word_half_s(cell_state(0xC9));
    func_800F7D0C();
L2ec:
    row_page(0xC1);
    if (gate(0x202) != 0)
        goto L394;
    row_page(0x84);
    cell_put(0xDF);
    txt_cell(0x202A);
    cell_put(0xE1);
    func_8015240C();
    sep_b();
    row_page(0xC9);
    cell_tick_sub(cell_state(0xE3));
    cell_put(0xC9);
    row_page(0xCA);
    cell_tick_sub(cell_state(0xE4));
    cell_put(0xCA);
    if (io_go() != 0)
        goto L394;
L384:
    wnd_open(0x4000);
    tail(0xC9);
L394:
    if (cell_flags_pack(2) != 0)
        goto L384;
    row_page(0xC7);
    row_sel_cell_cur();
    row_page(0xC9);
    cell_draw(0x34D4);
    row_page(0xCA);
    cell_draw(0x34D5);
L3f4:
    key_page(0xC7);
    row_page(0xC7);
    if (io_press(cell_state(0xC3)) == 0)
        goto L124;
    func_80061C8C();
    return;
}
