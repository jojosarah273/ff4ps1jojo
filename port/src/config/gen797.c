/* FF4 source-port — interpreted module for ability_wrapper_x1a88_text_ea9c_a6.
 * Ground truth: src/ability_wrapper_x1a88_text_ea9c_a6.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void ability_wrapper_x1a88_text_ea9c_a6(void)
{
    /* ability wrapper: 0x1A88 text, 8016EA9C/80138A6C/80122114 rows
       + the 0x100 prelude; linear. */
    row_open2();
    row_open3();
    wnd_open(0x100);
    row_open();
    cell_cursor_read();
    latch(0x7E);
    cell_cursor_dec();
    row_pad();
    func_8016EA9C();
    cell_clear_bank(0x1A88);
    ability_status_wrapper_d3c_render();
    sep();
    stat_sync();
    fn_1x22114();
    cell_cursor_read();
    row_pad();
    return;
}
