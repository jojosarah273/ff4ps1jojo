/* FF4 source-port — interpreted module for func_80130F90.
 * Ground truth: src/func_80130F90.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80130F90(void)
{
    /* ability/equip screen (twin of 80130C74): 1B83-1B93 texts, 0x28
       cursor window, 0x29 cells; 801308B4/8012FBB0/801206DC/80122D20
       sub-renders, 5x 801312BC row commits, 0x31 window/212C end. */
    latch(0x20);
    cell_put(0xC1);
    func_80120FBC();
    func_80131294();
    cell_clear_bank(0x1B88);
    txt_set(0x1B83);
    row_sel_cell_cur();
    row_sel_cell2_cur();
    cell_poke0(cell_state(0x1B83));
    cell_poke0(cell_state(0x1B84));
    func_801308B4();
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
    func_80120FBC();
    txt_set(0x1B89);
    wnd_open(0x44);
    func_8012FBB0();
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
    func_80130AA4();
    txt_draw(0x1B93);
    draw_pad(0x1C8);
    func_801206DC();
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
