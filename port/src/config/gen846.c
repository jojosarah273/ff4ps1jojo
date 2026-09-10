/* FF4 source-port — interpreted module for fn_1x20e9c.
 * Ground truth: src/fn_1x20e9c.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x20e9c(void)
{
    fn_1x24130();
    cell_cursor_dec();
    row_open();
    wnd_open(50688);
    tail(41);
    wnd_open(30720);
    tail(53);
    latch(2);
    cell_put(195);
    latch(32);
    cell_put(52);
    row_close();
    row_close2();
}
