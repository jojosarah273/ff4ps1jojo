/* FF4 source-port — interpreted module for battle_confirm_c96c_aa68_b9b4_ba34.
 * Ground truth: src/battle_confirm_c96c_aa68_b9b4_ba34.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_confirm_c96c_aa68_b9b4_ba34(void)
{
    /* battle confirm: 8014C96C/8014AA68/8014B9B4/8014BA34 rows,
       0x34C4/0x34C5/0x3522 texts; 6434(2) gate. */
    fn_1x4c96c();
    page_paint2_cur();
    txt_set(0x34C4);
    txt_draw_cur();
    txt_set(0x34C5);
    cell_tick_or(cell_state(0x3522));
    txt_draw_cur();
    fn_1x4aa68();
    battle_row_34c4();
    txt_set(0x3522);
    if (gate(2) != 0)
        return;
    txt_set(0x34C4);
    txt_draw_cur();
    txt_set(0x3523);
    txt_draw_cur();
    fn_1x4aa68();
    fn_1x4ba34();
    return;
}
