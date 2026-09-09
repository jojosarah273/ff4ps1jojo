/* FF4 source-port — interpreted module for func_80171608.
 * Ground truth: src/func_80171608.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80171608(void)
{
    row_open2();
    latch(0x15);
    func_800F9200();
    row_pad();
    txt_set(0x170F);
    if (gate(2) != 0)
        goto L9b0;
    io_poll(2);
    if (io_just() != 0)
        goto L708;
    txt_set(0x1701);
    if (gate(0x202) != 0)
        goto L9b0;
    row_page(0xAD);
    io_poll(0x10);
    if (io_just() == 0)
        goto L9b0;
    txt_set(0x1704);
    io_poll(1);
    if (io_just() != 0)
        goto L730;
    txt_set(0x1710);
    cell_put(0xC);
    txt_set(0x1711);
    cell_put(0xE);
    func_80173ED8();
    row_page(0xD7);
    if (gate(0x202) == 0)
        goto L9b0;
    latch(3);
    goto L768;
L708:
    txt_set(0x1710);
    cell_put(0xC);
    txt_set(0x1711);
    cell_put(0xE);
    goto L750;
L730:
    latch(0x70);
    cell_put(0xC);
    latch(0x70);
    cell_put(0xE);
L750:
    open_row(0xD);
    open_row(0xF);
    txt_set(0x1705);
L768:
    cell_put(7);
    txt_set(0x1704);
    io_poll(1);
    if (io_just() == 0)
        goto L7f0;
    row_page(0xAB);
    if (gate(2) != 0)
        goto L7f8;
    row_page(0x7A);
    row_read(4);
    goto L7f8;
L7f0:
    latch_cur();
L7f8:
    sep_a();
    cell_poke0(cell_state(7));
    draw_pad_cur();
L830:
    for (;;) {
        txt_cell(0xC034);
        sep_a();
        cell_poke0(cell_state(0xC));
        func_800F8960(0x490);
        row_page(0xD);
        row_open_w0();
        row_read(1);
        if (sel(2) == 0) {
            latch(0x64);
            func_801714C4();
        }
        txt_cell(0xC035);
        sep_a();
        cell_poke0(cell_state(0xE));
        func_800F8960(0x491);
        txt_cell(0xC036);
        func_800F8960(0x492);
        txt_cell(0xC037);
        func_800F8960(0x493);
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
    io_poll(1);
    if (io_just() != 0) {
        row_page(0xA2);
        row_read(8);
        txt_draw(0x170E);
    }
    txt_set(0x170E);
    if (gate(2) != 0)
        goto L9b0;
    txt_set(0x49B);
    row_read(0xCF);
    txt_draw(0x49B);
    txt_set(0x49F);
    row_read(0xCF);
    txt_draw(0x49F);
L9b0:
    row_pad();
    return;
}
