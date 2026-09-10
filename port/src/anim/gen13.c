/* FF4 source-port — interpreted module for fn_1x719c8.
 * Ground truth: src/fn_1x719c8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x719c8(void)
{
    row_open2();
    latch(0x15);
    cell_cursor_dec();
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
    shop_stat_block_called_by_the_e8_f();
    row_page(0xD7);
    if (gate(0x202) == 0)
        goto Le00;
    row_page(0xAD);
    io_poll(0x10);
    if (io_just() != 0)
        goto Laf0;
    latch(2);
    shop_rows_xc_xe_xad_windows_x4f1_x();
    return;
Laf0:
    latch(3);
    goto Lb60;
Lb00:
    latch_cur();
    shop_detail_wanted_x4c0_x4c7_texts();
    open_row(0xD);
    open_row(0xF);
    latch(0x70);
    cell_put(0xC);
    latch(0x70);
    sep_b();
    cell_tick_sub(cell_state(0xB5));
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
        cell_pull_c8(0x414);
        row_page(0xD);
        row_open_w0();
        row_read(1);
        if (sel(2) == 0) {
            latch(0x45);
            shop_picker_7();
        }
        txt_cell(0xBFB5);
        sep_a();
        cell_poke0(cell_state(0xE));
        cell_pull_c8(0x415);
        txt_cell(0xBFB6);
        sep_a();
        row_open_w(0x90);
        cell_pull_c8(0x416);
        txt_cell(0xBFB7);
        sep_a();
        row_open_w(0x1A);
        cell_pull_c8(0x417);
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
    cell_clear_bank(0x40F);
    latch(0x78);
    txt_draw(0x410);
    latch(0x78);
    txt_draw(0x411);
    latch(0x43);
    txt_draw(0x412);
    cell_clear_bank(0x413);
Le00:
    row_pad();
    return;
}
