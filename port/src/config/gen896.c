/* FF4 source-port — interpreted module for ability_wrapper_preps_config_dispa.
 * Ground truth: src/ability_wrapper_preps_config_dispa.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void ability_wrapper_preps_config_dispa(void)
{
    /* ability wrapper: 80132428/80177178 preps + 80120070 config
       dispatcher + the 80126B88/8012F9D0/80130C74 sub-screens; ends
       with 80126528/80122904 rows. */
    fn_1x32428();
    row_prep(0x20);
    cell_stamp8_9(0xB);
    row_prep_close();
    txt_set(0x1B89);
    sep_b();
    cell_pos_back(0xE);
    cell_cursor_dec();
    fn_1x77178();
    row_close2();
    wnd_open_cur();
    open_depth_guard_in_the_menu_regio();
    fn_1x26b88();
    txt_draw(0x1A86);
    fn_1x20f94();
    draw_pad_cur();
    battle_rows_sync();
    fn_1x30884();
    config_store_x43_x48_x5e_x5b_x5a_x();
    fn_1x30c74();
    animation_row_300b();
    fn_1x26458();
    battle_mode_dispatch();
    anim_noop();
    fn_1x1ff40();
    midrow_paint_b();
    fn_1x22904();
    config_row_26528();
    return;
}
