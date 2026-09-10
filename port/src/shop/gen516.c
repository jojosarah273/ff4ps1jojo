/* FF4 source-port — interpreted module for shop_rows_c4a0_prep_xa_x8_windows.
 * Ground truth: src/shop_rows_c4a0_prep_xa_x8_windows.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void shop_rows_c4a0_prep_xa_x8_windows(void)
{
    /* shop rows: 8016C4A0 prep, 0xA/0x8 windows, 0x2703 text; loops
       L169FB0 (7594/8 cells) and L169FC8 (67FC/5B8C(0x202)). */
    shop_memory_x48_x50_windows_x7d27();
    wnd_open_cur();
    tail_cur();
    latch(0x15);
    cell_put(2);
    sep();
    tail(0xA);
L169fb0:
    for (;;) {
        cell_fmt2(0xA);
        latch(0x20);
        cell_put(8);
    L169fc8:
        for (;;) {
            cell_push_c8_b4o();
            cell_draw(0x2703);
            row_prep(0x20);
            sep_a();
            cell_pos_fwd(0x20);
            sep();
            row_prep_close();
            cell_step();
            poll_pair(8);
            if (poll_go(0x202) != 0)
                continue;
            break;
        }
        key_page(0xA);
        row_page(0xA);
        io_poll_cur();
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
