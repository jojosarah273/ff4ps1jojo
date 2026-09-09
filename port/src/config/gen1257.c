/* FF4 source-port — interpreted module for func_80126418.
 * Ground truth: src/func_80126418.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80126418(void)
{
    row_open();
    row_sync();
    wnd_open(26624);
    draw_pad(42496);
    func_80126368();
}
