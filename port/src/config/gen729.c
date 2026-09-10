/* FF4 source-port — interpreted module for rows_x100_x1c_x41_windows_f0_x89_c.
 * Ground truth: src/rows_x100_x1c_x41_windows_f0_x89_c.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void rows_x100_x1c_x41_windows_f0_x89_c(void)
{
    /* rows: 0x100/0x1C/0x41 windows, 86F0(0x89) cell; loop L126740
       on 5C64(0x202). */
    row_open();
    row_open3();
    wnd_open(0x100);
    row_open();
    cell_cursor_read();
    row_prep(0x20);
    row_sync2_cur();
    draw_pad(0x1C);
    page(0x41);
L126740:
    for (;;) {
        cell_0xf86f0(0x89);
        poll_pair_cur();
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    row_prep_close();
    cell_cursor_read();
    row_close();
    return;
}
