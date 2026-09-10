/* FF4 source-port — interpreted module for battle_judge_cfc_ac0_preps_x48_x20.
 * Ground truth: src/battle_judge_cfc_ac0_preps_x48_x20.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_judge_cfc_ac0_preps_x48_x20(void)
{
    /* battle judge: 80140CFC/80140AC0 preps, 0x48/0x2000 texts,
       80097D34/80097D54/80140D94 rows. */
    battle_rows_loop_l140d28_on_b68_x3();
    txt_set(0x48);
    cell_cursor_dec();
    txt_set_cur();
    txt_draw(0x48);
    func_80097D34();
    battle_rows_row_loop_l140aec_on_a9();
    sep();
    cell_pull_c8();
    txt_cell(0x2000);
    cell_cursor_dec();
    row_close2();
    cell_draw_cur();
    func_80097D54();
    row_close2();
    txt_draw(0x48);
    battle_rows_d54_d44_loop_on_b68_xf();
    return;
}
