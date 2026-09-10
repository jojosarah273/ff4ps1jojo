/* FF4 source-port — interpreted module for func_80145220.
 * Ground truth: src/func_80145220.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80145220(void)
{
    wnd_open(32);
    func_8014202C();
    latch(8);
    txt_draw(62246);
    battle_row_wrap();
    battle_row_d548();
    func_80167BA0();
    battle_row_wrap();
}
