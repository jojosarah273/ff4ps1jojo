/* FF4 source-port — interpreted module for battle_item_flow_x48_x4_x49_window.
 * Ground truth: src/battle_item_flow_x48_x4_x49_window.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_item_flow_x48_x4_x49_window(void)
{
    /* battle item flow: 0x48/0x4/0x49 windows, 0x38E2/0x34C2 texts,
       8014FE84/800760D0/8014B248/8014DA2C/80148CAC rows. */
    cell_cursor_dec();
    txt_draw_cur();
    row_close2();
    cell_cursor_dec();
    row_page(0x48);
    row_close2();
    cell_clear_bank();
    cell_cursor_dec();
    fn_1x4fe84();
    row_close2();
    cell_cursor_dec();
    sep_a();
    row_open_w(6);
    wnd_open(0xF);
    txt_draw_cur();
    func_800760D0();
    open_row_cur();
    fn_1x4b248();
    open_row(2);
    row_close2();
    cell_put(4);
    txt_set(0x38E2);
    cell_cursor_dec();
    cell_clear_bank(0x38E2);
    txt_set(0x34C2);
    txt_draw_cur();
    row_page(4);
    fn_1x4da2c();
    row_close2();
    txt_draw(0x38E2);
    battle_rows_xf42b_text_x_xaa_bytes();
    return;
}
