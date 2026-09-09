/* FF4 source-port — interpreted module for func_801482E8.
 * Ground truth: src/func_801482E8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801482E8(void)
{
    txt_set(0xF107);
    if (gate(2) != 0)
        goto L86c8;
    func_80148D04();
    page_paint2(0xF108);
    txt_set(0xF108);
    io_poll(0x2A);
    if (io_just() == 0)
        goto L8348;
    cell_clear_bank(0xF107);
    return;
L8348:
    draw_pad_cur();
    wnd_open_cur();
    tail(0x10);
L8360:
    for (;;) {
        open_row(0x14);
        cell_push_c8_d58(0xF0FA);
        if (gate(2) != 0)
            goto L83a0;
        io_poll(0xFF);
        if (io_just() == 0)
            goto L8670;
        key_page(0x14);
    L83a0:
        cell_push_c8_d58(0xF0D3);
        sep_b();
        cell_pos_back(0x10);
        cell_put(0x12);
        row_open();
        cell_push_c8_d58(0xF0E0);
        sep_b();
        cell_pos_back(8);
        cell_put(0xE);
        row_sync();
        draw_pad_cur();
        txt_set(0xF108);
        row_page(0x14);
        if (gate(0x202) != 0)
            goto L849c;
        for (;;) {
            cell_push_c8();
            sep_a();
            cell_poke0(cell_state(0xE));
            cell_pull_c8(0x13);
            step2();
            poll_t(5);
            if (io_just() != 0)
                break;
        }
        goto L8508;
    L849c:
        txt_set(0xF108);
        cell_push_c8();
        sep_a();
        cell_poke0(cell_state(0xE));
        cell_put(0x13);
        cell_put(0x14);
        cell_put(0x15);
        cell_put(0x16);
        cell_put(0x17);
    L8508:
        latch(5);
        cell_put(0xE);
        row_done();
        row_close();
        txt_set(0x6CC0);
        if (gate(2) == 0) {
            row_page(0x12);
            sep_b();
            cell_pos_back(0x20);
            cell_put(0x12);
        }
        for (;;) {
            row_page(0x12);
            cell_draw(0x340);
            sep_a();
            row_open_w(8);
            cell_put(0x12);
            cell_step();
            row_open();
            row_page(0xE);
            poll_spin();
            func_800F6A78(0x13);
            row_close();
            cell_draw(0x340);
            cell_step();
            row_open();
            page(0x10);
            cell_step();
            tail(0x10);
            txt_cell(0xDBE6);
            row_close();
            cell_draw(0x340);
            cell_step();
            cell_push_c8_d58(0xF0ED);
            cell_draw(0x340);
            cell_step();
            poll_pair(0xE);
            if (poll_go(0x202) != 0)
                continue;
            break;
        }
        goto L86a8;
    L8670:
        row_prep(0x20);
        row_read2(0x10);
        sep_a();
        cell_pos_fwd(5);
        cell_put_hi9(0x10);
        sep();
        row_prep_close();
    L86a8:
        step2();
        poll_t(0xD);
        if (io_just() == 0)
            continue;
        break;
    }
L86c8:
    return;
}
