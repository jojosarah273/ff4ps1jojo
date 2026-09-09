/* FF4 source-port — interpreted module for func_801719C8.
 * Ground truth: src/func_801719C8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801719C8(void)
{
    row_open2();
    latch(0x15);
    func_800F9200();
    row_pad();
    txt_set(0x1712);
    if (gate(2) != 0)
        goto Le00;
    txt_set(0x1701);
    if (gate(0x202) != 0)
        goto Le00;
    txt_set(0x1704);
    io_poll(2);
    if (io_just() != 0)
        goto Lb00;
    row_page(0xAD);
    io_poll(0x20);
    if (io_go() != 0)
        goto La78;
    row_read(0xF);
    if (sel(0x202) != 0)
        goto Le00;
La78:
    txt_set(0x1713);
    cell_put(0xC);
    txt_set(0x1714);
    cell_put(0xE);
    func_80173ED8();
    row_page(0xD7);
    if (gate(0x202) == 0)
        goto Le00;
    row_page(0xAD);
    io_poll(0x10);
    if (io_just() != 0)
        goto Laf0;
    latch(2);
    func_80171E18();
    return;
Laf0:
    latch(3);
    goto Lb60;
Lb00:
    latch_cur();
    func_801729E0();
    open_row(0xD);
    open_row(0xF);
    latch(0x70);
    cell_put(0xC);
    latch(0x70);
    sep_b();
    func_800F7F48(cell_state(0xB5));
    cell_put(0xE);
    txt_set(0x1705);
Lb60:
    cell_put(7);
    txt_set(0x1704);
    io_poll(2);
    if (io_just() == 0)
        goto Lbd0;
    row_page(0x7A);
    row_read(4);
    goto Lbd8;
Lbd0:
    latch_cur();
Lbd8:
    sep_a();
    cell_poke0(cell_state(7));
    draw_pad_cur();
Lc10:
    for (;;) {
        txt_cell(0xBFB4);
        sep_a();
        cell_poke0(cell_state(0xC));
        func_800F8960(0x414);
        row_page(0xD);
        row_open_w0();
        row_read(1);
        if (sel(2) == 0) {
            latch(0x45);
            func_801714C4();
        }
        txt_cell(0xBFB5);
        sep_a();
        cell_poke0(cell_state(0xE));
        func_800F8960(0x415);
        txt_cell(0xBFB6);
        sep_a();
        row_open_w(0x90);
        func_800F8960(0x416);
        txt_cell(0xBFB7);
        sep_a();
        row_open_w(0x1A);
        func_800F8960(0x417);
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
    io_poll(2);
    if (io_just() != 0)
        goto Ld70;
    latch(0xF8);
    txt_draw(0x41D);
    txt_draw(0x421);
    goto Le00;
Ld70:
    row_page(0xA1);
    row_read(8);
    if (sel(2) != 0)
        goto Le00;
    latch(0x70);
    txt_draw(0x40C);
    latch(0x78);
    txt_draw(0x40D);
    latch(0x43);
    txt_draw(0x40E);
    func_800F8F74(0x40F);
    latch(0x78);
    txt_draw(0x410);
    latch(0x78);
    txt_draw(0x411);
    latch(0x43);
    txt_draw(0x412);
    func_800F8F74(0x413);
Le00:
    row_pad();
    return;
}
