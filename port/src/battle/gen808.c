/* FF4 source-port — interpreted module for func_80109774.
 * Ground truth: src/func_80109774.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80109774(void)
{
    /* shop choose (twin): 0x7F/0xDF/0xBB windows, 0x4209/0x420A
       texts; gate 6434(0x202). */
    row_page(0x7F);
    if (gate(0x202) != 0)
        goto L109824;
    row_page(0xDF);
    sep_a();
    row_open_w(0x14);
    txt_draw(0x4209);
    func_800F8F74(0x420A);
    row_page(0xBB);
    return;
L109824:
    row_page_cur();
    sep_a();
    row_open_w(5);
    latch_cur();
    txt_draw(0x4200);
    return;
}
