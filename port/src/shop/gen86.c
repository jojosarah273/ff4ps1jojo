/* FF4 source-port — interpreted module for func_80161A00.
 * Ground truth: src/func_80161A00.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80161A00(void)
{
    /* options/config screen: 0xCD window + 3539 text gate (80152CDC),
       0xA6/0x2003 cursor row; branch L161AC8 runs the 26D0-26D3/
       2050-2053 stat cell block (8015A374/80153374) and commits
       6240(0x390A); other paths route to 80161C48. */
    wnd_open(1);
    row_page(0xCD);
    if (io_press(cell_state(0x3539)) != 0)
        goto L161A40;
    cell_set50_from54();
L161A40:
    txt_cell(0x3539);
    options_rows_run();
    page(0xA6);
    txt_cell(0x2003);
    row_read(0xC0);
    if (sel(2) == 0)
        goto L161AB8;
    txt_cell(0x2004);
    row_read(0x3C);
    if (sel(2) == 0)
        goto L161AB8;
    txt_cell(0x2005);
    row_read(0x40);
    if (sel(2) != 0)
        goto L161AC8;
L161AB8:
    func_80161C48();
    return;
L161AC8:
    txt_cell(0x2005);
    cell_draw_cur();
    txt_set(0x26D0);
    cell_draw(0x2050);
    txt_set(0x26D3);
    cell_draw(0x2053);
    latch(0x20);
    cell_draw(0x2051);
    page_open(0x3530);
    tail(0x92);
    latch(0x20);
    txt_draw(0x397B);
    latch(0xC);
    cell_put(0xD6);
    row_page(0xCD);
    func_8015A374();
    latch(3);
    func_80153374();
    latch(8);
    cell_draw(0x2A06);
    sep_a();
    row_page(0x92);
    row_open_w(3);
    cell_put(0x92);
    row_page(0x93);
    row_open_w0();
    cell_put(0x93);
    page(0x92);
    row_page(0xD4);
    cell_draw(0x2A04);
    row_page(0xD5);
    cell_draw(0x2A05);
    latch(8);
    cell_draw(0x2A06);
    page(0xA6);
    txt_cell(0x2005);
    cell_draw_cur();
    latch(0x20);
    cell_draw(0x2051);
    page_paint2(0x390A);
    return;
}
