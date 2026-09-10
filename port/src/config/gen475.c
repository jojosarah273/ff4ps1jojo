/* FF4 source-port — interpreted module for ability_banner_x1b_window_x2100_x1.
 * Ground truth: src/ability_banner_x1b_window_x2100_x1.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void ability_banner_x1b_window_x2100_x1(void)
{
    /* ability banner: 0x1B window, 0x2100/0x15/0x145 texts, 80139AFC
       tail; loops L133170 (6D70/5C64 pairs) and L1331EC. */
    row_open2();
    row_open3();
    latch(0x1B);
    cell_cursor_dec();
    row_pad();
    wnd_open(0x2100);
    row_open();
    cell_cursor_read();
    latch(0x80);
    cell_put(0x15);
    latch(0x10);
    txt_draw(0x145);
L133168:
    for (;;) {
        wnd_open(8);
    L133170:
        for (;;) {
            cell_push_c8_d58();
            cell_push_c8_d58(1);
            cell_set50_from54();
            if (poll_go(0x202) != 0)
                continue;
            break;
        }
        wnd_open(8);
    L1331EC:
        for (;;) {
            cell_push_c8_d58();
            step2();
            cell_set50_from54();
            if (poll_go(0x202) != 0)
                continue;
            break;
        }
        cell_dec_bank(0x145);
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    fn_1x39afc();
    cell_cursor_read();
    row_pad();
    return;
}
