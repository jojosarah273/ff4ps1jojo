/* FF4 source-port — interpreted module for func_80170C14.
 * Ground truth: src/func_80170C14.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80170C14(void)
{
    row_page(0xD3);
    if (gate(2) == 0)
        return;
    row_open2();
    latch(0x15);
    func_800F9200();
    row_pad();
    txt_set(0x1703);
    open_row(0x4A);
    func_800F7864();
    func_800F76E8();
    func_800F7CC8(cell_state(0x4A));
    func_800F7864();
    func_800F76E8();
    func_800F7CC8(cell_state(0x4A));
    cell_put(0x4B);
    page(0x4A);
    txt_cell(0x1001);
    row_read(0x1F);
    txt_cell(0xB2FA);
    row_sel_cell_cur();
    txt_draw(0x710);
    row_page(0xD8);
    if (gate(2) == 0) {
        latch(8);
        txt_draw(0x1705);
    }
    txt_set(0x1705);
    io_poll(8);
    if (io_just() != 0) {
        row_page(0x7B);
        sep_a();
        row_open_w(0x10);
        row_read(3);
    }
    cell_put(7);
    open_row(6);
    txt_set(0x1705);
    io_poll(8);
    if (io_just() != 0)
        goto Le9c;
    io_poll(4);
    if (io_go() != 0)
        goto Ldec;
    row_page(0xAB);
    if (gate(2) != 0)
        goto Le9c;
Ldec:
    row_page(0x7B);
    row_read(8);
    sep_a();
    cell_poke0(cell_state(7));
    cell_put(7);
    row_page(0xAB);
    row_read(1);
    if (sel(0x202) != 0)
        goto Le9c;
    row_page(0x7B);
    row_read(8);
    cell_put(6);
Le9c:
    row_page(7);
    draw_pad_cur();
Lec4:
    for (;;) {
        func_800F6D70(0xC0B4);
        func_800F8960(0x470);
        step2();
        func_800F6D70(0xC0B4);
        sep_b();
        func_800F7F48(cell_state(6));
        func_800F8960(0x470);
        step2();
        txt_cell(0xC0C4);
        func_800F8960(0x470);
        cell_step();
        step2();
        txt_cell(0xC0C4);
        row_read(0xF1);
        sep_a();
        cell_poke0(cell_state(0x710));
        func_800F8960(0x470);
        cell_step();
        step2();
        poll_t(8);
        if (io_just() != 0)
            break;
    }
    draw_pad_cur();
    for (;;) {
        func_800F6D70(0xC0BC);
        func_800F8960(0x4F0);
        step2();
        func_800F6D70(0xC0BC);
        sep_b();
        func_800F7F48(cell_state(6));
        func_800F8960(0x4F0);
        step2();
        txt_cell(0xC0C4);
        func_800F8960(0x4F0);
        cell_step();
        step2();
        txt_cell(0xC0C4);
        row_read(0xF1);
        sep_a();
        cell_poke0(cell_state(0x710));
        func_800F8960(0x4F0);
        cell_step();
        step2();
        poll_t(8);
        if (io_just() != 0)
            break;
    }
    row_page(0xA2);
    row_read(8);
    if (sel(2) != 0)
        goto L0ec;
    txt_set(0x473);
    txt_draw(0x473);
    txt_set(0x477);
    txt_draw(0x477);
    txt_set(0x4F3);
    row_read(0xCF);
    txt_draw(0x4F3);
    txt_set(0x4F7);
    row_read(0xCF);
    txt_draw(0x4F7);
L0ec:
    row_page(0xA2);
    row_read(4);
    if (sel(2) != 0)
        goto L17c;
    row_page(0xA1);
    row_read(4);
    if (sel(2) != 0)
        goto L154;
    row_page(0xA1);
    row_read(3);
    func_800F4370(0xD2);
    if (sel(0x202) != 0)
        goto L17c;
L154:
    latch(0xF8);
    txt_draw(0x471);
    txt_draw(0x475);
    txt_draw(0x4F1);
    txt_draw(0x4F5);
L17c:
    row_pad();
    return;
}
