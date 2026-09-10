/* FF4 source-port — interpreted module for shop_rows_f94_b04_reads_x2000_x204.
 * Ground truth: src/shop_rows_f94_b04_reads_x2000_x204.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void shop_rows_f94_b04_reads_x2000_x204(void)
{
    /* shop rows: 3F94(3B04) reads + 0x2000/0x2040 cells; linear. */
    row_prep(0x20);
    sep_a();
    cell_peek0(cell_state_of());
    cell_stamp8_9(0x2000);
    sep_a();
    cell_peek0(cell_state_of());
    cell_stamp8_9(0x2040);
    sep();
    row_prep_close();
    return;
}
