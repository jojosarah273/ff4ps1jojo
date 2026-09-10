/* FF4 source-port — interpreted module for ability_wrapper_ea9c_d3c_preps_x1b.
 * Ground truth: src/ability_wrapper_ea9c_d3c_preps_x1b.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void ability_wrapper_ea9c_d3c_preps_x1b(void)
{
    /* ability wrapper: 8016EA9C/80123D3C preps, 0x1B1D/0x1BB1/0x1BB2
       rows, then 80134FF4 sub-dispatcher; loop L134D38 pulls
       80194700/80194394. */
    row_open2();
    row_open3();
    wnd_open(0x100);
    row_open();
    cell_cursor_read();
    latch(0x7E);
    cell_cursor_dec();
    row_pad();
    func_8016EA9C();
    fn_1x23d3c();
    battle_mode_dispatch();
    battle_mode_dispatch();
    battle_mode_dispatch();
L134d38:
    for (;;) {
        battle_anim_gate_a();
        cb_slot15();
        wnd_open_cur();
        label(0x1B1D);
        latch(0x20);
        cell_put(0xC1);
        cell_clear_bank(0x1BB1);
        cell_clear_bank(0x1BB2);
        shop_row_kick_f0();
        latch(0x20);
        cell_put(0x3F);
        cell_clear_bank(0x1BB4);
        func_80123FB4();
        midrow_paint_c();
        config_row_q18();
        anim_noop();
        fn_1x378b0();
        latch(0xA);
        txt_draw(0x1BB4);
        ability_config_screen_bb1_text_win();
        battle_row_88();
        fn_1x22114();
        sep();
        stat_sync();
        cell_cursor_read();
        row_pad();
        return;
    }
}
