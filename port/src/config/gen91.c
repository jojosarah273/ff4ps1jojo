/* FF4 source-port — interpreted module for ability_equip_screen_twin_of_c74_b.
 * Ground truth: src/ability_equip_screen_twin_of_c74_b.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void ability_equip_screen_twin_of_c74_b(void)
{
    /* ability/equip screen (twin of 80130C74): 1B83-1B93 texts, 0x28
       cursor window, 0x29 cells; 801308B4/8012FBB0/801206DC/80122D20
       sub-renders, 5x 801312BC row commits, 0x31 window/212C end. */
    latch(0x20);
    cell_put(0xC1);
    config_row_b600();
    func_80131294();
    cell_clear_bank(0x1B88);
    txt_set(0x1B83);
    row_sel_cell_cur();
    row_sel_cell2_cur();
    cell_poke0(cell_state(0x1B83));
    cell_poke0(cell_state(0x1B84));
    ability_rows_x1d_x1e_windows_x45_x();
    cell_push_c8_d58(0x1560);
    txt_draw(0x1B89);
    sep_b();
    cell_pos_back(0xE);
    battle_put43();
    cell_push_c8();
    txt_draw(0x1B90);
    draw_pad_cur();
    battle_rows_sync();
    draw_pad_cur();
    battle_rows_sync();
    draw_pad_cur();
    battle_rows_sync();
    config_row_b600();
    txt_set(0x1B89);
    wnd_open(0x44);
    fn_1x2fbb0();
    draw_pad_cur();
    row_open();
    page(0x29);
    tail(0x29);
    row_close();
    battle_rows_29();
    row_open();
    page(0x29);
    tail(0x29);
    row_close();
    draw_pad_cur();
    battle_rows_29();
    ability_detail_x1b87_x1b83_x1b84_t();
    txt_draw(0x1B93);
    draw_pad(0x1C8);
    rows_f360_prep_x29_x1d_x1e_window();
    wnd_open(0x2E0);
    draw_pad(0x1000);
    equip_cells_render();
    wnd_open(0x60);
    draw_pad(0x1040);
    equip_cells_render();
    wnd_open(0x560);
    draw_pad(0x1080);
    equip_cells_render();
    wnd_open(0x1A0);
    draw_pad(0x10C0);
    equip_cells_render();
    wnd_open(0x420);
    draw_pad(0x1100);
    equip_cells_render();
    txt_set(0x16A8);
    row_read(1);
    row_sel_cell_cur();
    cell_put(0x45);
    row_sel_cell_cur();
    row_sel_cell2_cur();
    cell_poke0(cell_state(0x45));
    battle_put43();
    latch_cur();
    ability_rows_29();
    ability_rows_29();
    ability_rows_29();
    ability_rows_29();
    ability_rows_29();
    latch(0x1F);
    cell_pull_c8_lo(0x212C);
    return;
}
