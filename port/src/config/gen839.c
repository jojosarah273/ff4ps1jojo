/* FF4 source-port — interpreted module for ability_rows_29.
 * Ground truth: src/ability_rows_29.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void ability_rows_29(void)
{
    /* ability rows: 0x29 window + 80124704 row; 6CF4/9330 preps. */
    cell_cursor_dec();
    row_open();
    cell_cursor_dec();
    row_prep(0x20);
    cell_push9_bank(0x20);
    row_prep_close();
    row_close2();
    fn_1x24704();
    row_close();
    row_close2();
    cell_set50_from40();
    cell_step();
    cell_step();
    return;
}
