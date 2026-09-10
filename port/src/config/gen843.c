/* FF4 source-port — interpreted module for rows_x46_x45_windows_x1000_x7ff_x7.
 * Ground truth: src/rows_x46_x45_windows_x1000_x7ff_x7.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void rows_x46_x45_windows_x1000_x7ff_x7(void)
{
    /* rows: 0x46/0x45 windows, 0x1000/0x7FF/0x7000 values, 80135B54
       close; gate 5B8C(0x80). */
    poll_spin();
    if (poll_go(0x80) != 0)
        goto L127700;
    cell_put(0x46);
    open_row(0x45);
    row_open2();
    row_prep(0x20);
    page(0x45);
    draw_pad(0x1000);
    row_sync2(0x7FF);
    battle_wait_just(0x7000);
    row_prep_close();
    ability_bank_select_d_8019ee56_d_8();
    row_pad();
    return;
L127700:
    fn_1x27718();
    return;
}
