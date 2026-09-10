/* FF4 source-port — interpreted module for battle_rows_x1802_text_x6_window_e.
 * Ground truth: src/battle_rows_x1802_text_x6_window_e.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_rows_x1802_text_x6_window_e(void)
{
    /* battle rows: 0x1802 text, 0x6 window, 8013EB2C/8013EAFC/
       8013ED14 rows; loop L13EA9C on 5958(0x440). */
    txt_set(0x1802);
    row_read(0x1F);
    cell_cursor_dec();
    cell_push_c8();
    cell_put(6);
    cell_push_c8();
    battle_rows_x16_x2_x4_x5_windows_x();
    sep();
    cell_push_c8();
    row_open();
    fn_1x3eafc();
    battle_rows_x2_x3_x4_windows_x6cfd();
    row_close();
    cell_push_c8();
    if (gate(2) != 0)
        goto L13EA74;
    fn_1x3eafc();
    battle_rows_x2_x3_x4_windows_x6cfd();
L13EA74:
    row_close2();
    io_poll(0x10);
    if (io_just() == 0)
        goto L13EAEC;
    wnd_open_cur();
L13ea9c:
    for (;;) {
        txt_cell(0x707E);
        cell_draw_cur();
        cell_step();
        cell_step();
        poll_t(0x440);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
L13EAEC:
    return;
}
