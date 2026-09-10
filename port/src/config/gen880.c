/* FF4 source-port — interpreted module for battle_rows_x3ff_x2_xc_windows_c_r.
 * Ground truth: src/battle_rows_x3ff_x2_xc_windows_c_r.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_rows_x3ff_x2_xc_windows_c_r(void)
{
    /* battle rows: 0x3FF/0x2/0xC windows, 8007411C row. */
    row_prep(0x20);
    cell_push9_bank();
    cell_pos_mask(0x3FF);
    row_arm_s_cur();
    cell_push9_bank();
    sep();
    row_prep_close();
    wnd_open(2);
    tail_cur();
    wnd_open_cur();
    latch(0xC);
    func_8007411C();
    return;
}
