/* FF4 source-port — interpreted module for func_801571DC.
 * Ground truth: src/func_801571DC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801571DC(void)
{
    wnd_open(0x2000);
    tail(0x80);
    sep();
    open_row(0xA9);
L21c:
    sep();
L240:
    for (;;) {
        txt_cell(0x1000);
        cell_pull_c8_bank(0x80);
        cell_step();
        step2();
        poll_t(0x40);
        if (io_just() != 0)
            break;
    }
    row_open();
    sep();
    cell_push_c8_sel(0x80);
    row_read(0x1F);
    if (sel(0x202) != 0)
        goto L354;
    row_page(0xA9);
    cell_dispatch(cell_state_of());
    draw_pad(3);
    sep();
    cell_pull_c8_bank(0x80);
    step2();
    cell_pull_c8_bank(0x80);
    step2();
    cell_pull_c8_bank(0x80);
    step2();
    cell_pull_c8_bank(0x80);
    goto L59c;
L354:
    draw_pad(3);
    cell_push_c8_sel(0x80);
    row_read(0xC0);
    if (sel(0x202) != 0)
        goto L59c;
    row_page(0xA9);
    row_sel_cell(0x40);
    latch_cur();
    cell_draw(0x29EB);
    row_prep(0x20);
    draw_pad(9);
    func_800F6764(0x80);
    func_80152C50();
    draw_pad(7);
    func_800F5520(cell_state(cell_bank_sel(0x80)));
    if (io_go() == 0)
        goto L44c;
    draw_pad(5);
    func_800F6764(0x80);
    func_800F8378(0x80);
    goto L46c;
L44c:
    draw_pad(5);
    func_800F6764(0x80);
    cell_pos_mask(0xFEFF);
    func_800F8378(0x80);
L46c:
    sep();
    row_prep_close();
    draw_pad(0x3B);
    latch(0x10);
    cell_pull_c8_bank(0x80);
    txt_set(0x29A2);
    row_read(0x20);
    if (sel(2) == 0) {
        latch(1);
        cell_pull_c8_bank(0x80);
    }
    draw_pad(0x2D);
    cell_push_c8_sel(0x80);
    draw_pad(0x41);
    cell_pull_c8_bank(0x80);
    draw_pad(0x2E);
    cell_push_c8_sel(0x80);
    draw_pad(0x42);
    cell_pull_c8_bank(0x80);
    draw_pad(4);
    cell_push_c8_sel(0x80);
    row_read(0x40);
    cell_pull_c8_bank(0x80);
    step2();
    cell_push_c8_sel(0x80);
    row_read(0x82);
    cell_pull_c8_bank(0x80);
    step2();
    cell_push_c8_sel(0x80);
    row_read(1);
    cell_pull_c8_bank(0x80);
    draw_pad(2);
    cell_push_c8_sel(0x80);
    if (io_press(cell_state(0x3583)) != 0)
        goto L59c;
    txt_draw(0x3583);
L59c:
    row_close();
    draw_pad(7);
    cell_push_c8_sel(0x80);
    draw_pad(8);
    cell_tick_or(cell_state(cell_bank_sel(0x80)));
    if (func_800F7918(0x202) == 0) {
        draw_pad(3);
        cell_push_c8_sel(0x80);
        cell_pull_c8_bank(0x80);
    }
    sep_a();
    row_page(0x80);
    row_open_w(0x80);
    cell_put(0x80);
    row_page(0x81);
    row_open_w0();
    cell_put(0x81);
    key_page(0xA9);
    row_page(0xA9);
    io_poll(5);
    if (io_just() == 0)
        goto L21c;
    wnd_open(0x2000);
    tail(0x80);
    sep();
    row_info(0xA9);
    for (;;) {
        cell_push_c8_sel(0x80);
        row_read(0x1F);
        io_poll(8);
        if (io_just() != 0)
            goto L748;
        io_poll(9);
        if (io_just() != 0)
            goto L748;
        io_poll(0x13);
        if (io_just() != 0)
            goto L748;
        io_poll(0x15);
        if (io_just() == 0)
            goto L760;
    L748:
        row_page(0xA9);
        cell_draw(0x3539);
        cell_step();
    L760:
        row_prep(0x20);
        sep_a();
        row_read2(0x80);
        cell_pos_fwd(0x80);
        cell_put_hi9(0x80);
        sep();
        row_prep_close();
        key_page(0xA9);
        row_page(0xA9);
        io_poll(5);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
