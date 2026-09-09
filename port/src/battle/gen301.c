/* FF4 source-port — interpreted module for func_80118534.
 * Ground truth: src/func_80118534.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80118534(void)
{
    /* battle row pick: 0xB3/0x3D/0x3E/0x40/0x7 windows, 0x1000/
       0x1140/0x1143-0x1146/0x9D5 gates, 8011EA5C closes; loops
       L11855C (5A90(0x140)) and L1186C8 (5DA0(7)/5B8C(0x202)). */
    cell_step();
    tail(0xB3);
    draw_pad_cur();
    row_info(0x3D);
L11855c:
    for (;;) {
        cell_fmt2(0x3D);
        cell_push_c8_d58(0x1000);
        row_read(0x1F);
        if (io_press(cell_state_of()) != 0)
            goto L11860C;
        row_page(0x3D);
        sep_a();
        row_open_w(0x40);
        cell_put(0x3D);
        row_page(0x3E);
        row_open_w0();
        cell_put(0x3E);
        cell_fmt2(0x3D);
        poll_t(0x140);
        if (io_just() == 0)
            continue;
        break;
    }
    battle_wndfx_run();
    return;
L11860C:
    txt_cell(0x9D5);
    poll_spin();
    if (gate(0x80) != 0)
        goto L118728;
    row_prep(0x20);
    cell_put_hi9(0x40);
    row_sync2_cur();
    row_prep_close();
    latch(0x40);
    cell_put(7);
    page(0x3D);
    cell_fmt2(0x40);
L1186c8:
    for (;;) {
        txt_cell(0x1000);
        cell_pull_c8(0x1140);
        cell_step();
        step2();
        poll_pair(7);
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    page(0x40);
    page_paint(0x1143);
    page_paint(0x1144);
    page_paint(0x1145);
    page_paint(0x1146);
    return;
L118728:
    page(0x3D);
    page_paint(0x1000);
    battle_wndfx_run();
    return;
}
