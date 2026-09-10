/* FF4 source-port — interpreted module for shop_rows_x3d_x18_x19_windows_cell.
 * Ground truth: src/shop_rows_x3d_x18_x19_windows_cell.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void shop_rows_x3d_x18_x19_windows_cell(void)
{
    /* shop rows: 0x3D/0x18/0x19 windows, 5024 cells + ADB/B1B texts;
       loop L11CCAC on 5A90(0x40). */
    draw_pad_cur();
L11ccac:
    for (;;) {
        page(0x3D);
        cell_push_c8();
        cell_put(0x18);
        open_row(0x19);
        row_prep(0x20);
        cell_pair_dbl2(cell_state(0x18));
        page(0x18);
        cell_push9_bank();
        cell_push9_bank();
        cell_push9_bank();
        cell_push9_bank();
        cell_stamp8_9_b(0xADB);
        cell_stamp8_9_b(0xADD);
        cell_stamp8_9_b(0xB1B);
        cell_stamp8_9_b(0xB1D);
        row_sync2_cur();
        row_prep_close();
        key_page(0x3D);
        poll_t(0x40);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
