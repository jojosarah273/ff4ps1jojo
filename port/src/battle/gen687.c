/* FF4 source-port — interpreted module for shop_rows_alt_of_d4_x1706_x1708_x5.
 * Ground truth: src/shop_rows_alt_of_d4_x1706_x1708_x5.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void shop_rows_alt_of_d4_x1706_x1708_x5(void)
{
    /* shop rows (alt of 801038D4): 0x1706/0x1708/0x5A windows,
       80103A28/80103F40/8017F8F8/80103B98/80103DD8/800FB224/
       8017559C rows. */
    page_open(0x1706);
    label(0x1708);
    fn_1x03a28();
    wnd_open_cur();
    tail(0x5A);
    fn_1x03f40();
    battle_mode_dispatch();
    battle_mode_dispatch();
    shop_list_x5c_x70_x73_window_rows();
    wnd_open(0x198);
    tail(0x5A);
    fn_1x03f40();
    shop_rows_x5c_xdf_x79_windows_x420();
    latch(2);
    txt_draw(0x1700);
    txt_draw(0x1727);
    latch(1);
    txt_draw(0x1701);
    page_open(0x170C);
    label(0x1706);
    cell_0xfb224();
    latch(0x10);
    shop_buy_list();
    latch(0x81);
    txt_draw(0x4200);
    return;
}
