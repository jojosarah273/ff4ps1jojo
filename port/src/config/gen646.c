/* FF4 source-port — interpreted module for func_801245B4.
 * Ground truth: src/func_801245B4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801245B4(void)
{
    /* rows: 5574(0x42) gate fills via 3D48/95A0; else 0xFF/95A0. */
    row_open();
    io_poll(0x42);
    if (io_go() != 0)
        goto L124664;
    sep_b();
    func_800F8058(0xF);
    row_sel_cell_cur();
    row_sel_cell2_cur();
    stat_sync();
    latch_cur();
    stat_sync();
    func_800F6C68();
    stat_sync();
    func_800F6C68();
    stat_sync();
    row_close();
    return;
L124664:
    stat_sync();
    latch(0xFF);
    row_close();
    return;
}
