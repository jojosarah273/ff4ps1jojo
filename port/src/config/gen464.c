/* FF4 source-port — interpreted module for main_menu_option_config_tab_x210c.
 * Ground truth: src/main_menu_option_config_tab_x210c.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void main_menu_option_config_tab_x210c(void)
{
    /* main-menu option 0 (config tab): 0x210C header + 0x1F/0x1C/0x1B/
       0xAE windows, 0x1BA5/0x1BC9/0x1B1D rows; home-row renders through
       80121124/801210AC/80126920/801263F0/80120F1C, then the 8012AAC0/
       80120F94/80120CA4 option cells and 8012A190 sub-menu gate. */
    cell_clear_bank(0x1B1F);
    fn_1x267a0();
    rows_x100_x1c_x41_windows_f0_x89_c();
    config_row_a600();
    config_row_d600b();
    latch(0x1C);
    cell_put(0xC2);
    latch(6);
    cell_put(0xAE);
    midrow_paint_c();
    midrow_pad88_run();
    latch(0x1B);
    cell_pull_c8_lo(0x212C);
    draw_pad_cur();
    wnd_open_cur();
    v0_s0_branch();
    midrow_paint_a();
    draw_pad_cur();
    func_8011FB74();
    latch(3);
    fn_1x26920();
    config_row_f320();
    battle_state_dc400();
    page_open(0x1BA5);
    tail(0x93);
    shop_row_kick_f0();
    page_paint2(0x1BC9);
    wnd_open_cur();
    label(0x1B1D);
    func_80120F94();
    func_8012AAC0();
    shop_row_kick_f0();
    battle_row_45b();
    fn_1x2a190();
    /* v0/v1 gate -> L12A180 */
    midrow_paint_c();
    midrow_pad88_run();
    page(0x93);
    label(0x1BA5);
    func_80120F94();
    fn_1x20ca4();
    config_row_a600();
    fn_1x26830();
    config_row_f320();
    battle_state_dc400();
    config_row_d600b();
    latch(0x1C);
    cell_put(0xC2);
    latch(0x86);
    cell_put(0xAE);
    draw_pad_cur();
    wnd_open_cur();
    v0_s0_branch();
    config_rows_c_e2c_ef30_f1c_fb74_ro();
    fn_1x22a24();
    midrow_pad88_run();
    latch(0x1F);
    cell_pull_c8_lo(0x212C);
    cell_clear_bank(0x1BC9);
    battle_mode_dispatch();
    battle_row_45b();
    return;
}
