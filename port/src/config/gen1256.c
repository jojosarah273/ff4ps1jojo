/* FF4 source-port — interpreted module for func_80126480.
 * Ground truth: src/func_80126480.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80126480(void)
{
    row_open();
    row_sync();
    wnd_open(24576);
    draw_pad(46592);
    func_80126368();
}
