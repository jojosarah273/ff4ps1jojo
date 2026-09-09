/* FF4 source-port — interpreted module for func_80142BCC.
 * Ground truth: src/func_80142BCC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80142BCC(void)
{
    /* battle rows: 0x1/0x2/0x4/0x6 windows with 4008(0x20) reads;
       loop L142C14 on 5958(0x40). */
    cell_clear_bank();
    sep();
    open_row_cur();
    latch(0x40);
    cell_put(2);
L142c14:
    for (;;) {
        row_page_cur();
        cell_draw_cur();
        sep_a();
        row_open_w(0x20);
        cell_put_cur();
        row_page(2);
        cell_draw_cur();
        sep_a();
        row_open_w(0x20);
        cell_put(2);
        row_page(4);
        cell_draw_cur();
        row_page(6);
        cell_draw_cur();
        cell_step();
        poll_t(0x40);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
