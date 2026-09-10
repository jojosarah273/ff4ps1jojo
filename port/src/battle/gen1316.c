/* FF4 source-port — interpreted module for fn_1x45220.
 * Ground truth: src/fn_1x45220.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x45220(void)
{
    wnd_open(32);
    fn_1x4202c();
    latch(8);
    txt_draw(62246);
    battle_row_wrap();
    battle_row_d548();
    battle_cast_driver_dd4_anim_rows_c();
    battle_row_wrap();
}
