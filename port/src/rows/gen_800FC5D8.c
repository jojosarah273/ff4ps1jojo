/* FF4 source-port — interpreted module for battle_confirm_dialog_x1700_test_b.
 * Ground truth: src/battle_confirm_dialog_x1700_test_b.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_confirm_dialog_x1700_test_b(void)
{
    /* battle confirm-dialog: 0x1700 test branches to the 0x2105 help
       (800FFADC/8017F9A8) vs 0x2120 detail (800FFB1C/8010CA74) rows;
       fee-check 0xFE4/7728(0x101), then the 0x2100/0x4200 tail with
       80175E88/80175E08 right/left rows; loops on 80194394. */
    txt_set(0x1700);
    io_poll(3);
    if (io_just() != 0)
        goto LFC654;
    latch(7);
    txt_draw(0x2105);
    func_800FFADC();
    stack_swap_trick_sp_swapped_throug();
    goto LFC86C;
LFC654:
    latch(9);
    txt_draw(0x2105);
    func_800FFB1C();
    battle_rows_xae_x9d1_x9cf_texts_d6();
    stack_swap_trick_sp_swapped_throug();
    stack_swap_trick_sp_swapped_throug();
    battle_mode_dispatch();
    battle_mode_dispatch();
LFC704:
    for (;;) {
        battle_anim_gate_a();
        if (cb_slot15() == 0)
            break;
    }
    txt_set(0xFE4);
    cell_tick_half();
    if (cell_flags_nz50(0x101) != 0)
        goto LFC86C;
    latch(3);
    txt_draw(0x2130);
    latch(0x43);
    txt_draw(0x2131);
    stack_swap_trick_sp_swapped_throug();
    stack_swap_trick_sp_swapped_throug();
    battle_mode_dispatch();
LFC814:
    for (;;) {
        battle_anim_gate_a();
        if (cb_slot15() == 0)
            break;
    }
LFC86C:
    battle_godtext_a();
    fn_1x75e88();
    txt_cell(0x1000);
    if (gate(0x202) != 0)
        goto LFC89C;
    fn_1x75e08();
LFC89C:
    cell_clear_pad();
    latch(0x81);
    txt_draw(0x4200);
    latch_cur();
    shop_rows_run();
    cell_flags_clr4();
    return;
}
