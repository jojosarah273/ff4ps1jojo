/* FF4 source-port — interpreted module for s2_branch.
 * Ground truth: src/s2_branch.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void s2_branch(void)
{
    func_801360AC();
    battle_row_88();
    func_801266A0();
    func_80123FB4();
    config_row_q18();
    midrow_paint_c();
    midrow_paint_b();
    fn_1x25a64();
    wnd_open(0x1BE4);
    if (cell_flags_cmp(cell_state(0x17FE)) == 0)
        goto L78a4;
    func_8012281C();
    goto L78f4;
L78a4:
    ;
L78b8:
    midrow_paint_b();
    draw_pad_cur();
    battle_rows_sync();
    wnd_open(0x394);
    draw_pad_cur();
    battle_rows_100();
L78f4:
    anim_noop();
    battle_mode_dispatch();
    config_row_d600b();
    draw_pad_cur();
    battle_rows_sync();
    draw_pad_cur();
    battle_rows_sync();
    txt_set(0x1B47);
    if (gate(2) != 0)
        goto L7980;
    draw_pad_cur();
    battle_rows_29();
    goto L7998;
L7980:
    draw_pad_cur();
    battle_rows_29();
L7998:
    draw_pad_cur();
    battle_rows_29();
    txt_set(0x16A4);
    page_open(0x16A5);
    draw_pad(0xCB2E);
    status_rows_x73_x74_windows_xa_xc();
    draw_pad_cur();
    battle_rows_29();
    config_row_b600();
    draw_pad_cur();
    battle_rows_sync();
    draw_pad_cur();
    wnd_open(0x676);
    battle_rows_100();
    draw_pad(0x62C);
    txt_set(0x16A2);
    page_open(0x16A0);
    config_rows_163();
    config_row_q18();
    func_8012214C();
    battle_state_dc400();
    /* s2 branch */
    txt_set(0x1B47);
    if (gate(2) != 0)
        goto L7a8c;
    /* bnez -> L7a8c */
    status_panel_install_labels();
L7a8c:
    fn_1x26590();
    cell_clear_bank(0x1B46);
    /* v1 branch */
    latch(1);
    txt_draw(0x1B46);
L7abc:
    txt_set(0x1B46);
    if (gate(2) != 0)
        goto L7ae4;
    latch(0x40);
    goto L7aec;
L7ae4:
    latch(0x30);
L7aec:
    cell_put(0x46);
    latch(0xB8);
    cell_put(0x45);
    config_pad_300();
    midrow_pad88_run();
    midrow_degen();
    /* beqz -> L7b4c */
    cell_clear_bank(0x1B46);
    sep_b();
L7b3c:
    func_80136148();
    return;
L7b4c:
    /* v1 branch */
    ability_v1_v0_gates_pick_ee4_f0e8();
    /* blez a0 -> L7b98 */
    func_80136014();
    return;
L7b98:
    row_page(1);
    row_read(0xC);
    if (sel(2) != 0)
        goto L7bd8;
    txt_set(0x1B46);
    cell_set50_from40();
    row_read(1);
    txt_draw(0x1B46);
L7bd8:
    row_page_cur();
    row_read(0x80);
    if (sel(2) != 0)
        goto L7c28;
    sep_b();
    txt_set(0x1B46);
    if (gate(2) != 0)
        goto L7b3c;
    sep_a();
    goto L7b3c;
L7c28:
    row_page(1);
    row_read(0x80);
    if (sel(2) != 0)
        goto L7abc;
    sep_a();
    func_80136148();
    return;
}
