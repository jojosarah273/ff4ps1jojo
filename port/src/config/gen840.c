/* FF4 source-port — interpreted module for func_8012BA14.
 * Ground truth: src/func_8012BA14.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8012BA14(void)
{
    /* config row: 0x30/0x3F windows, 0x1B22 text, 801267E8/
       8011F320/8011EF0C/801210AC/8011EF30/8011FBA4/8012B950 rows;
       gates 6434(2). */
    latch(0x30);
    cell_put(0x3F);
    func_801267E8();
    func_8011F320();
    func_8011EF0C();
    func_801210AC();
    draw_pad_cur();
    func_8011EF30();
    draw_pad_cur();
    func_8011FBA4();
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
    func_8011EF30();
    cell_clear_bank(0x1BC3);
    func_8012B950();
    return;
}
