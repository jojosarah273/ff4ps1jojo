/* FF4 source-port — interpreted module for func_80138730.
 * Ground truth: src/func_80138730.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80138730(void)
{
    latch(1);
    txt_draw(6139);
    row_prep(32);
    row_sync2(2047);
    wnd_open(4096);
    draw_pad(62976);
    func_800F3D64(32382);
    row_prep_close();
}
