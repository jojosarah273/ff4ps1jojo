/* FF4 source-port — interpreted module for battle_rows_x1f_x34c3_x48_windows.
 * Ground truth: src/battle_rows_x1f_x34c3_x48_windows.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_rows_x1f_x34c3_x48_windows(void)
{
    /* battle rows: 0x1F/0x34C3/0x48 windows, 8014A488 row; loop
       L1436A4 on 5574(0xFF)/5958(8). */
    latch(0x1F);
    fn_1x4a488();
    sep();
L1436a4:
    for (;;) {
        txt_cell_cur();
        io_poll(0xFF);
        if (io_just() != 0)
            goto L143708;
        txt_draw(0x34C3);
        txt_draw(0x48);
        row_open();
        latch(0x1F);
        fn_1x4a488();
        row_close();
    L143708:
        cell_step();
        poll_t(8);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
