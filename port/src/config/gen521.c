/* FF4 source-port — interpreted module for battle_splash_x30_window_x7e_windo.
 * Ground truth: src/battle_splash_x30_window_x7e_windo.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_splash_x30_window_x7e_windo(void)
{
    /* battle splash: 0x30 window, 0x7E window, 801582D8 row; linear
       render + 0x30 icon set. */
    func_800F8210(0x30);
    row_prep_cur();
    row_open2();
    row_open3();
    cell_cursor_ret2();
    row_open();
    row_sync();
    cell_flags_set4();
    row_sync2_cur();
    row_prep_close();
    row_prep(0x10);
    wnd_open_cur();
    row_open();
    cell_cursor_read();
    latch(0x7E);
    cell_cursor_dec();
    row_pad();
    ability_plot_x3975_text_xa7_xa6_wi();
    row_prep(0x30);
    row_done();
    row_close();
    cell_cursor_adv2();
    cell_cursor_read();
    row_pad();
    return;
}
