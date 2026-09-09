/* FF4 source-port — interpreted module for func_80117FA8.
 * Ground truth: src/func_80117FA8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80117FA8(void)
{
    /* battle stat rows: 0xB3/0x3D windows, 0x1000/0x9D5 gates, 0x1001-
       0x1008 cells, 8011818C/801183D8/80118244 rows; loop L117FD0
       (4008(0x40) row read). */
    cell_step();
    tail(0xB3);
    wnd_open_cur();
    tail(0x3D);
L117fd0:
    for (;;) {
        page(0x3D);
        txt_cell(0x1000);
        if (gate(2) != 0)
            goto L118030;
        row_page(0x3D);
        sep_a();
        row_open_w(0x40);
        cell_put(0x3D);
        row_page(0x3E);
        row_open_w0();
        cell_put(0x3E);
    }
L118030:
    page(0xB3);
    txt_cell(0x9D5);
    poll_spin();
    if (gate_cur() != 0)
        goto L11816C;
    func_8011818C();
    cell_fmt2(0x3D);
    cell_push_c8_d58(0x1000);
    row_read(0xE0);
    page(0xB3);
    cell_tick_or(cell_state_of());
    cell_pull_c8(0x1000);
    row_read(0x1F);
    io_poll(0x11);
    if (io_just() == 0)
        goto L11811C;
    latch(0xB);
    cell_pull_c8(0x1001);
L11811C:
    cell_push_c8_d58(0x1009);
    cell_pull_c8(0x1007);
    cell_push_c8_d58(0x100A);
    cell_pull_c8(0x1008);
    cell_push_c8_d58(0x100D);
    cell_pull_c8(0x100B);
    cell_push_c8_d58(0x100E);
    cell_pull_c8(0x100C);
    func_801183D8();
    return;
L11816C:
    func_80118244();
    wnd_fx_7d();
    return;
}
