/* FF4 source-port — interpreted module for ability_rows_x45_x1b93_cells_windo.
 * Ground truth: src/ability_rows_x45_x1b93_cells_windo.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void ability_rows_x45_x1b93_cells_windo(void)
{
    /* ability rows: 0x45/0x1B93 cells/windows; linear render. */
    stat_sync();
    latch_cur();
    stat_sync();
    row_prep(0x20);
    row_arm_s_cur();
    cell_put_hi9(0x45);
    row_arm_s_cur();
    row_arm_s2_cur();
    cell_peek0(cell_state(0x45));
    row_prep_close();
    cell_push_c8();
    row_read(0x7F);
    txt_draw(0x1B93);
    txt_set(0x1B93);
    return;
}
