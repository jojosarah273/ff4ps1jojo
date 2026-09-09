/* FF4 source-port — interpreted module for func_800FEB10.
 * Ground truth: src/func_800FEB10.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_800FEB10(void)
{
    /* shop rows: 0x79 window + 0x6F/0x6E stamp rows, 0x4209/0x2126/
       0x2127 texts, 0x677/0xA1 windows; closes on 0x2A5 text. */
    row_page(0x79);
    row_sel_cell_cur();
    func_800F9690();
    latch(0x6F);
    sep_b();
    func_800F7F48(cell_peek_cur());
    func_800F96E0();
    func_800F8E50(0x4209);
    latch(0x80);
    sep_b();
    func_800F7F48(cell_peek_cur());
    txt_draw(0x2126);
    latch(0x7F);
    sep_a();
    cell_poke0(cell_peek_cur());
    txt_draw(0x2127);
    row_page(0x79);
    func_800F7864();
    sep_a();
    row_open_w(3);
    txt_draw(0x677);
    latch(0xA1);
    txt_draw(0x4200);
    return;
}
