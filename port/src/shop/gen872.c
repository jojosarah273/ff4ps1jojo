/* FF4 source-port — interpreted module for func_80166FB8.
 * Ground truth: src/func_80166FB8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80166FB8(void)
{
    /* options rows: 0x2001/0x41 cell; 5574(0xF) gate picks the
       5CCC vs 8768 paths. */
    row_open();
    row_prep(0x20);
    sep();
    row_prep_close();
    txt_cell(0x2001);
    row_read(0x1F);
    io_poll(0xF);
    if (io_just() == 0)
        goto L167054;
    poll_spin();
L167054:
    row_close();
    cell_draw_cur();
    return;
}
