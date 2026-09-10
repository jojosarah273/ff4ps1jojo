/* FF4 source-port — interpreted module for shop_main_xca_window_x1700_gate_pi.
 * Ground truth: src/shop_main_xca_window_x1700_gate_pi.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void shop_main_xca_window_x1700_gate_pi(void)
{
    /* shop main: 0xCA window + 0x1700 gate picks the buy (800FEC74/
       800FD914/800FB09C/800FB160/800FB224/800FAA04) sub-rows; tail
       via 8017F9A8/800FED3C or close 0x81/0x4200. */
    cell_cursor_dec();
    row_page(0xCA);
    if (gate(0x202) != 0)
        goto L11AB50;
    cell_0xfec74();
    goto L11AB78;
L11AB50:
    row_page(0x80);
    if (gate(2) != 0)
        goto L11AB78;
    latch_cur();
    shop_rows2_run();
L11AB78:
    row_close2();
    txt_draw(0x1700);
    if (gate(0x202) != 0)
        goto L11ABA8;
    shop_view2_run();
    goto L11AC00;
L11ABA8:
    io_poll(1);
    if (io_just() == 0)
        goto L11ABD0;
    cell_0xfb160();
    goto L11AC00;
L11ABD0:
    io_poll(2);
    if (io_just() == 0)
        goto L11ABF8;
    cell_0xfb224();
    goto L11AC00;
L11ABF8:
    cell_0xfaa04();
L11AC00:
    row_page(0xCA);
    if (gate(0x202) != 0)
        goto L11AC3C;
    stack_swap_trick_sp_swapped_throug();
    shop_banner_xd9_x7a_x79_xb1_window();
    return;
L11AC3C:
    key_page(0xCA);
    latch(0x81);
    txt_draw(0x4200);
    return;
}
