/* FF4 source-port — interpreted module for battle_rows_x6_x1440_x1441_x1033_x.
 * Ground truth: src/battle_rows_x6_x1440_x1441_x1033_x.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_rows_x6_x1440_x1441_x1033_x(void)
{
    /* battle rows: 0x6/0x1440/0x1441/0x1033/0x1034 texts/windows;
       loops L118F18 (5A90/53D4) and L118F78 (54D4(3C3C(6)) gates). */
    battle_tick_text();
    cell_put(6);
    draw_pad_cur();
L118f18:
    for (;;) {
        cell_push_c8_d58(0x1440);
        if (io_press(cell_state(6)) != 0)
            goto L118FF0;
        poll_t(0x60);
        if (io_just() == 0)
            continue;
        break;
    }
    wnd_open_cur();
L118f78:
    for (;;) {
        txt_cell(0x1033);
        if (io_press(cell_state(6)) != 0)
            goto L118FD0;
        rows_swap44_54();
        poll_t(0x140);
        if (io_just() == 0)
            continue;
        break;
    }
    battle_wndfx_run();
    return;
L118FD0:
    page_paint(0x1033);
    page_paint(0x1034);
    battle_wndfx_run();
    return;
L118FF0:
    latch_cur();
    cell_pull_c8(0x1440);
    cell_pull_c8(0x1441);
    battle_wndfx_run();
    return;
}
