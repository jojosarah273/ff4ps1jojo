/* FF4 source-port — interpreted module for func_8015E464.
 * Ground truth: src/func_8015E464.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8015E464(void)
{
    /* options stat row: 0xA6/0xA9/0xAB/0xE3/0xA6 windows, 0x2050-0x2053
       cells, 80152224 + 8015240C + 80153098/8015316C rows; loop
       L15E4BC polls 6434(0x202)/4120(0x202). */
    page(0xA6);
    latch(0x80);
    cell_draw(0x2050);
    page_paint(0x2051);
    page_paint(0x2054);
    page_paint(0x2053);
    txt_cell(0x2004);
    row_read(8);
    if (sel(2) != 0)
        goto L15E5D0;
L15e4bc:
    for (;;) {
        wnd_open_cur();
        latch(4);
        config_banner_96();
        cell_put(0xA9);
        cell_put(0xDF);
        txt_cell(0x3540);
        if (gate(0x202) != 0)
            continue;
        latch(0x80);
        cell_put(0xAB);
        options_row_run();
        page(0xE3);
        txt_cell(0x2003);
        row_read(0xC0);
        if (sel(0x202) != 0)
            continue;
        txt_cell(0x2005);
        row_read(0x82);
        if (sel(0x202) != 0)
            continue;
        txt_cell(0x2006);
        if (gate(0x80) != 0)
            continue;
        row_page(0xA9);
        sep();
        option_mark_54();
        page(0xA6);
        cell_draw(0x2054);
        break;
    }
    return;
L15E5D0:
    func_8015316C();
    cell_put(0xA9);
    sep_a();
    row_open_w(5);
    txt_cell(0x3540);
    if (gate(0x202) != 0)
        goto L15E5D0;
    row_page(0xA9);
    sep();
    option_mark_54();
    page(0xA6);
    cell_draw(0x2053);
    return;
}
