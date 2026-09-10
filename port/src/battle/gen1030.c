/* FF4 source-port — interpreted module for battle_rows_fe634_prep_x70_x22_x21.
 * Ground truth: src/battle_rows_fe634_prep_x70_x22_x21.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_rows_fe634_prep_x70_x22_x21(void)
{
    /* battle rows: 800FE634 prep + 0x70/0x22/0x21 window cells. */
    cell_0xfe634();
    row_prep(0x20);
    sep_a();
    cell_put_hi9(0x70);
    row_sync2(0x22);
    row_prep_close();
    row_page(0x20);
    row_page(0x22);
    return;
}
