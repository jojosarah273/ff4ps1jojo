/* FF4 source-port — interpreted module for options_seeds_xd0_x393d_x393f_x393.
 * Ground truth: src/options_seeds_xd0_x393d_x393f_x393.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void options_seeds_xd0_x393d_x393f_x393(void)
{
    /* options seeds: 0xD0/0x393D/0x393F/0x3932 windows/texts, 0xAB/0xAD
       rows, 8015236C/80152DE4/8015240C; ends on 0xA6/0x2065/0x2066
       cells. */
    row_page(0xD0);
    label(0x393D);
    page(0xAB);
    label(0x393F);
    fn_1x5236c();
    page_open(0x3941);
    label(0x3966);
    page(0xAD);
    label(0x3968);
    fn_1x52de4();
    txt_set(0x3931);
    cell_put(0xDF);
    latch(4);
    cell_put(0xE1);
    options_row_run();
    page(0xE3);
    label(0x3966);
    page_open(0x3942);
    label(0x3968);
    fn_1x52de4();
    page(0xA6);
    txt_set(0x3942);
    cell_draw(0x2055);
    cell_put(0x80);
    txt_set(0x3943);
    cell_draw(0x2056);
    cell_put(0x81);
    return;
}
