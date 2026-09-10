/* FF4 source-port — interpreted module for battle_rows_x34c5_x34c4_x49_texts.
 * Ground truth: src/battle_rows_x34c5_x34c4_x49_texts.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_rows_x34c5_x34c4_x49_texts(void)
{
    /* battle rows: 0x34C5/0x34C4/0x49 texts; gates 6434(2) route
       801420D4 vs the 8014B9B4/8014B044 row block. */
    txt_set(0x34C5);
    if (gate(2) != 0)
        goto L14AFA4;
    chara_status_sub_screen_d12c_ef78();
    return;
L14AFA4:
    txt_set(0x3522);
    if (gate(2) != 0)
        return;
    battle_row_34c4();
    txt_set(0x34C4);
    cell_cursor_dec();
    txt_draw(0x34C4);
    txt_set(0x49);
    cell_cursor_dec();
    battle_rows_x3523_text_loop_l14b05();
    chara_status_sub_screen_d12c_ef78();
    row_close2();
    txt_draw(0x49);
    row_close2();
    txt_draw(0x34C4);
    return;
}
