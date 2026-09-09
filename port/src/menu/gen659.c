/* FF4 source-port — interpreted module for func_800FDF34.
 * Ground truth: src/func_800FDF34.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_800FDF34(void)
{
    /* shop title: 0x7C window, 0x2115 title + 0x4209 row, 800FDA9C +
       8018226C(0x3800); close via 62BC(0x7C). */
    latch(0x80);
    txt_draw(0x2115);
    row_page(0x7C);
    func_800F7864();
    row_read(0xF);
    func_800F9690();
    func_800F9690();
    func_800FDA9C();
    row_page(0x7C);
    func_800F7864();
    row_read(0xF);
    func_800F9690();
    sep_a();
    row_open_w(0x40);
    func_800F9690();
    func_800FDA9C();
    func_8018226C(0x3800);
    key_page(0x7C);
    return;
}
