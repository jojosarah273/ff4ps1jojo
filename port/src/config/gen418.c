/* FF4 source-port — interpreted module for options_screen_x321b_x321c_texts_c.
 * Ground truth: src/options_screen_x321b_x321c_texts_c.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void options_screen_x321b_x321c_texts_c(void)
{
    /* options screen: 0x321B/0x321C texts, 80150C38 row; loop L15CF60
       (5958(0xC0)) with the 5574(0xCE)/53D4 and 53C0 ladders. */
    sep();
L15cf60:
    for (;;) {
        txt_cell(0x321B);
        io_poll(0xCE);
        if (io_just() != 0)
            goto L15CFC8;
        step2();
        cell_step();
        cell_step();
        cell_step();
        cell_step();
        poll_t(0xC0);
        if (io_just() == 0)
            continue;
        break;
    }
    goto L15D0A8;
L15CFC8:
    txt_cell(0x321C);
    io_poll(1);
    if (io_go() == 0)
        goto L15D0A8;
    sep_b();
    txt_cell(0x321C);
    cell_cursor_dec();
    row_open();
    cell_pos_back(1);
    cell_draw(0x321C);
    if (io_just() == 0)
        goto L15D060;
    page_paint(0x321C);
    page_paint(0x321B);
    txt_cell(0x321A);
    cell_draw_cur();
L15D060:
    cell_put(1);
    latch(6);
    gpu_driver_run_b();
    row_close();
    row_close2();
    cell_draw(0x321C);
    return;
L15D0A8:
    return;
}
