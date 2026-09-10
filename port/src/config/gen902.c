/* FF4 source-port — interpreted module for fn_1x20db4.
 * Ground truth: src/fn_1x20db4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x20db4(void)
{
    fn_1x24158();
    cell_cursor_dec();
    row_open();
    wnd_open(54784);
    tail(41);
    wnd_open(28672);
    tail(53);
    latch(3);
    cell_put(195);
    open_row(52);
    row_close();
    row_close2();
}
