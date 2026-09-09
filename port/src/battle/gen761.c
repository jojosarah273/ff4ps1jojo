/* FF4 source-port — interpreted module for func_80145EA4.
 * Ground truth: src/func_80145EA4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80145EA4(void)
{
    /* battle rows: 3C3C/3B04/3B9C + 0x1000 gates with spin loops
       (L145F60); closes via 960C/95A0 on the a1/v0 latch. */
    cell_state_of();
    cell_state_of();
    cell_peek_cur();
    if (cell_state(0x1000) == 0)
        goto L145F90;
    row_open();
    row_sync();
    sep();
    row_sync();
    if (io_press(1) != 0)
        goto L145F90;
    if (io_press(1) != 0)
        goto L145F90;
L145f60:
    for (;;) {
        if (io_press(1) != 0)
            break;
    }
L145F90:
    row_done();
    /* a1/v0 latch -> L145FF4 */
    row_done();
    row_close();
    return;
}
