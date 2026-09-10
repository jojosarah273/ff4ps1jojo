/* FF4 source-port — interpreted module for battle_call_c96c_b9b4_e5d0_e2f8_ba.
 * Ground truth: src/battle_call_c96c_b9b4_e5d0_e2f8_ba.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_call_c96c_b9b4_e5d0_e2f8_ba(void)
{
    /* battle call: 8014C96C/8014B9B4/8013E5D0/8013E2F8/8014BA34
       rows; 0x34C4/0x34C5 texts with 6434(2) gates. */
    fn_1x4c96c();
    latch(3);
    txt_draw_cur();
    latch(0xF);
    cell_put(4);
    battle_rows_x4_x1_windows_e588_row();
    cell_clear_bank();
    latch(1);
    battle_row_34c4();
    txt_set(0x34C4);
    txt_draw_cur();
    txt_set(0x34C5);
    if (gate(2) != 0)
        goto L14ACBC;
    battle_magic_cast_flow_d12c_de8_pr();
L14ACBC:
    cell_clear_bank();
    txt_set(0x34C4);
    txt_draw_cur();
    fn_1x4ba34();
    txt_set(0x3523);
    if (gate(2) != 0)
        return;
    battle_magic_cast_flow_d12c_de8_pr();
    return;
}
