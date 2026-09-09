/* FF4 source-port — interpreted module for func_80163774.
 * Ground truth: src/func_80163774.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80163774(void)
{
    /* options: 0x11/0x34C8/0x34C7/0xA6/0x2017 texts, 8015329C row;
       gate 5574(0x63). */
    latch(0x11);
    txt_draw(0x34C8);
    latch(0x10);
    txt_draw(0x34C7);
    page(0xA6);
    sep_a();
    txt_cell(0x2017);
    row_open_w(0x10);
    io_poll(0x63);
    if (io_go() == 0)
        goto L1637DC;
    latch(0x63);
L1637DC:
    cell_draw(0x2017);
    latch(0x12);
    txt_draw(0x34CA);
    config_row_5329c();
    return;
}
