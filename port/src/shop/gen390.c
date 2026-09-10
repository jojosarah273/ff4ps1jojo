/* FF4 source-port — interpreted module for battle_cast_rows_x2_x4_windows_x76.
 * Ground truth: src/battle_cast_rows_x2_x4_windows_x76.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_cast_rows_x2_x4_windows_x76(void)
{
    /* battle cast rows: 0x2/0x4 windows, 0x7600 cells, 6658/89D4/
       5DD4(2) reads; loop L1664D0 on 5A90(0x230). */
    row_open();
    row_prep(0x20);
    cell_push9();
    cell_put_hi9(2);
    row_sync2(0x100);
    cell_put_hi9();
    sep();
L1664d0:
    for (;;) {
        row_read2();
        cell_stamp8_9_b(0x7600);
        cell_dec_cell(2);
        if (poll_go_cur() != 0)
            goto L166560;
        cell_push9();
        cell_put_hi9();
        poll_t(0x40);
        if (io_just() != 0)
            goto L166560;
        cell_sink8_9();
        cell_put_hi9(4);
        row_read2();
        cell_0xf5f70(cell_state(4));
        cell_put_hi9();
        cell_step();
        cell_step();
    L166560:
        step2();
        step2();
        step2();
        step2();
        poll_t(0x230);
        if (io_just() == 0)
            continue;
        break;
    }
    sep();
    row_prep_close();
    row_close();
    return;
}
