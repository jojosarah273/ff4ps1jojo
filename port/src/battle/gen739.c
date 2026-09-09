/* FF4 source-port — interpreted module for func_8010DF98.
 * Ground truth: src/func_8010DF98.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8010DF98(void)
{
    /* battle rows: 0x1000-0x1004/0x1008 cells, 5574(0xB) gate, 80117DF8
       row; loop L10DFA8 on 5958(0x140). */
    wnd_open_cur();
L10dfa8:
    for (;;) {
        txt_cell(0x1000);
        row_read(0x1F);
        io_poll(0xB);
        if (io_just() == 0)
            goto L10DFE8;
        page_paint(0x1003);
        latch(1);
        goto L10E000;
    L10DFE8:
        latch(0x80);
        cell_draw(0x1003);
        latch_cur();
    L10E000:
        cell_draw(0x1007);
        page_paint(0x1008);
        page_paint(0x1004);
        func_80117DF8();
        poll_t(0x140);
        if (io_just() == 0)
            continue;
        break;
    }
    func_8011EA5C();
    return;
}
