/* FF4 source-port — interpreted module for func_80150B88.
 * Ground truth: src/func_80150B88.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80150B88(void)
{
    /* options rows: 0x353E/0x353F texts, 80150C38 row; gates
       5F20(0x202)/5574(2)/6434(0x202). */
    txt_set(0x353E);
    txt_draw_cur();
    if (func_800F5F20(0x202) != 0)
        return;
    txt_set(0x353F);
    io_poll(2);
    if (io_just() == 0)
        goto L150BF8;
    latch_cur();
    txt_draw(0x353F);
L150BF8:
    txt_set(0x353F);
    if (gate(0x202) == 0)
        goto L150C20;
    latch(0xD);
    func_80150C38();
L150C20:
    page_paint2(0x353F);
    return;
}
