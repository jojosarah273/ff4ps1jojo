/* FF4 source-port — interpreted module for func_80171194.
 * Ground truth: src/func_80171194.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80171194(void)
{
    row_page(0xD3);
    if (gate(2) == 0)
        return;
    row_page(0xAD);
    io_poll(0x10);
    if (io_just() == 0)
        return;
    txt_set(0x1704);
    if (gate(2) == 0)
        return;
    row_open2();
    latch(0x15);
    cell_cursor_dec();
    row_pad();
    txt_set(0x1703);
    open_row(0x4A);
    cell_tick_half();
    cell_flags_repack();
    cell_word_half_s(cell_state(0x4A));
    cell_tick_half();
    cell_flags_repack();
    cell_word_half_s(cell_state(0x4A));
    cell_put(0x4B);
    page(0x4A);
    txt_cell(0x1001);
    row_read(0x1F);
    txt_cell(0xB2FA);
    row_sel_cell_cur();
    txt_draw(0x710);
    txt_set(0x1705);
    cell_put(7);
    open_row(6);
    row_page(0xAB);
    if (gate(2) != 0)
        goto L1374;
    row_page(0x7B);
    row_read(8);
    sep_a();
    cell_poke0(cell_state(7));
    cell_put(7);
    row_page(0xAB);
    row_read(1);
    if (sel(0x202) != 0)
        goto L1374;
    row_page(0x7B);
    row_read(8);
    cell_put(6);
L1374:
    row_page(7);
    draw_pad_cur();
L139c:
    for (;;) {
        cell_push_c8_d58(0xC0B4);
        cell_pull_c8(0x444);
        step2();
        cell_push_c8_d58(0xC0B4);
        sep_b();
        cell_tick_sub(cell_state(6));
        cell_pull_c8(0x444);
        step2();
        txt_cell(0xC0C4);
        cell_pull_c8(0x444);
        cell_step();
        step2();
        txt_cell(0xC0C4);
        row_read(0xF1);
        sep_a();
        cell_poke0(cell_state(0x710));
        cell_pull_c8(0x444);
        cell_step();
        step2();
        poll_t(0x10);
        if (io_just() != 0)
            break;
    }
    row_page(0xA2);
    row_read(8);
    if (sel(2) == 0) {
        txt_set(0x44F);
        row_read(0xCF);
        txt_draw(0x44F);
        txt_set(0x453);
        row_read(0xCF);
        txt_draw(0x453);
    }
    row_pad();
    return;
}
