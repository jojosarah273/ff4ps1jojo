/* FF4 source-port — interpreted module for shop_choose_twin_x7f_xdf_xbb_windo.
 * Ground truth: src/shop_choose_twin_x7f_xdf_xbb_windo.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void shop_choose_twin_x7f_xdf_xbb_windo(void)
{
    /* shop choose (twin): 0x7F/0xDF/0xBB windows, 0x4209/0x420A
       texts; gate 6434(0x202). */
    row_page(0x7F);
    if (gate(0x202) != 0)
        goto L109824;
    row_page(0xDF);
    sep_a();
    row_open_w(0x14);
    txt_draw(0x4209);
    cell_clear_bank(0x420A);
    row_page(0xBB);
    return;
L109824:
    row_page_cur();
    sep_a();
    row_open_w(5);
    latch_cur();
    txt_draw(0x4200);
    return;
}
