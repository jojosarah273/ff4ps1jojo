/* FF4 source-port — interpreted module for rows_x1d_window_x73_x75_windows_wi.
 * Ground truth: src/rows_x1d_window_x73_x75_windows_wi.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void rows_x1d_window_x73_x75_windows_wi(void)
{
    /* rows: 0x1D window, 0x73-0x75 windows with 7A40/7A68 triples;
       loop L1239B8 (5E48/5C64) with 5574(0x3C) gate. */
    open_row(0x1D);
    wnd_open(0x18);
    row_sel2(cell_state(0x73));
    cell_flags_repack2();
    row_sel2(cell_state(0x74));
    cell_flags_repack2();
    row_sel2(cell_state(0x75));
    cell_flags_repack2();
L1239b8:
    for (;;) {
        row_sel2(cell_state(0x1D));
        cell_flags_repack2();
        row_page(0x1D);
        io_poll(0x3C);
        if (io_go() == 0)
            goto L123A00;
        cell_pos_back(0x3C);
        cell_put(0x1D);
    L123A00:
        row_sel2(cell_state(0x73));
        cell_flags_repack2();
        row_sel2(cell_state(0x74));
        cell_flags_repack2();
        row_sel2(cell_state(0x75));
        cell_flags_repack2();
        cell_set50_from54();
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    return;
}
