/* FF4 source-port — interpreted module for battle_rows_x7a_window_x1f_x70_rea.
 * Ground truth: src/battle_rows_x7a_window_x1f_x70_rea.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_rows_x7a_window_x1f_x70_rea(void)
{
    /* battle rows: 0x7A window + 0x1F/0x70 reads, 0x2C/0x2D/0x2E/0x2F
       windows. */
    row_page(0x7A);
    row_read(0x1F);
    cell_push_c8();
    sep_a();
    row_open_w(0x70);
    cell_put(0x2C);
    open_row(0x2D);
    latch(0x50);
    cell_put(0x2E);
    open_row(0x2F);
    return;
}
