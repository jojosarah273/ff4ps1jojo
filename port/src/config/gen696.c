/* FF4 source-port — interpreted module for func_8015A374.
 * Ground truth: src/func_8015A374.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8015A374(void)
{
    /* options value table: 0x3558/0x2060/0x2061/0x203B texts, 0xA9/
       0xAA windows, 80152CDC header; the 10-entry jr-a0 dispatch picks
       8015A524 / 8015A5B8 / 8015A670 / 8015A784 / 8015A89C /
       8015A91C / 8015A9BC / 8015AA6C / 8015A614; the table tail runs
       on the selected value-row and returns at L15A514. */
    func_800F8F74(0x3558);
    io_poll(5);
    if (io_go() == 0)
        goto L15A3A8;
    page_paint2(0x3558);
L15A3A8:
    func_80152CDC();
    page(0xA6);
    txt_cell(0x2060);
    cell_put(0xA9);
    txt_cell(0x2061);
    cell_put(0xAA);
    txt_cell(0x203B);
    func_800F8E50();
    row_open();
    row_page(0xD6);
    row_sel_cell_cur();
    row_sel_cell2_cur();
    row_close();
    return;
}
