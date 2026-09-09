/* FF4 source-port — interpreted module for func_801163E8.
 * Ground truth: src/func_801163E8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801163E8(void)
{
    open_row(0x3E);
    row_sel_cell_cur();
    row_sel_cell2_cur();
    row_sel2(cell_state(0x3E));
    cell_put(0x3D);
    page(0x3D);
    cell_push_c8();
    txt_draw(0x9D3);
    cell_push_c8();
    txt_draw(0x9D4);
    latch(0xF);
    cell_put(0x80);
L6460:
    for (;;) {
        draw_pad_cur();
        latch(1);
        txt_draw(0xA15);
        page_open(0x9D3);
        cell_push_c8();
        io_poll(0xFF);
        if (io_just() == 0)
            goto L653c;
        txt_set(0x1703);
        open_row(0x3D);
        cell_tick_half();
        cell_flags_repack();
        cell_word_half_s(cell_state(0x3D));
        cell_tick_half();
        cell_flags_repack();
        cell_word_half_s(cell_state(0x3D));
        cell_put(0x3E);
        page(0x3D);
        txt_cell(0x1000);
        if (gate(0x202) != 0)
            goto L6524;
        func_80175E08();
    L6524:
        latch(1);
        cell_put(0xE0);
        return;
    L653c:
        io_poll(0xEB);
        if (io_just() == 0)
            goto L65d8;
        cell_step();
        cell_push_c8();
        txt_draw(0xA15);
        cell_step();
        cell_push_c8();
        cell_put(7);
        cell_step();
        for (;;) {
            cell_push_c8();
            cell_pull_c8(0x9D5);
            cell_step();
            step2();
            poll_pair(7);
            if (poll_go(0x202) != 0)
                continue;
            break;
        }
        goto L66c8;
    L65d8:
        io_poll(0xDB);
        if (io_go() == 0)
            goto L66b0;
        io_poll(0xE2);
        if (io_just() != 0)
            goto L6668;
        io_poll(0xFE);
        if (io_just() == 0)
            goto L668c;
        cell_pull_c8(0x9D5);
        cell_step();
        step2();
        cell_push_c8();
        cell_pull_c8(0x9D5);
        cell_step();
        step2();
        cell_push_c8();
    L6668:
        cell_pull_c8(0x9D5);
        cell_step();
        step2();
        cell_push_c8();
    L668c:
        cell_pull_c8(0x9D5);
        cell_step();
        step2();
        cell_push_c8();
    L66b0:
        cell_pull_c8(0x9D5);
        cell_step();
        step2();
    L66c8:
        label(0x9D3);
        latch(0xFF);
        cell_pull_c8(0x9D5);
        for (;;) {
            if (func_80116720() != 0)
                return;
            cell_dec_bank(0xA15);
            if (poll_go(0x202) != 0)
                continue;
            break;
        }
    }
}
