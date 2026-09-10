/* FF4 source-port — interpreted module for config_saves_ef30_fba4_rows_xc3_xc.
 * Ground truth: src/config_saves_ef30_fba4_rows_xc3_xc.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void config_saves_ef30_fba4_rows_xc3_xc(void)
{
    /* config saves: 8011EF30/8011FBA4 rows, 0xC3/0xC6 windows with
       12/11 8188 row writes. */
    draw_pad_cur();
    battle_rows_sync();
    draw_pad_cur();
    battle_rows_29();
    latch(0xC3);
    txt_draw_cur();
    txt_draw_cur();
    txt_draw_cur();
    txt_draw_cur();
    txt_draw_cur();
    txt_draw_cur();
    txt_draw_cur();
    txt_draw_cur();
    txt_draw_cur();
    txt_draw_cur();
    txt_draw_cur();
    latch(0xC6);
    txt_draw_cur();
    txt_draw_cur();
    txt_draw_cur();
    latch(0xC7);
    txt_draw_cur();
    txt_draw_cur();
    return;
}
