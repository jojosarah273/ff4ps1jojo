/* FF4 source-port — interpreted module for func_80122A9C.
 * Ground truth: src/func_80122A9C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80122A9C(void)
{
    /* config rows: 8012281C/80120E2C/8011EF30/80120F1C/8011FB74
       rows, 0x1A02 text, 0x24 window; gate 6434(0x202). */
    func_8012281C();
    func_80120E2C();
    draw_pad_cur();
    func_8011EF30();
    draw_pad_cur();
    func_8011EF30();
    func_80120F1C();
    draw_pad_cur();
    func_8011FB74();
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
