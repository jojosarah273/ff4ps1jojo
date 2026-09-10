/* FF4 source-port — interpreted module for func_801721E8.
 * Ground truth: src/func_801721E8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801721E8(void)
{
    /* shop sell/detail screen: 1730/1731 headers, buy rows 12/14 with
       per-row gate reads; 80173ED8 draws the stat block, 801714C4 the
       quantity picker; scroll loop L172398 spins on 5A90(0x10). */
    row_open2();
    latch(0x15);
    cell_cursor_dec();
    row_pad();
    txt_set(0x1730);
    if (gate(2) != 0)
        goto L1724B8;
    txt_set(0x1701);
    if (gate(0x202) != 0)
        goto L1724B8;
    txt_set(0x1704);
    io_poll(7);
    if (io_just() != 0)
        goto L1722B0;
    txt_set(0x1731);
    cell_put(0xC);
    txt_set(0x1732);
    cell_put(0xE);
    func_80173ED8();
    row_page(0xD7);
    if (gate(0x202) == 0)
        goto L1724B8;
    latch_cur();
    goto L1722E8;
L1722B0:
    open_row(0xD);
    open_row(0xF);
    latch(0x70);
    cell_put(0xC);
    latch(0x70);
    cell_put(0xE);
    txt_set(0x1705);
L1722E8:
    cell_put(7);
    txt_set(0x1704);
    io_poll(7);
    if (io_just() == 0)
        goto L172358;
    row_page(0x7A);
    row_read(4);
    goto L172360;
L172358:
    latch_cur();
L172360:
    sep_a();
    cell_poke0(cell_state(7));
    draw_pad_cur();
L172398:
    for (;;) {
        txt_cell_cur();
        sep_a();
        cell_poke0(cell_state(0xC));
        cell_pull_c8(0x480);
        row_page(0xD);
        row_open_w0();
        row_read(1);
        if (sel(2) != 0)
            goto L1723F8;
        latch(0x60);
        shop_picker_7();
    L1723F8:
        txt_cell_cur();
        sep_a();
        cell_poke0(cell_state(0xE));
        cell_pull_c8(0x481);
        txt_cell_cur();
        sep_a();
        row_open_w(0x60);
        cell_pull_c8(0x482);
        txt_cell_cur();
        sep_a();
        row_open_w(0x18);
        cell_pull_c8(0x483);
        cell_step();
        cell_step();
        cell_step();
        cell_step();
        step2();
        step2();
        step2();
        step2();
        poll_t(0x10);
        if (io_just() == 0)
            continue;
        break;
    }
L1724B8:
    row_pad();
    return;
}
