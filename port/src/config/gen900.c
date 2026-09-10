/* FF4 source-port — interpreted module for config_rows_c_e2c_ef30_f1c_fb74_ro.
 * Ground truth: src/config_rows_c_e2c_ef30_f1c_fb74_ro.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void config_rows_c_e2c_ef30_f1c_fb74_ro(void)
{
    /* config rows: 8012281C/80120E2C/8011EF30/80120F1C/8011FB74
       rows, 0x1A02 text, 0x24 window; gate 6434(0x202). */
    fn_1x2281c();
    midrow_paint_b();
    draw_pad_cur();
    battle_rows_sync();
    draw_pad_cur();
    battle_rows_sync();
    config_row_d600b();
    draw_pad_cur();
    fn_1x1fb74();
    txt_set(0x1A02);
    if (gate(0x202) != 0)
        return;
    latch(0x24);
    txt_draw_cur();
    txt_draw_cur();
    txt_draw_cur();
    txt_draw_cur();
    txt_draw_cur();
    return;
}
