/* FF4 source-port — interpreted module for func_8014D14C.
 * Ground truth: src/func_8014D14C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8014D14C(void)
{
    /* battle item-count: 0x26/0x28/0x2A windows, 4FAC(0x101) gate rows,
       80072720 prep; loops L14D1B4 (5DA0(0x28)/5B8C(0x202)), L14D248
       (row cells) and L14D2CC (alt scroll). */
    sep_a();
    row_open_w(0x28);
    cell_put(0x26);
    latch(0x10);
    cell_put(0x28);
    func_80072720();
    txt_set_cur();
    if (gate(0x202) != 0)
        goto L14D2B8;
    txt_set_cur();
    cell_put(0x26);
    draw_pad_cur();
L14d1b4:
    for (;;) {
        cell_state(0x26);
        row_arm2_cur();
        if (func_800F4FAC(0x101) != 0)
            goto L14D290;
        row_sync();
        latch_cur();
        cell_put(0x28);
        page(0x2A);
    L14d248:
        for (;;) {
            cell_push_c8();
            cell_pull_c8();
            cell_pull_c8();
            cell_step();
            step2();
            poll_pair(0x28);
            if (poll_go(0x202) != 0)
                continue;
            break;
        }
        row_done();
    L14D290:
        step2();
        poll_t(5);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
L14D2B8:
    draw_pad_cur();
    page(0x2A);
L14d2cc:
    for (;;) {
        cell_push_c8();
        cell_pull_c8();
        cell_pull_c8();
        cell_step();
        step2();
        poll_t(0x10);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
