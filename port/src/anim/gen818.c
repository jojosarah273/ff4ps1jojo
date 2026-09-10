/* FF4 source-port — interpreted module for shop_rows_xcdb_xbd5_cells_values_l.
 * Ground truth: src/shop_rows_xcdb_xbd5_cells_values_l.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void shop_rows_xcdb_xbd5_cells_values_l(void)
{
    /* shop rows: 0xCDB/0xBD5 cells, 4264/7894 values; loop L1757BC
       on 5958(0x100). */
    row_prep(0x20);
    wnd_open_cur();
L1757bc:
    for (;;) {
        cell_sink8_9(0xCDB);
        cell_pos_mask();
        row_sel2_cur();
        cell_stamp8_9(0xBD5);
        cell_step();
        cell_step();
        poll_t(0x100);
        if (io_just() == 0)
            continue;
        break;
    }
    row_sync2_cur();
    row_prep_close();
    return;
}
