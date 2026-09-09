/* FF4 source-port — interpreted module for func_80132130.
 * Ground truth: src/func_80132130.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80132130(void)
{
    row_prep(32);
    row_sync2(599);
    wnd_open(41472);
    draw_pad(768);
    func_800F3D64(32382);
    row_prep_close();
}
