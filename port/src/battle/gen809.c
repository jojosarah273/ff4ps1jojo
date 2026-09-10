/* FF4 source-port — interpreted module for shop_choose_x7f_xda_xbb_windows_x4.
 * Ground truth: src/shop_choose_x7f_xda_xbb_windows_x4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void shop_choose_x7f_xda_xbb_windows_x4(void)
{
    /* shop choose: 0x7F/0xDA/0xBB windows, 0x4209/0x420A texts;
       gate 6434(0x202) picks the 0xDA vs 0x4200 paths. */
    row_page(0x7F);
    if (gate(0x202) != 0)
        goto L106A84;
    row_page(0xDA);
    sep_a();
    row_open_w(0x90);
    txt_draw(0x4209);
    cell_clear_bank(0x420A);
    row_page(0xBB);
    return;
L106A84:
    row_page_cur();
    sep_a();
    row_open_w(0x89);
    latch_cur();
    txt_draw(0x4200);
    return;
}
