/* FF4 source-port — interpreted module for func_801724D0.
 * Ground truth: src/func_801724D0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801724D0(void)
{
    row_open2();
    latch(0x15);
    func_800F9200();
    row_pad();
    txt_set(0x1718);
    if (gate(2) != 0)
        goto L980;
    txt_set(0x1701);
    if (io_press(cell_state(0x171B)) == 0)
        goto L980;
    txt_set(0x1704);
    io_poll(3);
    if (io_just() != 0)
        goto L630;
    txt_set(0x6D0);
    if (gate(2) == 0)
        goto L868;
    row_page(0xAD);
    io_poll(0x20);
    if (io_go() != 0)
        goto L5a8;
    row_read(0xF);
    if (sel(0x202) != 0)
        goto L980;
L5a8:
    txt_set(0x1719);
    cell_put(0xC);
    txt_set(0x171A);
    cell_put(0xE);
    func_80173ED8();
    row_page(0xD7);
    if (gate(0x202) == 0)
        goto L980;
    row_page(0xAD);
    io_poll(0x10);
    if (io_just() != 0)
        goto L620;
    latch(3);
    func_80171E18();
    return;
L620:
    latch(3);
    goto L690;
L630:
    latch_cur();
    func_801729E0();
    open_row(0xD);
    open_row(0xF);
    latch(0x70);
    cell_put(0xC);
    latch(0x70);
    sep_b();
    func_800F7F48(cell_state(0xB6));
    cell_put(0xE);
    txt_set(0x1705);
L690:
    cell_put(7);
    txt_set(0x1704);
    io_poll(3);
    if (io_just() == 0)
        goto L700;
    row_page(0x7A);
    row_read(2);
    goto L708;
L700:
    latch_cur();
L708:
    sep_a();
    cell_poke0(cell_state(7));
    draw_pad_cur();
L740:
    for (;;) {
        txt_cell(0xBFB4);
        sep_a();
        cell_poke0(cell_state(0xC));
        func_800F8960(0x480);
        row_page(0xD);
        row_open_w0();
        row_read(1);
        if (sel(2) == 0) {
            latch(0x60);
            func_801714C4();
        }
        txt_cell(0xBFB5);
        sep_a();
        cell_poke0(cell_state(0xE));
        func_800F8960(0x481);
        txt_cell(0xBFB6);
        sep_a();
        row_open_w(0x48);
        func_800F8960(0x482);
        txt_cell(0xBFB7);
        sep_a();
        row_open_w(0x18);
        func_800F8960(0x483);
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
    goto L980;
L868:
    txt_set(0x6F8);
    if (gate(0x202) != 0)
        goto L8a8;
    txt_set(0x1705);
    goto L8b0;
L8a8:
    latch(0x40);
L8b0:
    draw_pad_cur();
    for (;;) {
        txt_cell(0xB816);
        func_800F8960(0x480);
        txt_cell(0xB817);
        sep_a();
        cell_poke0(cell_state(0x6F8));
        func_800F8960(0x481);
        txt_cell(0xB818);
        func_800F8960(0x482);
        txt_cell(0xB819);
        func_800F8960(0x483);
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
L980:
    row_pad();
    return;
}
