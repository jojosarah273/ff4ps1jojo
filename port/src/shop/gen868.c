/* FF4 source-port — interpreted module for shop_rows_x2000_x2040_cells_via_dc.
 * Ground truth: src/shop_rows_x2000_x2040_cells_via_dc.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void shop_rows_x2000_x2040_cells_via_dc(void)
{
    /* shop rows: 0x2000/0x2040 cells via 9140/87DC; loop L16BF0C
       on 5958(0x40). */
    sep();
    latch(0x80);
    row_prep(0x20);
L16bf0c:
    for (;;) {
        func_800F9140(0x2000);
        cell_stamp8_9(0x2040);
        cell_step();
        cell_step();
        poll_t(0x40);
        if (io_just() == 0)
            continue;
        break;
    }
    sep();
    row_prep_close();
    return;
}
