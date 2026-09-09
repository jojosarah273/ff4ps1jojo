/* FF4 source-port — interpreted module for func_8016A0C8.
 * Ground truth: src/func_8016A0C8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8016A0C8(void)
{
    /* shop cells: 0x2 window, 0x8 gate; loops L16A124 (6764 cells)
       and L16A18C (66D8 cells) on 5C64/5B8C(0x202). */
    row_open2();
    cell_cursor_dec();
    row_pad();
    tail(2);
    draw_pad_cur();
L16a10c:
    for (;;) {
        row_prep(0x20);
        cell_cursor_ret2();
        wnd_open(8);
    L16a124:
        for (;;) {
            cell_push89_sel(2);
            step2();
            step2();
            cell_set50_from54();
            if (poll_go(0x202) != 0)
                continue;
            break;
        }
        wnd_open(8);
        cell_cursor_adv2();
        row_prep_close();
    L16a18c:
        for (;;) {
            cell_push_c8_sel(2);
            step2();
            cell_set50_from54();
            if (poll_go(0x202) != 0)
                continue;
            break;
        }
        poll_pair_cur();
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    row_pad();
    return;
}
