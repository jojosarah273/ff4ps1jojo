/* FF4 source-port — interpreted module for ability_rows_x1d_x1e_windows_x45_x.
 * Ground truth: src/ability_rows_x1d_x1e_windows_x45_x.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void ability_rows_x1d_x1e_windows_x45_x(void)
{
    /* ability rows: 0x1D/0x1E windows, 0x45/0x1D cells, 80130884
       prep; linear. */
    cell_put(0x1D);
    open_row(0x1E);
    fn_1x30884();
    stat_sync();
    latch_cur();
    stat_sync();
    row_prep(0x20);
    cell_put_hi9(0x45);
    row_arm_s_cur();
    row_arm_s2_cur();
    cell_peek0(cell_state(0x45));
    cell_peek0(cell_state(0x1D));
    row_prep_close();
    return;
}
