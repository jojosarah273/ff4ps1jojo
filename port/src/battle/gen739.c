/* FF4 source-port — interpreted module for battle_rows_x1000_x1004_x1008_cell.
 * Ground truth: src/battle_rows_x1000_x1004_x1008_cell.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_rows_x1000_x1004_x1008_cell(void)
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
        rows_swap44_54();
        poll_t(0x140);
        if (io_just() == 0)
            continue;
        break;
    }
    battle_wndfx_run();
    return;
}
