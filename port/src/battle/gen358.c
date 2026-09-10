/* FF4 source-port — interpreted module for battle_item_rows_x8_x50_x22_xff_x3.
 * Ground truth: src/battle_item_rows_x8_x50_x22_xff_x3.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_item_rows_x8_x50_x22_xff_x3(void)
{
    /* battle item rows: 0x8/0x50/0x22/0xFF/0x3E windows, 8014D568 +
       8014E984 rows; two 7F48(3C3C)/3F38(3B04) cell blocks. */
    latch(8);
    fn_1x4d568();
    latch(0x50);
    txt_draw_cur();
    latch(0x22);
    txt_draw_cur();
    cell_clear_bank();
    latch(0xFF);
    txt_draw_cur();
    latch(0x3E);
    txt_draw_cur();
    row_page(0x49);
    row_sel_cell_cur();
    txt_cell_cur();
    cell_put_cur();
    row_sel_cell_cur();
    battle_row_26();
    sep_b();
    cell_tick_sub(cell_state_of());
    cell_pos_back(8);
    sep_a();
    cell_poke0(cell_state_of());
    txt_draw_cur();
    txt_cell_cur();
    cell_put_cur();
    row_sel_cell_cur();
    battle_row_26();
    sep_b();
    cell_tick_sub(cell_state_of());
    cell_pos_back(8);
    sep_a();
    cell_poke0(cell_state_of());
    txt_draw_cur();
    latch(1);
    txt_draw_cur();
    return;
}
