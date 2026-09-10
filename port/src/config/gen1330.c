/* FF4 source-port — interpreted module for rows_d0_x20_x20_windows.
 * Ground truth: src/rows_d0_x20_x20_windows.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void rows_d0_x20_x20_windows(void)
{
    /* rows: 5140 + 801224D0 + 9644(0x20)/9660(0x20) windows. */
    row_sel_cell_cur();
    battle_put43();
    row_prep(0x20);
    row_prep_close();
    return;
}
