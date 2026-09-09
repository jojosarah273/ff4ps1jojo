/* FF4 source-port — interpreted module for func_8012DB9C.
 * Ground truth: src/func_8012DB9C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8012DB9C(void)
{
    /* config saves: 8011EF30/8011FBA4 rows, 0xC3/0xC6 windows with
       12/11 8188 row writes. */
    draw_pad_cur();
    func_8011EF30();
    draw_pad_cur();
    func_8011FBA4();
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
