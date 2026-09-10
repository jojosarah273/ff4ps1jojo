/* FF4 source-port — interpreted module for battle_rows_x1_x40_windows_d14_row.
 * Ground truth: src/battle_rows_x1_x40_windows_d14_row.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_rows_x1_x40_windows_d14_row(void)
{
    /* battle rows: 0x1/0x40 windows, 80094D14 row; loop L14C4EC on
       5958(0xC0). */
    txt_set_cur();
    row_read(0x40);
    if (sel(2) != 0)
        return;
    wnd_open_cur();
L14c4ec:
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
        poll_t(0xC0);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
