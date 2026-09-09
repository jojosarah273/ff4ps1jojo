/* FF4 source-port — interpreted module for func_80166CA8.
 * Ground truth: src/func_80166CA8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80166CA8(void)
{
    /* shop rows: 0x1D window + 4248(0x30/0x20) gates route the
       0xB8 window fills. */
    page_paint_cur();
    cell_push_c8_d58();
    row_read(0x30);
    if (sel(2) != 0)
        goto L166D98;
    row_read(0x20);
    if (sel(2) != 0)
        goto L166D88;
    txt_cell_cur();
    row_read(7);
    row_open();
    cell_push_c8();
    row_close();
    cell_draw_cur();
L166D88:
    latch(1);
    goto L166DA0;
L166D98:
    latch(2);
L166DA0:
    cell_put_cur();
    return;
}
