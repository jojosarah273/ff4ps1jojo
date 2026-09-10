/* FF4 source-port — interpreted module for cell_0xfad48.
 * Ground truth: src/cell_0xfad48.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void cell_0xfad48(void)
{
    func_800FA460();
    latch(0x17);
    txt_draw(0x212C);
    latch(9);
    txt_draw(0x2105);
    fn_1x74710();
    wnd_open(0x2000);
    tail(0x47);
    wnd_open(0x1000);
    tail(0x45);
    latch(0xA);
    cell_put(0x3C);
    wnd_open(0xF000);
    tail(0x3D);
    fn_1x766b0();
    wnd_open(0x2800);
    tail(0x47);
    wnd_open(0x1000);
    tail(0x45);
    open_row(0x76);
    fn_1x76748();
    shop_buy_flow_xfd8_gate_detail_alt();
    txt_set(0xFDF);
    row_read(0x7F);
    fn_1x1c27c();
    shop_title_xfe0_x19_x18_windows_xc();
    shop_rows_xcdb_xbd5_cells_values_l();
    row_page(0x85);
    if (gate(0x202) != 0)
        goto LAE68;
    row_page(0xB1);
    if (gate(0x202) != 0)
        goto LAE68;
    shop_battle_dialog_xc5_xe9_xd1_win();
LAE68:
    open_row(0xD1);
    open_row(0x85);
    row_page(0xB1);
    if (gate(0x202) != 0)
        goto LAE98;
    battle_rows_run();
LAE98:
    row_page(0x81);
    if (gate(0x202) != 0)
        goto LAF20;
    latch(0x11);
    txt_draw(0x212D);
    txt_set(0xFE4);
    cell_tick_half();
    if (cell_flags_nz50(0x101) != 0)
        goto LAF08;
    latch(2);
    txt_draw(0x2130);
    latch(0x43);
    txt_draw(0x2131);
    goto LAF6C;
LAF08:
    cell_clear_bank(0x2130);
    cell_clear_bank(0x2131);
    goto LAF6C;
LAF20:
    cell_clear_bank(0x212D);
    latch(0x83);
    txt_draw(0x2131);
    row_page(0x83);
    row_read(0xE0);
    cell_tick_or(cell_addr16(0x81));
    fn_1x7ea90();
LAF6C:
    fn_1x1d8e0();
    fn_1x1d658();
    shop_row_xfd8_title_x3e_x3d_window();
    func_800FC8E8();
    shop_sell_flow_x1700_header_x7a_x1();
    stack_swap_trick_sp_swapped_throug();
    stack_swap_trick_sp_swapped_throug();
    battle_mode_dispatch();
    func_800FFB1C();
    fn_1x1bd88();
    for (;;) {
        battle_anim_gate_a();
        if (cb_slot15() == 0)
            break;
    }
    return;
}
