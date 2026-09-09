/* FF4 source-port — interpreted module for func_801093B8.
 * Ground truth: src/func_801093B8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801093B8(void)
{
    /* shop rows: 0x42 key gate routes the 3D48/95A0 fills. */
    io_poll(0x42);
    if (io_go() != 0)
        goto L109478;
    row_open();
    sep_b();
    cell_pos_back(0xF);
    row_sel_cell_cur();
    stat_sync();
    stat_sync();
    row_close();
    return;
L109478:
    stat_sync();
    latch(0xFF);
    stat_sync();
    return;
}
