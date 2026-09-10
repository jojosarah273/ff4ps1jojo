/* FF4 source-port — interpreted module for shop_rows_x64_x6a_x6b_texts_ef88_r.
 * Ground truth: src/shop_rows_x64_x6a_x6b_texts_ef88_r.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void shop_rows_x64_x6a_x6b_texts_ef88_r(void)
{
    /* shop rows: 0x64/0x6A/0x6B texts, 8016EF88 row; linear. */
    row_prep(0x10);
    row_prep_close();
    row_open2();
    row_open3();
    latch(2);
    cell_pull_c8_lo(0x64);
    latch(0xF0);
    cell_pull_c8_lo(0x6A);
    latch(0xD);
    cell_pull_c8_lo(0x6B);
    fn_1x6ef88();
    return;
}
