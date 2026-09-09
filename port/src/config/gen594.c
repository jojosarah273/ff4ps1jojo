/* FF4 source-port — interpreted module for func_80124B74.
 * Ground truth: src/func_80124B74.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80124B74(void)
{
    /* shop rows: 0x73/0x75 windows, 0x163 text, 0x1D window, 80124C64
       row; loops L124B9C (5958(7)) and L124BCC (78C4 cells). */
    tail(0x73);
    cell_put(0x75);
    latch(0xFF);
    page(0x41);
L124b9c:
    for (;;) {
        cell_draw(0x163);
        cell_step();
        poll_t(7);
        if (io_just() == 0)
            continue;
        break;
    }
    cell_fmt2(0x41);
L124bcc:
    for (;;) {
        func_80124C64();
        row_page(0x1D);
        cell_pull_c8(0x163);
        step2();
        row_page(0x73);
        cell_tick_or(cell_state(0x74));
        cell_tick_or(cell_state(0x75));
        if (ticker_reblend2(2) != 0)
            goto L124C54;
        poll_t(7);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
L124C54:
    return;
}
