/* FF4 source-port — interpreted module for config_row_x30_x3f_windows_x1b22_t.
 * Ground truth: src/config_row_x30_x3f_windows_x1b22_t.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void config_row_x30_x3f_windows_x1b22_t(void)
{
    /* config row: 0x30/0x3F windows, 0x1B22 text, 801267E8/
       8011F320/8011EF0C/801210AC/8011EF30/8011FBA4/8012B950 rows;
       gates 6434(2). */
    latch(0x30);
    cell_put(0x3F);
    fn_1x267e8();
    midrow_pad88();
    battle_state_dc400();
    midrow_paint_a();
    draw_pad_cur();
    battle_rows_sync();
    draw_pad_cur();
    battle_rows_29();
    txt_set(0x1B22);
    if (gate(2) != 0)
        goto L12BAB4;
    latch(5);
    draw_pad_cur();
    goto L12BAC8;
L12BAB4:
    latch_cur();
    draw_pad_cur();
L12BAC8:
    txt_draw(0x1BC1);
    battle_rows_sync();
    cell_clear_bank(0x1BC3);
    config_rows_x1bc3_x1bc1_texts_eac();
    return;
}
