/* FF4 source-port — interpreted module for func_80125130.
 * Ground truth: src/func_80125130.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80125130(void)
{
    row_open();
    row_page(0x1D);
    func_80124EAC();
    tail(0x22);
    cell_push_c8_lo(0x22);
    row_read(0x3F);
    if (sel(0x202) != 0)
        goto L5190;
    func_80125528();
    return;
L5190:
    cell_fmt2(0x41);
L51a4:
    for (;;) {
        if (io_press(cell_state_of()) != 0)
            goto L51ec;
        step2();
        step2();
    }
L51ec:
    cell_push_c8_d58(0x1A68);
    cell_cursor_dec();
    cell_put(0x45);
    row_sel_cell_cur();
    row_sel_cell2_cur();
    cell_poke0(cell_state(0x45));
    row_sel_cell_cur();
    row_sel_cell2_cur();
    row_open_w(0x80);
    cell_put(0x48);
    latch_cur();
    row_open_w0();
    cell_put(0x49);
    row_close2();
    cell_set50_from40();
    cell_set50_from40();
    cell_set50_from40();
    row_sel_cell_cur();
    row_sel_cell2_cur();
    cell_tick_or(cell_state(0xC1));
    cell_poke0(cell_state(0x49));
    cell_put(0x49);
    row_page(0x1E);
    io_poll(9);
    if (io_just() == 0)
        goto L52fc;
    wnd_open(6);
    goto L5304;
L52fc:
    page(0x41);
L5304:
    sep();
    stat_sync();
    row_page(0x1D);
    row_prep(0x20);
    row_arm_s_cur();
    row_arm_s2_cur();
    cell_pos_fwd(0x340);
    row_prep_close();
    latch(6);
    cell_put(0x45);
L5384:
    for (;;) {
        row_page(0x1F);
        sep_a();
        row_open_w0();
        cell_pull_c8();
        row_page(0x20);
        sep_a();
        row_open_w0();
        cell_pull_c8();
        tail(1);
        row_page(0x1E);
        row_sel_cell_cur();
        cell_put(0x43);
        row_sel_cell_cur();
        row_sel_cell2_cur();
        cell_poke0(cell_state(0x43));
        cell_poke0(cell_state(0xE9));
        func_801224D0();
        latch_cur();
        stat_sync();
        page(0xE9);
        row_prep(0x20);
        sep_a();
        cell_peek0(cell_state(0x48));
        cell_stamp8_9_b(2);
        row_prep_close();
        step2();
        step2();
        step2();
        step2();
        cell_step();
        poll_pair(0x45);
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    func_801255E8();
    row_close();
    return;
}
