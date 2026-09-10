/* FF4 source-port — interpreted module for func_80173780.
 * Ground truth: src/func_80173780.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80173780(void)
{
    row_open2();
    latch(0x15);
    cell_cursor_dec();
    row_pad();
    txt_set(0x1704);
    io_poll(6);
    if (io_just() != 0)
        goto Lb88;
    txt_set(0x1724);
    if (gate(2) != 0)
        goto Lec0;
    txt_set(0x1701);
    if (io_press(cell_state(0x1727)) == 0)
        goto Lec0;
    row_page(0xAD);
    row_read(0xF);
    if (sel(0x202) != 0)
        goto Lec0;
    txt_set(0x1725);
    poll_spin();
    cell_put(0xC);
    txt_set(0x1726);
    poll_spin();
    cell_put(0xE);
    txt_set(0x1700);
    io_poll(2);
    if (io_just() == 0)
        goto La08;
    txt_set(0x1725);
    cell_put(0xC);
    txt_set(0x1726);
    cell_put(0xE);
    txt_set(0x1706);
    io_poll(8);
    if (io_go() != 0)
        goto L8f8;
    row_page(0xC);
    io_poll(0x30);
    if (io_go() == 0)
        goto L948;
    sep_b();
    cell_pos_back(0x40);
    cell_put(0xC);
    goto L948;
L8f8:
    io_poll(0x38);
    if (io_go() == 0)
        goto L948;
    row_page(0xC);
    io_poll(0x10);
    if (io_go() != 0)
        goto L948;
    sep_a();
    row_open_w(0x40);
    cell_put(0xC);
L948:
    txt_set(0x1707);
    io_poll(8);
    if (io_go() != 0)
        goto L9a8;
    row_page(0xE);
    io_poll(0x30);
    if (io_go() == 0)
        goto L9f8;
    sep_b();
    cell_pos_back(0x40);
    cell_put(0xE);
    goto L9f8;
L9a8:
    io_poll(0x38);
    if (io_go() == 0)
        goto L9f8;
    row_page(0xE);
    io_poll(0x10);
    if (io_go() != 0)
        goto L9f8;
    sep_a();
    row_open_w(0x40);
    cell_put(0xE);
L9f8:
    poll_pair(0xC);
    poll_pair(0xE);
La08:
    func_80173ED8();
    row_page(0xD7);
    if (gate(0x202) == 0)
        goto Lec0;
    row_page(0xAD);
    io_poll(0x10);
    if (io_just() != 0)
        goto Lb78;
    row_page(0xE);
    sep_b();
    cell_pos_back(8);
    cell_put(0xE);
    wnd_open_cur();
La70:
    for (;;) {
        txt_cell(0xBC1F);
        sep_a();
        cell_poke0(cell_state(0xC));
        if (io_go() != 0)
            goto Lb30;
        cell_draw(0x4E0);
        txt_cell(0xBC20);
        sep_a();
        cell_poke0(cell_state(0xE));
        cell_draw(0x4E1);
        txt_cell(0xBC21);
        cell_draw(0x4E2);
        txt_cell(0xBC22);
        cell_draw(0x4E3);
    Lb30:
        cell_step();
        cell_step();
        cell_step();
        cell_step();
        poll_t(0x10);
        if (io_just() == 0)
            continue;
        break;
    }
    row_pad();
    return;
Lb78:
    latch(3);
    goto Lc40;
Lb88:
    row_page(0xB9);
    io_poll(0x10);
    if (io_go() != 0)
        goto Lbb8;
    func_80173654();
    goto Lbf0;
Lbb8:
    sep_b();
    cell_pos_back(0x10);
    io_poll(0x10);
    if (io_go() != 0)
        latch(0x10);
    func_801729E0();
Lbf0:
    latch(0x60);
    cell_put(0xC);
    latch(0x60);
    sep_b();
    cell_tick_sub(cell_state(0xB9));
    cell_put(0xE);
    open_row(0xD);
    open_row(0xF);
    txt_set(0x1705);
Lc40:
    cell_put(7);
    row_page(7);
    tail(0x40);
    draw_pad_cur();
    row_info(0x43);
    for (;;) {
        page(0x43);
        txt_cell(0xBD97);
        sep_a();
        cell_poke0(cell_state(0xC));
        cell_pull_c8(0x424);
        row_page(0xD);
        row_open_w0();
        row_read(1);
        if (sel(2) == 0) {
            latch(0x49);
            shop_picker_7();
        }
        txt_cell(0xBD98);
        sep_a();
        cell_poke0(cell_state(0xE));
        cell_pull_c8(0x425);
        page(0x40);
        txt_cell(0xBDB7);
        cell_pull_c8(0x426);
        txt_cell(0xBDB8);
        cell_pull_c8(0x427);
        key_page(0x40);
        key_page(0x40);
        key_page(0x43);
        key_page(0x43);
        step2();
        step2();
        step2();
        step2();
        poll_t(0x20);
        if (io_just() != 0)
            break;
    }
    draw_pad_cur();
    for (;;) {
        page(0x43);
        txt_cell(0xBD97);
        sep_a();
        cell_poke0(cell_state(0xC));
        cell_pull_c8(0x4A0);
        row_page(0xD);
        row_open_w0();
        row_read(1);
        if (sel(2) == 0) {
            latch(0x68);
            shop_picker_7();
        }
        txt_cell(0xBD98);
        sep_a();
        cell_poke0(cell_state(0xE));
        cell_pull_c8(0x4A1);
        page(0x40);
        txt_cell(0xBDB7);
        cell_pull_c8(0x4A2);
        txt_cell(0xBDB8);
        cell_pull_c8(0x4A3);
        key_page(0x40);
        key_page(0x40);
        key_page(0x43);
        key_page(0x43);
        step2();
        step2();
        step2();
        step2();
        poll_t(0x20);
        if (io_just() != 0)
            break;
    }
Lec0:
    row_pad();
    return;
}
