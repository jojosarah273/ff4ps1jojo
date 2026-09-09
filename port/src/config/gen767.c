/* FF4 source-port — interpreted module for func_801308B4.
 * Ground truth: src/func_801308B4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801308B4(void)
{
    /* ability rows: 0x1D/0x1E windows, 0x45/0x1D cells, 80130884
       prep; linear. */
    cell_put(0x1D);
    open_row(0x1E);
    func_80130884();
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
