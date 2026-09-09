/* FF4 source-port — interpreted module for func_8014C81C.
 * Ground truth: src/func_8014C81C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8014C81C(void)
{
    /* battle rows (twin with 0x2 window): loop L14C834 on 5958(0x40). */
    row_open();
    wnd_open_cur();
L14c834:
    for (;;) {
        txt_cell_cur();
        cell_put_cur();
        txt_cell_cur();
        cell_put(1);
        row_page(2);
        func_80094D14();
        row_page_cur();
        cell_draw_cur();
        row_page(1);
        cell_draw_cur();
        poll_t(0x40);
        if (io_just() == 0)
            continue;
        break;
    }
    row_close();
    return;
}
