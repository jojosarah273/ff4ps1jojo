/* FF4 source-port — interpreted module for rows_x48c0_x1a71_texts_xe0_window.
 * Ground truth: src/rows_x48c0_x1a71_texts_xe0_window.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void rows_x48c0_x1a71_texts_xe0_window(void)
{
    /* rows: 0x48C0/0x1A71 texts, 0xE0 window, 8012807C/801257BC/
       80120E2C/8011EF30/8011FB74 rows. */
    wnd_open(0x48C0);
    label(0x1A71);
    fn_1x2807c();
    status_row_x16a8_x1a71_x1a73_texts();
    open_row(0xE0);
    midrow_paint_b();
    draw_pad_cur();
    battle_rows_sync();
    draw_pad_cur();
    func_8011FB74();
    return;
}
