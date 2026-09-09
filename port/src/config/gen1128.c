/* FF4 source-port — interpreted module for func_80126878.
 * Ground truth: src/func_80126878.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80126878(void)
{
    row_prep(32);
    row_sync2(255);
    wnd_open(41984);
    draw_pad(40960);
    func_800F3D64(32382);
    row_prep_close();
}
