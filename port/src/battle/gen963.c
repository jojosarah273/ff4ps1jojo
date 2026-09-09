/* FF4 source-port — interpreted module for func_8014B044.
 * Ground truth: src/func_8014B044.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8014B044(void)
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
