/* FF4 source-port — interpreted module for func_80172BA8.
 * Ground truth: src/func_80172BA8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80172BA8(void)
{
    row_open2();
    latch(0x15);
    cell_cursor_dec();
    row_pad();
    txt_set(0x1704);
    io_poll(4);
    if (io_just() != 0)
        goto Lcf0;
    txt_set(0x171C);
    if (gate(2) != 0)
        goto Lff0;
    txt_set(0x1701);
    if (io_press(cell_state(0x171F)) == 0)
        goto Lff0;
    row_page(0xAD);
    io_poll(0x20);
    if (io_go() != 0)
        goto Lc68;
    row_read(0xF);
    if (sel(0x202) != 0)
        goto Lff0;
Lc68:
    txt_set(0x171D);
    cell_put(0xC);
    txt_set(0x171E);
    cell_put(0xE);
    func_80173ED8();
    row_page(0xD7);
    if (gate(0x202) == 0)
        goto Lff0;
    row_page(0xAD);
    io_poll(0x10);
    if (io_just() != 0)
        goto Lce0;
    latch(4);
    func_80171E18();
    return;
Lce0:
    latch(3);
    goto Ld50;
Lcf0:
    row_page(0xB7);
    func_801729E0();
    latch(0x70);
    cell_put(0xC);
    latch(0x70);
    sep_b();
    cell_tick_sub(cell_state(0xB7));
    cell_put(0xE);
    open_row(0xD);
    open_row(0xF);
    txt_set(0x1705);
Ld50:
    cell_put(7);
    txt_set(0x1704);
    io_poll(4);
    if (io_just() == 0)
        goto Lde0;
    txt_set(0x6FD);
    row_page(0x7A);
    func_800F4960(0xBE37);
    if (sel(0x202) != 0)
        goto Lde0;
    latch(0x10);
    goto Lde8;
Lde0:
    latch_cur();
Lde8:
    sep_a();
    cell_poke0(cell_state(7));
    draw_pad_cur();
Le20:
    for (;;) {
        txt_cell(0xBFB4);
        sep_a();
        cell_poke0(cell_state(0xC));
        cell_pull_c8(0x46C);
        row_page(0xD);
        row_open_w0();
        row_read(1);
        if (sel(2) == 0) {
            latch(0x5B);
            func_801714C4();
        }
        txt_cell(0xBFB5);
        sep_a();
        cell_poke0(cell_state(0xE));
        cell_pull_c8(0x46D);
        txt_cell(0xBFB6);
        sep_a();
        row_open_w(0x78);
        cell_pull_c8(0x46E);
        txt_cell(0xBFB7);
        sep_a();
        row_open_w(0x18);
        cell_pull_c8(0x46F);
        cell_step();
        cell_step();
        cell_step();
        cell_step();
        step2();
        step2();
        step2();
        step2();
        poll_t(0x10);
        if (io_just() != 0)
            break;
    }
    txt_set(0x1704);
    io_poll(4);
    if (io_just() == 0)
        goto Lff0;
    row_page(0xAD);
    io_poll(0x20);
    if (io_just() == 0)
        goto Lff0;
    row_page(0xB7);
    io_poll(0x10);
    if (io_just() == 0)
        goto Lff0;
    latch(0x74);
    txt_draw(0x47C);
    txt_set(0x6F8);
    sep_a();
    row_open_w(0x68);
    txt_draw(0x47D);
    latch(0x2E);
    txt_draw(0x47E);
    latch(0x21);
    txt_draw(0x47F);
Lff0:
    row_pad();
    return;
}
