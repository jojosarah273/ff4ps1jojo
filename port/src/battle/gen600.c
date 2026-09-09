/* FF4 source-port — interpreted module for func_80111DC8.
 * Ground truth: src/func_80111DC8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80111DC8(void)
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
        func_800F6D70(0xAAF);
        cell_draw(0xE1D);
        func_800F6D70(0xAB0);
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
