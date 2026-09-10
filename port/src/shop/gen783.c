/* FF4 source-port — interpreted module for battle_anim_loop_a488_c8c_preps_l1.
 * Ground truth: src/battle_anim_loop_a488_c8c_preps_l1.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_anim_loop_a488_c8c_preps_l1(void)
{
    /* battle anim loop: 80167774/8014A488/80148C8C preps; L1676DC
       alternates 80140994/8014096C/80140944/801409BC/801409E4 with
       80167604; closes via 80167844. */
    battle_rows_x70174_fb8_dc_preps_b2();
    wnd_open_cur();
    label_cur();
    page_paint2_cur();
    sep();
    fn_1x4a488();
    fn_1x48c8c();
    sep();
    label_cur();
    page_paint2_cur();
    wnd_open(4);
L1676dc:
    for (;;) {
        row_open();
        fn_1x40994();
        battle_row_8();
        fn_1x4096c();
        battle_row_8();
        fn_1x40944();
        battle_row_8();
        fn_1x409bc();
        battle_row_8();
        fn_1x409e4();
        battle_row_8();
        row_close();
        cell_set50_from54();
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    cell_clear_bank();
    battle_rows_twin_with_x70174_fb8_d();
    return;
}
