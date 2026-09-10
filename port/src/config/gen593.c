/* FF4 source-port — interpreted module for shop_rows_x51_x46_x45_windows_d8_r.
 * Ground truth: src/shop_rows_x51_x46_x45_windows_d8_r.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void shop_rows_x51_x46_x45_windows_d8_r(void)
{
    /* shop rows: 0x51/0x46/0x45 windows, 801387D8 row; gates
       5A90(0x1BE4)/5520(3B9C). */
    cell_put(0x51);
    cell_put(0x46);
    open_row(0x45);
    page(0x45);
    row_prep(0x20);
    cell_push9_bank(0x20);
    row_prep_close();
    poll_t(0x1BE4);
    if (io_just() != 0)
        goto L1283E0;
L1283C8:
    row_prep_close();
    sep_a();
    return;
L1283E0:
    row_page(0x51);
    cell_set50_from40();
    rows_x4e_x41_windows_x7fa_text_d0();
    row_prep(0x20);
    page(0x45);
    cell_flags_cmp_pos(cell_peek_cur());
    if (io_just() == 0)
        goto L1283C8;
    row_prep_close();
    sep_b();
    return;
}
