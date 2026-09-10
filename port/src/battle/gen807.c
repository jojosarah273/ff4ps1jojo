/* FF4 source-port — interpreted module for fn_1x0f254.
 * Ground truth: src/fn_1x0f254.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x0f254(void)
{
    wnd_open(0xE828);
    label(0x1708);
    page_open(0x1725);
    label(0x1706);
    txt_set(0x1727);
    shop_main_xca_window_x1700_gate_pi();
    latch(1);
    cell_put(0xC3);
    fn_1x035b0();
    latch(0xFF);
    cell_put(0xA2);
    fn_1x02494();
    latch(1);
    txt_draw(0x6C8);
    wnd_open(0xE828);
    label(0x1725);
    battle_wndfx_run();
}
