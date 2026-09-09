/* FF4 source-port — interpreted module for func_80142E90.
 * Ground truth: src/func_80142E90.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80142E90(void)
{
L42e98:
    for (;;) {
        func_80143D64();
        cell_draw_cur();
        func_80143D14();
        cell_draw_cur();
        cell_step();
        if (cell_flags_cmp(cell_state_of()) == 0)
            continue;
        break;
    }
    sep();
    tail(4);
    wnd_open_cur();
    tail(0x40);
    txt_set(0x6CC0);
    if (gate(2) != 0)
        goto L42F40;
    latch(8);
    goto L42F48;
L42F40:
    latch(0xF8);
L42F48:
    cell_put(2);
    txt_set_cur();
    if (gate(2) != 0)
        goto L42F88;
    page_open_cur();
    tail_cur();
    func_8014323C();
    return;
L42F88:
    txt_set(0x34C4);
    if (gate(0x80) != 0)
        goto L430C4;
    sep();
    txt_set(0x34C5);
    cell_put(0xC);
L42fd0:
    for (;;) {
        cell_state(0xC);
        row_arm2_cur();
        if (cell_flags_zero50(0x101) != 0)
            goto L4309C;
        txt_cell(0x29C5);
        io_poll(0xFF);
        if (io_just() != 0)
            goto L4309C;
        row_sel_cell_cur();
        cell_push_c8_d58();
        sep_a();
        row_open_w(0x18);
        cell_poke0(cell_state(2));
        cell_put_cur();
        cell_push_c8_d58();
        sep_b();
        cell_pos_back(8);
        cell_put(1);
        func_8014323C();
    L4309C:
        cell_step();
        poll_t(5);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
L430C4:
    sep();
    txt_set(0x34C5);
    cell_put(0xC);
L430f4:
    for (;;) {
        cell_state(0xC);
        row_arm2_cur();
        if (cell_flags_zero50(0x101) != 0)
            goto L431B8;
        txt_cell(0x29C5);
        io_poll(0xFF);
        if (io_just() != 0)
            goto L431B8;
        row_sel_cell_cur();
        cell_push_c8_d58();
        sep_a();
        cell_poke0(cell_state(2));
        cell_put_cur();
        cell_push_c8_d58();
        sep_b();
        cell_pos_back(8);
        cell_put(1);
        func_8014323C();
    L431B8:
        cell_step();
        poll_t(8);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
