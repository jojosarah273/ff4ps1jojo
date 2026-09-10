/* FF4 source-port — interpreted module for battle_spell_tab_flow_x38e8_x38e9.
 * Ground truth: src/battle_spell_tab_flow_x38e8_x38e9.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_spell_tab_flow_x38e8_x38e9(void)
{
    /* battle spell-tab flow: 0x38E8/0x38E9 rows, 0x388E/0x388F texts,
       0x1E00/0x1E02 level gate, 0x352D/0x388B/0x4218/0x1811/0x1812
       detail rows; 80145408/80167914/80169128 preps. */
    fn_1x45408();
    shop_c3c_b04_x3_gates_t0_t1_regcmp();
    txt_set(0x38E8);
    if (gate(2) != 0)
        goto L1415C4;
    txt_set(0x38E9);
    txt_set(0x38EA);
    cell_push_c8();
    cell_pull_c8();
    cell_pull_c8();
    cell_clear_bank(0x38E8);
L1415C4:
    txt_set(0x388D);
    if (gate(2) != 0)
        goto L14160C;
    txt_set(0x388E);
    txt_draw(0x1E01);
    latch(1);
    txt_draw(0x1E00);
    battle_cb_86120();
    cell_clear_bank(0x388D);
L14160C:
    txt_set_cur();
    if (gate(2) != 0)
        goto L14163C;
    txt_draw(0x1E00);
    battle_cb_86120();
    cell_clear_bank();
L14163C:
    txt_set_cur();
    if (gate(2) != 0)
        goto L1416C4;
    page_open_cur();
    label(0x1E00);
    page_open_cur();
    label(0x1E02);
    txt_set(0x6CC0);
    if (gate(2) != 0)
        goto L1416B4;
    txt_set(0x1E02);
    txt_draw_cur();
L1416B4:
    battle_cb_86120();
    cell_clear_bank();
L1416C4:
    cell_clear_bank(0x352D);
    txt_set_cur();
    cell_tick_or(cell_state(0x388B));
    if (ticker_reblend2(0x202) != 0)
        goto L141738;
    cell_push_c8_cur(0x4218);
    cell_peek_cur();
    cell_tick_or();
    row_read(0x30);
    io_poll(0x30);
    if (io_just() == 0)
        goto L141738;
    page_paint2(0x352D);
L141738:
    cell_clear_bank(0x1811);
    cell_clear_bank(0x1812);
    key_page(0x97);
    return;
}
