/* FF4 source-port — interpreted module for options_rows_xdf_xe1_xe3_windows_x.
 * Ground truth: src/options_rows_xdf_xe1_xe3_windows_x.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void options_rows_xdf_xe1_xe3_windows_x(void)
{
    /* options rows: 0xDF/0xE1/0xE3 windows, 0x289C cell,
       8015240C row; loop L15718C on 5A90(0x83). */
    row_open();
    cell_put(0xDF);
    latch(3);
    cell_put(0xE1);
    options_row_run();
    page(0xE3);
    draw_pad(0x80);
L15718c:
    for (;;) {
        cell_push_c8();
        cell_pull_c8(0x289C);
        cell_step();
        step2();
        poll_t(0x83);
        if (io_just() == 0)
            continue;
        break;
    }
    row_close();
    return;
}
