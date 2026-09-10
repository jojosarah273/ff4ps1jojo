/* FF4 source-port — interpreted module for func_80173008.
 * Ground truth: src/func_80173008.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80173008(void)
{
    row_open2();
    latch(0x15);
    cell_cursor_dec();
    row_pad();
    txt_set(0x1704);
    io_poll(5);
    if (io_just() != 0)
        goto L150;
    txt_set(0x1720);
    if (gate(2) != 0)
        goto L63c;
    txt_set(0x1701);
    if (io_press(cell_state(0x1723)) == 0)
        goto L63c;
    row_page(0xAD);
    io_poll(0x20);
    if (io_go() != 0)
        goto L0c8;
    row_read(0xF);
    if (sel(0x202) != 0)
        goto L63c;
L0c8:
    txt_set(0x1721);
    cell_put(0xC);
    txt_set(0x1722);
    cell_put(0xE);
    shop_stat_block_called_by_the_e8_f();
    row_page(0xD7);
    if (gate(0x202) == 0)
        goto L63c;
    row_page(0xAD);
    io_poll(0x10);
    if (io_just() != 0)
        goto L140;
    latch(5);
    shop_rows_xc_xe_xad_windows_x4f1_x();
    return;
L140:
    latch(3);
    goto L1b0;
L150:
    row_page(0xB8);
    shop_detail_wanted_x4c0_x4c7_texts();
    latch(0x70);
    cell_put(0xC);
    latch(0x70);
    sep_b();
    cell_tick_sub(cell_state(0xB8));
    cell_put(0xE);
    open_row(0xD);
    open_row(0xF);
    txt_set(0x1705);
L1b0:
    cell_put(7);
    txt_set(0x1704);
    io_poll(5);
    if (io_just() == 0)
        goto L240;
    txt_set(0x6FD);
    row_page(0x7A);
    cell_0xf4960(0xBE37);
    if (sel(0x202) != 0)
        goto L240;
    latch(0x10);
    goto L248;
L240:
    latch_cur();
L248:
    sep_a();
    cell_poke0(cell_state(7));
    draw_pad_cur();
L280:
    for (;;) {
        txt_cell(0xBFB4);
        sep_a();
        cell_poke0(cell_state(0xC));
        cell_pull_c8(0x458);
        row_page(0xD);
        row_open_w0();
        row_read(1);
        if (sel(2) == 0) {
            latch(0x56);
            shop_picker_7();
        }
        txt_cell(0xBFB5);
        sep_a();
        cell_poke0(cell_state(0xE));
        cell_pull_c8(0x459);
        txt_cell(0xBFB6);
        sep_a();
        row_open_w(0xD8);
        cell_pull_c8(0x45A);
        txt_cell(0xBFB7);
        sep_a();
        row_open_w(0x1C);
        cell_pull_c8(0x45B);
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
    txt_set(0x1287);
    row_read(0x20);
    if (sel(2) != 0)
        goto L63c;
    txt_set(0x1704);
    io_poll(5);
    if (io_just() != 0)
        goto L408;
    row_page(0xAD);
    io_poll(0x10);
    if (io_just() != 0)
        goto L418;
    goto L63c;
L408:
    txt_set(0x1705);
    goto L420;
L418:
    latch(3);
L420:
    cell_put(7);
    cell_push_c8(7);
    row_page(7);
    cell_put_cur();
    txt_set(0x1704);
    io_poll(5);
    if (io_just() == 0)
        goto L4fc;
    txt_set(0x6FD);
    row_page(0x7A);
    cell_0xf4960(0xBE37);
    if (sel(2) != 0)
        goto L4fc;
    latch(4);
    goto L504;
L4fc:
    latch_cur();
L504:
    sep_a();
    cell_poke0(cell_state(7));
    row_page(0xC);
    sep_b();
    cell_pos_back(8);
    cell_put(0xC);
    row_page(0xD);
    cell_pos_back();
    cell_put(0xD);
    row_page(0xC);
    sep_a();
    cell_poke0(cell_state(0xBB18));
    cell_pull_c8(0x454);
    row_page(0xD);
    row_open_w0();
    row_read(1);
    if (sel(2) == 0) {
        latch(0x55);
        shop_picker_7();
    }
    row_page(0xE);
    sep_a();
    cell_poke0(cell_state(0xBB19));
    cell_pull_c8(0x455);
    txt_cell(0xBB1A);
    cell_pull_c8(0x456);
    txt_cell(0xBB1B);
    cell_pull_c8(0x457);
L63c:
    row_pad();
    return;
}
