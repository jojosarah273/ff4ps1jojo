/* FF4 source-port — interpreted module for battle_rows_sync.
 * Ground truth: src/battle_rows_sync.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_rows_sync(void)
{
    /* battle rows: 3C3C/939C/926C/9448 x2 + 8011F030 + 960C. */
    cell_state_of();
    row_sync();
    row_open2();
    row_pad();
    row_pad();
    column_rows_x29_x2b_x31_x33_window();
    row_done();
    return;
}
