/* FF4 source-port — interpreted module for func_8011AB18.
 * Ground truth: src/func_8011AB18.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8011AB18(void)
{
    /* shop main: 0xCA window + 0x1700 gate picks the buy (800FEC74/
       800FD914/800FB09C/800FB160/800FB224/800FAA04) sub-rows; tail
       via 8017F9A8/800FED3C or close 0x81/0x4200. */
    cell_cursor_dec();
    row_page(0xCA);
    if (gate(0x202) != 0)
        goto L11AB50;
    func_800FEC74();
    goto L11AB78;
L11AB50:
    row_page(0x80);
    if (gate(2) != 0)
        goto L11AB78;
    latch_cur();
    func_800FD914();
L11AB78:
    row_close2();
    txt_draw(0x1700);
    if (gate(0x202) != 0)
        goto L11ABA8;
    func_800FB09C();
    goto L11AC00;
L11ABA8:
    io_poll(1);
    if (io_just() == 0)
        goto L11ABD0;
    func_800FB160();
    goto L11AC00;
L11ABD0:
    io_poll(2);
    if (io_just() == 0)
        goto L11ABF8;
    func_800FB224();
    goto L11AC00;
L11ABF8:
    func_800FAA04();
L11AC00:
    row_page(0xCA);
    if (gate(0x202) != 0)
        goto L11AC3C;
    func_8017F9A8();
    func_800FED3C();
    return;
L11AC3C:
    key_page(0xCA);
    latch(0x81);
    txt_draw(0x4200);
    return;
}
