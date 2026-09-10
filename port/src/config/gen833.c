/* FF4 source-port — interpreted module for ability_menu_x93_x9f_x60_windows_x.
 * Ground truth: src/ability_menu_x93_x9f_x60_windows_x.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void ability_menu_x93_x9f_x60_windows_x(void)
{
    /* ability menu: 0x93/0x9F/0x60 windows, 0x1B1D/0x1BC6 texts,
       8013CB94/8012A868/8013C2FC/8013CA70 sub-rows; loop L13BC38
       (80194700/80194394) and L13BCA4 (8013C2FC gate) end via
       8013BD04. */
    wnd_open_cur();
    tail(0x93);
    wnd_open_cur();
    tail(0x9F);
    midrow_paint_a();
    fn_1x3cb94();
    config_row_b600();
    wnd_open_cur();
    label(0x1B1D);
    page_paint2(0x1BC6);
    fn_1x2a868();
    config_row_d600b();
    draw_pad_cur();
    battle_rows_sync();
    midrow_paint_b();
    func_8012AAC0();
    config_row_q18();
    shop_row_kick_f0();
    open_row(0x60);
    battle_mode_dispatch();
    battle_mode_dispatch();
    battle_mode_dispatch();
    battle_mode_dispatch();
L13bc38:
    for (;;) {
        battle_anim_gate_a();
        cb_slot15();
        fn_1x26590();
    L13bca4:
        for (;;) {
            ability_menu_x60_window_x1a83_text();
            row_page(0x60);
            if (gate(2) != 0)
                goto L13BCE4;
            ability_menu_x41_window_ladder_x19();
            if (io_go() != 0)
                continue;
            goto L13BCEC;
        }
    L13BCE4:
        battle_summon_party_cast_screen_x4();
    L13BCEC:
        return;
    }
}
