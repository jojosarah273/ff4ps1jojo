/* FF4 source-port — interpreted module for ability_rows_e2c_fba4_e9c_aac0_ef3.
 * Ground truth: src/ability_rows_e2c_fba4_e9c_aac0_ef3.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void ability_rows_e2c_fba4_e9c_aac0_ef3(void)
{
    /* ability rows: 80120E2C/8011FBA4/80126528/80120E9C/8012AAC0/
       8011EF30/801264C0/801391D4 rows, 0x11/0xE2/0x99 window/cells. */
    midrow_paint_b();
    draw_pad_cur();
    battle_rows_29();
    config_row_26528();
    fn_1x20e9c();
    fn_1x2aac0();
    latch(0x11);
    cell_put(0xE2);
    wnd_open_cur();
    tail(0x99);
    midrow_paint_b();
    draw_pad_cur();
    battle_rows_sync();
    config_row_264e8();
    config_row_26528();
    fn_1x391d4();
    return;
}
