/* FF4 source-port — interpreted module for config_status_row_xb5_window_x3303.
 * Ground truth: src/config_status_row_xb5_window_x3303.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void config_status_row_xb5_window_x3303(void)
{
    /* config status row: 0xB5 window + 0x3303 text; 5574 key ladder
       (5/8/C/10 codes) routes to 8015B8E4 (detail row), then the
       0xB3/0xB4 cursor cells with 0xA6 header and the 0x3302 tail. */
    open_row(0xB5);
    row_open();
    txt_cell(0x3303);
    io_poll(5);
    if (io_just() != 0)
        goto L15B77C;
    io_poll(8);
    if (io_just() != 0)
        goto L15B77C;
    io_poll(0xC);
    if (io_just() != 0)
        goto L15B77C;
    io_poll(0x10);
    if (io_just() == 0)
        goto L15B79C;
L15B77C:
    config_status_row_screen_key_codes();
    row_page(0xB3);
    if (gate(0x202) != 0)
        goto L15B844;
L15B79C:
    row_close();
    row_open();
    txt_cell(0x3303);
    row_sel_cell_cur();
    cell_push_c8();
    cell_put(0xB3);
    cell_push_c8();
    cell_put(0xB4);
    page(0xA6);
    txt_cell(0x2003);
    cell_tick_and(0xB3);
    if (sel(0x202) != 0)
        goto L15B844;
    txt_cell(0x2004);
    cell_tick_and(0xB4);
    if (sel(2) != 0)
        goto L15B854;
L15B844:
    latch(0x80);
    cell_put(0xB5);
L15B854:
    row_close();
    txt_cell(0x3302);
    cell_cursor_dec();
    row_read(0x7F);
    cell_tick_or(cell_state(0xB5));
    cell_draw(0x3302);
    row_close2();
    if (io_press(cell_state_of()) != 0)
        return;
    latch(1);
    cell_put(0xAA);
    return;
}
