/* FF4 source-port — interpreted module for func_8010F08C.
 * Ground truth: src/func_8010F08C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8010F08C(void)
{
    wnd_open(10003);
    label(5900);
    latch(0);
    txt_draw(5888);
    latch(1);
    cell_put(195);
    func_801035B0();
    latch(255);
    cell_put(162);
    func_80102494();
    latch(2);
    txt_draw(5927);
    wnd_open(10003);
    label(5925);
    battle_wndfx_run();
}
