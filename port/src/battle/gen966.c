/* FF4 source-port — interpreted module for fn_1x40e00.
 * Ground truth: src/fn_1x40e00.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x40e00(void)
{
    latch(196);
    txt_draw(13250);
    latch(86);
    txt_draw(13251);
    latch(255);
    txt_draw(13252);
    battle_rows_loop_l140d28_on_b68_x3();
    page_paint2(62580);
    txt_set(62581);
    txt_draw(13507);
    func_8009546C();
    battle_rows_d54_d44_loop_on_b68_xf();
}
