/* FF4 source-port — interpreted module for fn_1x4fec8.
 * Ground truth: src/fn_1x4fec8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x4fec8(void)
{
    draw_pad(0x80);
    cell_pull60(0xF469);
    draw_pad(0x1000);
    cell_pull60(0xF46B);
    cell_cursor_dec();
    io_poll(0x15);
    if (io_go() == 0)
        goto Lffc0;
    sep_b();
    cell_pos_back(0x15);
    row_open();
    row_prep(0x20);
    row_arm_s_cur();
    cell_pull9_hi(0xF469);
    sep();
    row_prep_close();
    row_close();
Lffc0:
    latch(0x7F);
    cell_put(6);
    latch(0xC);
    cell_put(2);
    row_close2();
    row_prep(0x20);
    row_sync2(0xDBE6);
    cell_put_hi9(8);
    row_sync2(0xF000);
    cell_put_hi9(4);
    cell_push60(0xF469);
L004c:
    for (;;) {
        row_sync();
        cell_push9_bank();
        cell_cursor_ret2();
        cell_cursor_ret2();
        cell_pos_mask(0x3FFF);
        row_arm_s_cur();
        cell_0xf68a0(4);
        cell_put_hi9();
        cell_cursor_adv2();
        cell_pos_mask(0x4000);
        cell_put_hi9(0xA);
        cell_cursor_adv2();
        cell_pos_mask(0x8000);
        if (cell_flags_pos0(0x202) != 0)
            goto L01a0;
        draw_pad_cur();
        for (;;) {
            cell_0xf6edc();
            rows_c3c_v0_spin_loop_l1503c0();
            cell_pull89_bank(8);
            cell_inc_cell();
            cell_inc_cell(0x10);
            poll_t_cur();
            if (io_just() != 0)
                break;
        }
        for (;;) {
            cell_0xf6edc();
            rows_c3c_v0_spin_loop_l1503c0();
            cell_pos_mask(0xFF);
            cell_pull89_bank(8);
            cell_inc_cell(0x20);
            poll_t_cur();
            if (io_just() != 0)
                break;
        }
        goto L0260;
    L01a0:
        draw_pad(0xE);
        for (;;) {
            cell_0xf6edc();
            rows_c3c_v0_spin_loop_l1503c0();
            cell_pull89_bank(8);
            cell_inc_cell();
            cell_inc_cell(0xFFFE);
            poll_t_cur();
            if (io_just() != 0)
                break;
        }
        draw_pad(0x1E);
        for (;;) {
            cell_0xf6edc();
            rows_c3c_v0_spin_loop_l1503c0();
            cell_pos_mask(0xFF);
            cell_pull89_bank(8);
            cell_inc_cell(0xE);
            poll_t_cur();
            if (io_just() != 0)
                break;
        }
    L0260:
        row_read2(8);
        sep_a();
        cell_pos_fwd(0x20);
        cell_put_hi9(8);
        row_done();
        poll_pair_cur();
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    sep();
    row_prep_close();
    sep();
    for (;;) {
        cell_draw(0xE9A6);
        cell_draw(0xEBA6);
        cell_step();
        poll_t(0x40);
        if (io_just() != 0)
            break;
    }
    draw_pad(0x1800);
    page_open(0xF46B);
    tail_cur();
    latch(0x7E);
    wnd_open(0xDBE6);
    func_800723F0();
    fn_1x50400();
    return;
}
