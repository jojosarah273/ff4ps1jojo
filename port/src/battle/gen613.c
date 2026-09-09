/* FF4 source-port — interpreted module for func_8014D5A0.
 * Ground truth: src/func_8014D5A0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8014D5A0(void)
{
    /* battle confirm: 5574(0x31/0x33)/6434(0x80) gates pick the
       0x80/0xC0/0x40 colors, 80177DAC commit. */
    func_800F9200();
    io_poll(0x31);
    if (io_just() != 0)
        goto L14D5E0;
    io_poll(0x33);
    if (io_just() == 0)
        goto L14D5F0;
L14D5E0:
    latch(0x80);
    goto L14D620;
L14D5F0:
    txt_set_cur();
    if (gate(0x80) != 0)
        goto L14D618;
    latch(0xC0);
    goto L14D620;
L14D618:
    latch(0x40);
L14D620:
    txt_draw_cur();
    row_close2();
    txt_draw_cur();
    latch(0xFF);
    txt_draw_cur();
    latch(2);
    txt_draw_cur();
    func_80177DAC();
    row_done();
    row_close();
    return;
}
