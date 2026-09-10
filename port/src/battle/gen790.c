/* FF4 source-port — interpreted module for battle_rows_x1802_x7992_x7b36_cell.
 * Ground truth: src/battle_rows_x1802_x7992_x7b36_cell.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_rows_x1802_x7992_x7b36_cell(void)
{
    /* battle rows: 0x1802/0x7992-0x7B36 cells; gate 5574(0x10);
       loop L14CF64 on 5958(0x8C). */
    cell_cursor_dec();
    txt_set(0x1802);
    io_poll(0x10);
    if (io_just() != 0)
        goto L14CFB4;
    row_close2();
    return;
L14CF54:
    row_close2();
    wnd_open_cur();
L14cf64:
    for (;;) {
        cell_draw(0x7992);
        cell_draw(0x7A1E);
        cell_draw(0x7AAA);
        cell_draw(0x7B36);
        poll_t(0x8C);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
L14CFB4:
    return;
}
