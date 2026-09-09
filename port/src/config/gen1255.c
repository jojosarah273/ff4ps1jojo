/* FF4 source-port — interpreted module for func_801264E8.
 * Ground truth: src/func_801264E8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801264E8(void)
{
    row_open();
    row_sync();
    wnd_open(30720);
    draw_pad(50688);
    func_80126368();
}
