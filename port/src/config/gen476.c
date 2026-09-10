/* FF4 source-port — interpreted module for fn_1x27718.
 * Ground truth: src/fn_1x27718.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x27718(void)
{
    row_open2();
    row_prep(32);
    wnd_open(42768);
    draw_pad(5376);
    row_sync2(83);
    battle_wait_just(3840);
    row_prep_close();
    row_pad();
    row_open2();
    row_open3();
    sep();
    cell_cursor_dec();
    row_pad();
    stat_sync();
    wnd_open(1536);
    row_open();
    cell_cursor_read();
    fn_1x1ea3c();
    cell_cursor_read();
    row_pad();
    page(65);
    label(4103);
    label(4105);
    cell_clear_bank(4160);
    cell_clear_bank(4224);
    cell_clear_bank(4288);
    cell_clear_bank(4352);
}
