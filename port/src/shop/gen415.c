/* FF4 source-port — interpreted module for config_bars_x1f_x1d_x1e_windows_x2.
 * Ground truth: src/config_bars_x1f_x1d_x1e_windows_x2.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void config_bars_x1f_x1d_x1e_windows_x2(void)
{
    /* config bars: 0x1F/0x1D/0x1E windows, 0x29 window cells; loops
       L16FC1C (5DA0(0x1D)) and L16FCA8 (5DA0(0x1E)). */
    open_row(0x1F);
    if (io_go() != 0)
        goto L16FBA0;
    poll_pair(0x1F);
L16FBA0:
    cell_cursor_dec();
    cell_put(0x1D);
    cell_put(0x1E);
    row_prep(0x20);
    sep_a();
    cell_peek0(cell_state(0x29));
    row_prep_close();
    row_sync();
    row_page(0x1F);
L16fc1c:
    for (;;) {
        cell_pull_c8();
        step2();
        step2();
        poll_pair(0x1D);
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    row_done();
    row_prep(0x20);
    sep_a();
    cell_pos_fwd(0x40);
    row_prep_close();
    row_page(0x1F);
L16fca8:
    for (;;) {
        cell_pull_c8();
        step2();
        step2();
        poll_pair(0x1E);
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    row_close2();
    return;
}
