/* FF4 source-port — interpreted module for func_80162A70.
 * Ground truth: src/func_80162A70.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80162A70(void)
{
    /* options music: 0xCD/0xCE windows, 0x33C4/0x34CA/0x352E/0x2005/
       0x2051/0x2A2A texts, 8015329C/80153374 rows; 6434(0x80) gate. */
    row_page(0xCD);
    if (gate(0x80) != 0)
        goto L162AD8;
    row_page(0xCE);
    if (gate(0x80) != 0)
        goto L162AD8;
    latch(0xD3);
    txt_draw(0x33C4);
    latch_cur();
    txt_draw(0x34CA);
    func_8015329C();
    return;
L162AD8:
    page_paint2(0x390A);
    wnd_open(4);
    tail(0xD4);
    latch(3);
    func_80153374();
    latch(8);
    cell_draw(0x2A06);
    page(0xA6);
    txt_cell(0x2005);
    cell_draw_cur();
    row_page(0xCD);
    if (gate_cur() != 0)
        goto L162B68;
    latch(0xDE);
    goto L162B70;
L162B68:
    latch(0x1E);
L162B70:
    cell_draw(0x2051);
    row_page(0xCD);
    row_sel_cell_cur();
    txt_cell(0x29EA);
    txt_draw(0x357F);
    latch(0x40);
    cell_draw(0x29EA);
    return;
}
