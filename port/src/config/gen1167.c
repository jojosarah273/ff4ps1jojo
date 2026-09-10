/* FF4 source-port — interpreted module for fn_1x2e160.
 * Ground truth: src/fn_1x2e160.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x2e160(void)
{
    latch(1);
    cell_tick_xor(cell_state(5800));
    txt_draw(5800);
    key_page(132);
    config_rows_c_e2c_ef30_f1c_fb74_ro();
    fn_1x22538();
    config_row_26528();
    battle_state_dc400();
}
