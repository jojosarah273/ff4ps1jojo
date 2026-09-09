/* FF4 source-port — interpreted module for func_80126550.
 * Ground truth: src/func_80126550.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80126550(void)
{
    row_open();
    row_sync();
    wnd_open(28672);
    draw_pad(54784);
    func_80126368();
}
