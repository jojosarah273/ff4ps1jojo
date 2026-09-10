/* FF4 source-port — interpreted module for config_row_x30_x31_windows_x8d_x8a.
 * Ground truth: src/config_row_x30_x31_windows_x8d_x8a.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void config_row_x30_x31_windows_x8d_x8a(void)
{
    /* config row: 0x30/0x31 windows, 0x8D/0x8A/0x1D/0x1F/0x121/0x122
       texts, 801266F0/8016EA7C/80126610/8011EE34/801241B8/8011F6A4/
       8011F864/80139E34/801240A8/801240D0/80126418/80122A24/
       80126480/80126590; linear render. */
    latch(0x30);
    cell_put(0x3F);
    rows_x100_x1c_x41_windows_f0_x89_c();
    wnd_open_cur();
    tail(0x8D);
    tail(0x8A);
    shop_row_kick_f0();
    battle_row_88();
    latch(0x13);
    cell_pull_c8_lo(0x212C);
    wnd_open(0x4040);
    tail(0x1D);
    wnd_open_cur();
    tail(0x1F);
    latch(0x1E);
    txt_draw(0x121);
    wnd_open(0x20);
    label(0x122);
    battle_rows_2115();
    midrow_paint_c();
    anim_noop();
    func_8011F864();
    battle_mode_dispatch();
    fn_1x39e34();
    battle_row_88();
    latch(0x1F);
    cell_pull_c8_lo(0x212C);
    config_row_a600();
    fn_1x240d0();
    fn_1x26418();
    midrow_paint_c();
    fn_1x22a24();
    anim_noop();
    fn_1x26480();
    fn_1x26590();
    return;
}
