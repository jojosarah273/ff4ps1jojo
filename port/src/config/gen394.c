/* FF4 source-port — interpreted module for ability_status_details_screen_head.
 * Ground truth: src/ability_status_details_screen_head.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void ability_status_details_screen_head(void)
{
    /* ability/status details screen: 80126610..80136014 header chain,
       0x1BE4/0x17FE stat block, 0x1B47/0x1B46 detail rows with the
       s2/6434(2) gates, 0x46/0x45 windows. */
    battle_row_88();
    func_801266A0();
    func_80123FB4();
    config_row_q18();
    midrow_paint_c();
    midrow_paint_b();
    fn_1x25a64();
    func_80136014();
    wnd_open(0x1BE4);
    if (cell_flags_cmp(cell_state(0x17FE)) == 0)
        goto L127CFC;
    func_8012281C();
    goto L127D38;
L127CFC:
    midrow_paint_b();
    draw_pad_cur();
    battle_rows_sync();
    wnd_open(0x394);
    draw_pad_cur();
    battle_rows_100();
L127D38:
    anim_noop();
    battle_mode_dispatch();
    config_row_d600b();
    draw_pad_cur();
    battle_rows_sync();
    draw_pad_cur();
    battle_rows_sync();
    draw_pad_cur();
    battle_rows_29();
    draw_pad_cur();
    battle_rows_29();
    txt_set(0x16A4);
    page_open(0x16A5);
    draw_pad_cur();
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
    /* s2/v0 gate -> L127E80 */
    txt_set(0x1B47);
    if (gate(2) != 0)
        goto L127E80;
    status_panel_install_labels();
L127E80:
    func_80138664();
    fn_1x26590();
    cell_clear_bank(0x1B46);
    txt_set(0x1B46);
    if (gate(2) != 0)
        goto L127EC0;
    latch(0x40);
    goto L127EC8;
L127EC0:
    latch(0x30);
L127EC8:
    cell_put(0x46);
    latch(0xB8);
    cell_put(0x45);
    config_pad_300();
    midrow_pad88_run();
    midrow_degen();
    cell_clear_bank(0x1B46);
    sep_b();
    return;
}
