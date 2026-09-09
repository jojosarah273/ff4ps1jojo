/* FF4 source-port — interpreted module for func_80138788.
 * Ground truth: src/func_80138788.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80138788(void)
{
    row_prep(32);
    row_sync2(2047);
    wnd_open(62976);
    draw_pad(4096);
    func_800F3D64(32382);
    row_prep_close();
    func_80135B54();
}
