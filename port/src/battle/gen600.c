/* FF4 source-port — interpreted module for battle_rows_x7a_x79_windows_xaaf_x.
 * Ground truth: src/battle_rows_x7a_x79_windows_xaaf_x.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_rows_x7a_x79_windows_xaaf_x(void)
{
    /* battle rows: 0x7A/0x79 windows, 0xAAF/0xE1D texts; loop L111E54
       on 6D70(0xAAF)+5A90 gates. */
    row_page(0x7A);
    row_read(3);
    if (sel(0x202) != 0)
        return;
    key_page(0x79);
    row_page(0x79);
    io_poll(6);
    if (io_just() == 0)
        goto L111E20;
    open_row(0x79);
L111E20:
    wnd_open_cur();
    row_page(0x79);
    row_sel_cell_cur();
L111e54:
    for (;;) {
        cell_push_c8_d58(0xAAF);
        cell_draw(0xE1D);
        cell_push_c8_d58(0xAB0);
        cell_draw(0xE1E);
        poll_t(0xE);
        if (io_just() != 0)
            return;
        poll_t(0xE);
        if (io_just() == 0)
            continue;
        draw_pad_cur();
    }
    return;
}
