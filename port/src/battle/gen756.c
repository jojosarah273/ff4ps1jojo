/* FF4 source-port — interpreted module for func_8014C664.
 * Ground truth: src/func_8014C664.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8014C664(void)
{
    /* battle rows: loop L14C67C on 5958(0x40) with 80094D14 row. */
    row_open();
    wnd_open_cur();
L14c67c:
    for (;;) {
        txt_cell_cur();
        cell_put_cur();
        txt_cell_cur();
        cell_put(1);
        latch(1);
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
