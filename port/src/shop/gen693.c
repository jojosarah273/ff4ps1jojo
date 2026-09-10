/* FF4 source-port — interpreted module for shop_rows_x3319_x371b_x331b_x3719.
 * Ground truth: src/shop_rows_x3319_x371b_x331b_x3719.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void shop_rows_x3319_x371b_x331b_x3719(void)
{
    /* shop rows: 0x3319/0x371B/0x331B/0x3719 cells; loop L16AE14
       on 5958(0x400). */
    row_open();
    row_prep(0x20);
    wnd_open_cur();
L16ae14:
    for (;;) {
        cell_stamp8_9(0x3319);
        cell_stamp8_9(0x371B);
        cell_0xf9140(0x331B);
        cell_0xf9140(0x3719);
        cell_step();
        cell_step();
        cell_step();
        cell_step();
        poll_t(0x400);
        if (io_just() == 0)
            continue;
        break;
    }
    sep();
    row_prep_close();
    row_close();
    return;
}
