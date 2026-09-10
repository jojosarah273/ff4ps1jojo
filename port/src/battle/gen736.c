/* FF4 source-port — interpreted module for fn_1x11b14.
 * Ground truth: src/fn_1x11b14.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x11b14(void)
{
    wnd_open(37032);
    label(5894);
    latch(16);
    cell_put(44);
    latch(88);
    cell_put(46);
    battle_godtext_a();
    cell_clear_bank(5888);
    latch(7);
    txt_draw(5892);
    latch(1);
    txt_draw(5928);
    shop_view2_run();
    latch(16);
    cell_put(173);
    fn_1x11bbc();
    cell_clear_pad();
    battle_rows_xc_xe_windows_x2c_x2e();
}
