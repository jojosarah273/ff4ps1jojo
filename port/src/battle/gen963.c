/* FF4 source-port — interpreted module for battle_rows_x3523_text_loop_l14b05.
 * Ground truth: src/battle_rows_x3523_text_loop_l14b05.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_rows_x3523_text_loop_l14b05(void)
{
    /* battle rows: 0x3523 text; loop L14B058 on 54D4(3B04(0x3523))/
       5958(8). */
    wnd_open_cur();
L14b058:
    for (;;) {
        cell_push_c8();
        if (io_press(cell_state(0x3523)) != 0)
            goto L14B0A8;
        cell_step();
        poll_t(8);
        if (io_just() == 0)
            continue;
        wnd_open_cur();
        return;
    }
L14B0A8:
    txt_draw(0x49);
    return;
}
