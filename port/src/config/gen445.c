/* FF4 source-port — interpreted module for ability_status_wrapper_d3c_render.
 * Ground truth: src/ability_status_wrapper_d3c_render.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void ability_status_wrapper_d3c_render(void)
{
    /* ability/status wrapper: 80123D3C render + 0x1A73 title + 0x204/
       0x206 stat cells, then the L138BDC loop calling 80138D24 (the
       sub-dispatcher) and re-rendering 0x1B49. */
    fn_1x23d3c();
    config_rows_e4();
    latch(1);
    txt_draw(0x1A73);
    row_prep(0x20);
    cell_sink89_c(0x204);
    cell_cursor_ret2();
    cell_sink89_c(0x206);
    cell_cursor_ret2();
    row_prep_close();
    cell_flags_set4();
    latch(0x2C);
    cell_pull_c8_lo(0x205);
    latch(0xCE);
    cell_pull_c8_lo(0x206);
    latch(1);
    cell_pull_c8_lo(0x207);
    latch(0x21);
    cell_pull_c8_lo(0x4200);
    cell_push_c8_cur(0x4211);
    cell_flags_clr4();
    page_paint2(0x1B49);
    fn_1x23fb4();
    midrow_paint_c();
    config_row_q18();
    rows_x48c0_x1a71_texts_xe0_window();
    fn_1x39aa4();
    anim_noop();
    battle_state_dc400();
    battle_mode_dispatch();
    battle_mode_dispatch();
    battle_mode_dispatch();
    battle_mode_dispatch();
L138bdc:
    for (;;) {
        battle_anim_gate_a();
        cb_slot15();
        fn_1x26590();
        ability_party_screen_x1a88_x1bb4_x();
        cell_clear_bank(0x1B49);
        battle_row_88();
        cell_flags_set4();
        row_prep(0x20);
        cell_cursor_adv2();
        cell_0xf8210(0x206);
        cell_cursor_adv2();
        cell_0xf8210(0x204);
        row_prep_close();
        return;
    }
}
