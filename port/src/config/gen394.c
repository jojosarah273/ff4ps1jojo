/* FF4 source-port — interpreted module for func_80127C70.
 * Ground truth: src/func_80127C70.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80127C70(void)
{
    /* ability/status details screen: 80126610..80136014 header chain,
       0x1BE4/0x17FE stat block, 0x1B47/0x1B46 detail rows with the
       s2/6434(2) gates, 0x46/0x45 windows. */
    func_80126610();
    func_801266A0();
    func_80123FB4();
    func_80126330();
    midrow_paint_c();
    midrow_paint_b();
    func_80125A64();
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
    func_8011F8D4();
L127D38:
    func_8011F6A4();
    battle_mode_dispatch();
    func_80120F1C();
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
    func_80127538();
    draw_pad_cur();
    battle_rows_29();
    func_80120FBC();
    draw_pad_cur();
    battle_rows_sync();
    draw_pad_cur();
    wnd_open(0x676);
    func_8011F8D4();
    draw_pad(0x62C);
    txt_set(0x16A2);
    page_open(0x16A0);
    func_80124D08();
    func_80126330();
    func_8012214C();
    battle_state_dc400();
    /* s2/v0 gate -> L127E80 */
    txt_set(0x1B47);
    if (gate(2) != 0)
        goto L127E80;
    status_panel_install_labels();
L127E80:
    func_80138664();
    func_80126590();
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
    func_8011F6D4();
    midrow_pad88_run();
    midrow_degen();
    cell_clear_bank(0x1B46);
    sep_b();
    return;
}
