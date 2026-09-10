/* FF4 source-port — interpreted module for fn_1x26550.
 * Ground truth: src/fn_1x26550.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x26550(void)
{
    row_open();
    row_sync();
    wnd_open(28672);
    draw_pad(54784);
    fn_1x26368();
}
