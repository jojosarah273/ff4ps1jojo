/* FF4 source-port — interpreted module for func_80127668.
 * Ground truth: src/func_80127668.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80127668(void)
{
    /* rows: 0x46/0x45 windows, 0x1000/0x7FF/0x7000 values, 80135B54
       close; gate 5B8C(0x80). */
    poll_spin();
    if (poll_go(0x80) != 0)
        goto L127700;
    cell_put(0x46);
    open_row(0x45);
    row_open2();
    row_prep(0x20);
    page(0x45);
    draw_pad(0x1000);
    row_sync2(0x7FF);
    func_800F3D64(0x7000);
    row_prep_close();
    func_80135B54();
    row_pad();
    return;
L127700:
    func_80127718();
    return;
}
