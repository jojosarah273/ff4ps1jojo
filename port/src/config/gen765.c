/* FF4 source-port — interpreted module for fn_1x32490.
 * Ground truth: src/fn_1x32490.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x32490(void) {
    row_open2();
    row_open3();
    fn_1x6ea9c();
    fn_1x324f8();
    fn_1x22114();
    sep();
    cell_pull_c8_lo(0x1B49);
    stat_sync();
    cell_cursor_read();
    row_pad();;
}
