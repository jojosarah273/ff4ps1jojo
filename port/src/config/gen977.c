/* FF4 source-port — interpreted module for rows_x1d_x29_windows_e8_close_x340.
 * Ground truth: src/rows_x1d_x29_windows_e8_close_x340.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void rows_x1d_x29_windows_e8_close_x340(void)
{
    /* rows: 0x1D/0x29 windows, 801255E8 close; 4064(0x340) reads. */
    sep();
    stat_sync();
    row_page(0x1D);
    row_prep(0x20);
    row_arm_s_cur();
    row_arm_s2_cur();
    cell_pos_fwd(0x340);
    row_prep_close();
    fn_1x255e8();
    row_close();
    return;
}
