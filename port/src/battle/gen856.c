/* FF4 source-port — interpreted module for fn_1x0f08c.
 * Ground truth: src/fn_1x0f08c.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x0f08c(void)
{
    wnd_open(10003);
    label(5900);
    latch(0);
    txt_draw(5888);
    latch(1);
    cell_put(195);
    fn_1x035b0();
    latch(255);
    cell_put(162);
    fn_1x02494();
    latch(2);
    txt_draw(5927);
    wnd_open(10003);
    label(5925);
    battle_wndfx_run();
}
