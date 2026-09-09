/* FF4 source-port — interpreted module for func_80117CB8.
 * Ground truth: src/func_80117CB8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80117CB8(void)
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
        func_800F6D70(0xAD6);
        cell_draw(0x1000);
        if (io_press(cell_state(0xE4)) == 0)
            goto L117DC0;
        func_80117E64();
    L117DC0:
        func_80117DF8();
        step2();
        poll_t(5);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
