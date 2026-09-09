/* FF4 source-port — interpreted module for func_8012FBB0.
 * Ground truth: src/func_8012FBB0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8012FBB0(void)
{
    cell_cursor_dec();
    row_open();
    io_poll(0xE);
    if (io_go() == 0)
        goto Lfc70;
    io_poll(0x1C);
    if (io_go() != 0)
        goto Lfc70;
    txt_draw(0x1A87);
    row_sync();
    func_80130BC8();
    row_done();
    txt_draw(0x1BC4);
    cell_clear_bank(0x1BC5);
    row_page(0xE8);
    cell_cur_save54_b();
    row_prep(0x20);
    cell_sink8_9(0xB);
    cell_flags_cmp_pos(cell_state(0x1BC4));
    row_prep_close();
    if (io_go() != 0)
        goto Lfcb0;
Lfc70:
    txt_set(0x1BC8);
    if (gate(0x202) != 0)
        goto Lfcb0;
Lfc88:
    row_page(0x34);
    goto Lfd70;
Lfcb0:
    txt_set(0x1A87);
    io_poll(0x12);
    if (io_just() != 0)
        goto Lfd68;
    txt_set(0x1A86);
    row_read(0x28);
    if (sel(2) != 0)
        goto Lfd68;
    row_read(0x20);
    if (sel(2) != 0)
        goto Lfd28;
    txt_set(0x1A87);
    io_poll(0x19);
    if (io_just() != 0)
        goto Lfd68;
Lfd28:
    txt_set(0x1A86);
    row_read(8);
    if (sel(2) != 0)
        goto Lfc88;
    txt_set(0x1A87);
    io_poll(0x1A);
    if (io_just() == 0)
        goto Lfc88;
Lfd68:
    row_page(0x34);
Lfd70:
    cell_put(0xDB);
    row_close();
    row_close2();
    cell_cursor_dec();
    row_prep(0x20);
    sep_a();
    cell_peek0(cell_state(0x29));
    row_prep_close();
    row_close2();
    row_open2();
    row_open();
    row_sync();
    stat_sync();
    latch_cur();
    stat_sync();
    row_prep(0x20);
    row_arm_s_cur();
    cell_put_hi9(0x45);
    row_arm_s_cur();
    row_arm_s2_cur();
    cell_peek0(cell_state(0x45));
    cell_pos_fwd(0x8900);
    row_prep_close();
    latch(0xF);
    cell_cursor_dec();
    row_pad();
    cell_push_c8_d58();
    step2();
    cell_pull_c8_off();
    latch(0xFF);
    cell_pull_c8_off();
    cell_step();
    row_page(0xDB);
    cell_pull_c8_off();
    cell_pull_c8_off();
    cell_step();
    latch(5);
    cell_put(0x45);
    for (;;) {
        cell_push_c8_d58();
        func_801245B4();
        cell_pull_c8_off();
        stat_sync();
        cell_pull_c8_off();
        cell_step();
        row_page(0xDB);
        cell_pull_c8_off();
        cell_pull_c8_off();
        cell_step();
        step2();
        poll_pair(0x45);
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    row_done();
    row_close();
    row_pad();
    return;
}
