/* FF4 source-port — interpreted module for battle_rows_xe4_window_x1100_x1180.
 * Ground truth: src/battle_rows_xe4_window_x1100_x1180.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_rows_xe4_window_x1100_x1180(void)
{
    /* battle rows: 0xE4 window + 0x1100/0x1180/0x10C0 gates, 0xAD6/
       0x1000 texts; loops L117CF8/L117D30 (5958 pacing) and L117D70
       (5A90(5) gate with 80117E64/80117DF8 rows). */
    row_page(0xE4);
    row_read(0x7F);
    cell_put(0xE4);
    io_poll(0xB);
    if (io_just() == 0)
        goto L117D60;
    wnd_open_cur();
L117cf8:
    for (;;) {
        txt_cell(0x1100);
        cell_draw(0x1180);
        cell_step();
        poll_t(0x40);
        if (io_just() == 0)
            continue;
        break;
    }
    wnd_open_cur();
L117d30:
    for (;;) {
        txt_cell(0x1200);
        cell_draw(0x10C0);
        cell_step();
        poll_t(0x80);
        if (io_just() == 0)
            continue;
        break;
    }
L117D60:
    wnd_open_cur();
    draw_pad_cur();
L117d70:
    for (;;) {
        cell_push_c8_d58(0xAD6);
        cell_draw(0x1000);
        if (io_press(cell_state(0xE4)) == 0)
            goto L117DC0;
        fn_1x17e64();
    L117DC0:
        rows_swap44_54();
        step2();
        poll_t(5);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
