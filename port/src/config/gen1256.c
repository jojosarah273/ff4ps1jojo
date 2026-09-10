/* FF4 source-port — interpreted module for fn_1x26480.
 * Ground truth: src/fn_1x26480.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x26480(void)
{
    row_open();
    row_sync();
    wnd_open(24576);
    draw_pad(46592);
    fn_1x26368();
}
