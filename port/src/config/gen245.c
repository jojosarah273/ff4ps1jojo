/* FF4 source-port — interpreted module for func_8012DD58.
 * Ground truth: src/func_8012DD58.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8012DD58(void)
{
    page_paint2(0x1B27);
    page_paint2(0x1BB8);
    key_page(0x84);
Ld78:
    for (;;) {
        func_80122FF4();
        row_page(0xE8);
        io_poll(0x7F);
        if (io_just() == 0)
            goto Lde8;
        latch(1);
        cell_tick_xor(cell_state(0x16A8));
        txt_draw(0x16A8);
        func_80122A9C();
        func_80122538();
        func_80126528();
        battle_state_dc400();
    }
Lde8:
    row_page(0xE8);
    if (gate(0x8080) == 0) {
        open_row(0xE8);
        return;
    }
    row_page(0xE7);
Lde10:
    cell_put(0x45);
    row_sel_cell_cur();
    row_sel_cell2_cur();
    cell_poke0(cell_state(0x45));
    row_open_w(0x14);
    cell_put(0x46);
    latch(4);
    cell_put(0x45);
    func_8011F6AC();
    row_page(0xE8);
    cell_put(0xD9);
    cell_clear_bank(0x1B27);
    func_80122FF4();
    row_page(0xE8);
    if (gate(0x8080) == 0) {
        open_row(0xE8);
        func_8012B0D8();
        func_8012B168();
        return;
    }
    cell_put(0xDA);
    if (io_press(cell_state(0xD9)) != 0)
        goto Lde10;
    row_page(0xD9);
    midrow_prep_a();
    cell_put(0x45);
    row_page(0xDA);
    midrow_prep_a();
    cell_tick_or(cell_state(0x45));
    if (ticker_reblend2(0x202) != 0)
        goto Ldf70;
    func_8012B0D8();
    return;
Ldf70:
    func_80124298();
    func_8012E5A8();
    row_prep(0x20);
    row_read2(0xDA);
    cell_pos_mask(0xFF);
    row_arm_s_cur();
    row_arm_s2_cur();
    cell_pos_fwd(0x1000);
    row_open();
    draw_pad(0xF600);
    row_sync2(0x3F);
    battle_wait_just(0x7E);
    row_done();
    row_read2(0xD9);
    cell_pos_mask(0xFF);
    row_arm_s_cur();
    row_arm_s2_cur();
    cell_pos_fwd(0x1000);
    row_open();
    row_sync2(0x3F);
    battle_wait_just(0x7E7E);
    row_done();
    wnd_open(0xF600);
    row_sync2(0x3F);
    battle_wait_just(0x7E7E);
    row_prep_close();
    row_page(0xD9);
    battle_put43();
    txt_cell(0x16B9);
    cell_cursor_dec();
    row_page(0xDA);
    battle_put43();
    txt_cell(0x16B9);
    cell_pull_c8(0x16B9);
    row_close2();
    cell_draw(0x16B9);
    func_801772E4();
    func_80125A64();
    func_8012B0D8();
    func_80122A9C();
    func_80122538();
    func_80126528();
    battle_state_dc400();
    battle_mode_dispatch();
    return;
}
