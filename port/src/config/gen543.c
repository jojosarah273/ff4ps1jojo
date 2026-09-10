/* FF4 source-port — interpreted module for battle_rows_x2_x3_x4_windows_x6cfd.
 * Ground truth: src/battle_rows_x2_x3_x4_windows_x6cfd.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_rows_x2_x3_x4_windows_x6cfd(void)
{
    /* battle rows: 0x2/0x3/0x4 windows, 0x6CFD cells; loop L13ED2C
       on 5DA0(0x4)/5B8C(0x202). */
    latch_cur();
    cell_put(4);
L13ed2c:
    for (;;) {
        cell_push_c8();
        cell_put(2);
        row_read(0x80);
        cell_put(3);
        row_page(2);
        row_read(0x3F);
        cell_set50_from40();
        cell_pull_c8(0x6CFD);
        step2();
        row_page(2);
        row_read(0x40);
        sep_a();
        row_open_w(4);
        cell_tick_or(cell_state(3));
        cell_pull_c8(0x6CFD);
        step2();
        cell_step();
        poll_pair(4);
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    return;
}
