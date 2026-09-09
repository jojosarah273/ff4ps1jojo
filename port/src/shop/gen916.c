/* FF4 source-port — interpreted module for func_8016FFC0.
 * Ground truth: src/func_8016FFC0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8016FFC0(void)
{
    /* shop rows: 0x88 window + 0x2100/0x2115 titles; linear. */
    row_open2();
    sep();
    func_800F9200();
    row_pad();
    latch(0x80);
    txt_draw(0x2100);
    cell_put(0x88);
    latch(0x80);
    txt_draw(0x2115);
    row_pad();
    return;
}
