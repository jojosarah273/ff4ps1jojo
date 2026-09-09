/* FF4 source-port — interpreted module for func_8014D780.
 * Ground truth: src/func_8014D780.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8014D780(void)
{
    /* battle item flow: 4248(8)/4120(2) gate routes to 8014D748 rows
       vs the 0x20/0x4200 alt rows; L14D7F8 renders 6CF4/81B0 cells and
       closes with the 0x7/0x1D9 stat writes. */
    row_open();
    func_800F9200();
    row_read(8);
    if (sel(2) != 0)
        goto L14D8DC;
    row_close2();
    func_800F9200();
    row_read(0xF0);
    if (sel(0x202) != 0)
        goto L14D7F8;
    func_8014D748();
    row_close2();
    row_close();
    return;
L14D7F8:
    row_prep(0x20);
    func_800F6CF4();
    func_800F81B0();
    sep();
    row_prep_close();
    row_close2();
    row_read(7);
    txt_draw_cur();
    page_paint2_cur();
    func_800F8F74();
    func_800F8F74();
    row_close();
    return;
L14D8DC:
    row_close2();
    func_800F9200();
    row_read(0xE0);
    txt_draw_cur();
    row_close2();
    func_800F9200();
    latch(0x1F);
    txt_draw_cur();
    txt_draw_cur();
    txt_draw_cur();
    func_800F8F74();
    func_800F8F74();
    row_close2();
    row_read(7);
    txt_draw_cur();
    row_close();
    return;
}
