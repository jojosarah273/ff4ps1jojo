/* FF4 source-port — interpreted module for battle_item_sublist_x14_x15_x16_xe.
 * Ground truth: src/battle_item_sublist_x14_x15_x16_xe.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_item_sublist_x14_x15_x16_xe(void)
{
    /* battle item-sublist: 0x14/0x15/0x16/0xE/0x10/0x12 windows,
       0x6CC0/0x300 gates; 80148D04/80148CAC/80148BE0 row handlers and
       the L148A74 refresh loop (67FC + 3F38(3C3C(id)) row pair). */
    txt_set_cur();
    if (gate(0x202) == 0)
        return;
    cell_clear_bank();
    txt_set_cur();
    if (gate(0x202) != 0)
        goto L148924;
    battle_rows_clear_variant_zero_byt();
    goto L14896C;
L148924:
    io_poll(0xFF);
    if (io_just() != 0)
        goto L14896C;
    io_poll(0xFE);
    if (io_just() != 0)
        goto L148964;
    battle_rows_xf42b_text_x_xaa_bytes();
    goto L14896C;
L148964:
    fn_1x48be0();
L14896C:
    txt_set_cur();
    row_sel_cell_cur();
    cell_push_c8();
    cell_put(0x14);
    cell_push_c8();
    cell_put(0x15);
    latch(0xD);
    cell_put(0x16);
    txt_set_cur();
    sep_b();
    cell_pos_back(0x18);
    cell_put(0xE);
    txt_set_cur();
    sep_b();
    cell_pos_back(0x18);
    cell_put(0x10);
    txt_set_cur();
    cell_put(0x12);
    txt_set_cur();
    row_prep(0x20);
    sep();
    row_prep_close();
    draw_pad_cur();
L148a74:
    for (;;) {
        cell_push_c8_b4o(0x14);
        io_poll(0xFF);
        if (io_just() != 0)
            return;
        cell_cursor_dec();
        row_read(0xF0);
        cell_tick_half();
        sep_a();
        cell_poke0(cell_state(0xE));
        func_80094588();
        cell_draw(0x300);
        cell_step();
        row_close2();
        row_read(0xF);
        sep_a();
        cell_poke0(cell_state(0x10));
        cell_draw(0x300);
        cell_step();
        step2();
        cell_push_c8_b4o(0x14);
        sep_a();
        cell_poke0(cell_state(0x12));
        cell_draw(0x300);
        cell_step();
        step2();
        txt_set(0x6CC0);
        if (gate(2) != 0)
            goto L148BAC;
        txt_set(0x300);
        goto L148BB8;
    L148BAC:
        txt_set(0x300);
    L148BB8:
        cell_draw_cur();
        cell_step();
    }
}
