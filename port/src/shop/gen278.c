/* FF4 source-port — interpreted module for fn_1x69614.
 * Ground truth: src/fn_1x69614.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x69614(void)
{
    wnd_open_cur();
    draw_pad_cur();
    fn_1x6baac();
    row_open2();
    sep();
    cell_cursor_dec();
    row_pad();
    wnd_open_cur();
    open_row(4);
    row_page(0x64);
    io_poll(1);
    if (io_just() != 0)
        goto L697AC;
    io_poll(2);
    if (io_just() == 0)
        goto L696C8;
    latch(0x40);
    cell_put(4);
L696C8:
    sep();
L696f0:
    for (;;) {
        cell_push_c8();
        cell_put_cur();
        draw_pad(8);
    L69708:
        for (;;) {
            cell_state_of();
            row_arm2_cur();
            row_sel_cell2_cur();
            cell_tick_dbl();
            row_read(1);
            poll_pair_cur();
            if (poll_go(0x202) != 0)
                continue;
            break;
        }
        cell_step();
        cell_step();
        poll_t(0x1000);
        if (io_just() != 0)
            goto L69940;
    }
L697AC:
    wnd_open(0x40);
    sep();
L697c0:
    for (;;) {
        cell_set50_from54();
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    sep();
L69828:
    for (;;) {
        cell_push_c8();
        cell_cursor_dec();
        row_read(0xF);
        if (sel(2) != 0)
            goto L69870;
    L69870:
        row_close2();
        row_read(0xF0);
        if (sel(2) != 0)
            goto L698F4;
    L698F4:
        cell_step();
        poll_t(0x800);
        if (io_just() == 0)
            continue;
        break;
    }
    row_pad();
L69940:
    return;
}
