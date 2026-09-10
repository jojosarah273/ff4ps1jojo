/* FF4 source-port — interpreted module for shop_banner_x15_window_xc8_x7a_xb9.
 * Ground truth: src/shop_banner_x15_window_xc8_x7a_xb9.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void shop_banner_x15_window_xc8_x7a_xb9(void)
{
    /* shop banner: 0x15 window, 0xC8/0x7A/0xB9 windows, 0x4C0 gate;
       loop L173730 on 5A90(0x20). */
    row_open2();
    latch(0x15);
    cell_cursor_dec();
    row_pad();
    row_page(0xC8);
    if (gate(0x202) != 0)
        goto L173768;
    row_page(0x7A);
    row_read(1);
    if (sel(0x202) != 0)
        goto L173768;
    row_page(0xB9);
    sep_b();
    cell_pos_back(0x10);
    io_poll(0x10);
    if (io_just() == 0)
        goto L1736EC;
    poll_spin();
L1736EC:
    row_read(0xC);
    draw_pad_cur();
L173730:
    for (;;) {
        txt_cell_cur();
        cell_pull_c8(0x4C0);
        cell_step();
        step2();
        poll_t(0x20);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
L173768:
    row_pad();
    return;
}
