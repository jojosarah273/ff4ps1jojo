/* FF4 source-port — interpreted module for func_800FE9F8.
 * Ground truth: src/func_800FE9F8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_800FE9F8(void)
{
    /* shop rows: 0x7F/0x79/0x6F windows, 0x4209 texts; 6434/0xB1
       gates close on 0x2100/0x4200 titles. */
    row_page(0x7F);
    if (gate(0x202) != 0)
        goto L8FEAF0;
    row_page(0x79);
    row_sel_cell_cur();
    func_800F9690();
    latch(0x6F);
    sep_a();
    cell_poke0(cell_peek_cur());
    func_800F96E0();
    func_800F8E50(0x4209);
    row_page(0xB1);
    if (gate(0x202) != 0)
        goto L8FEAD8;
    latch(0xF);
    goto L8FEAE0;
L8FEAD8:
    row_page(0x80);
L8FEAE0:
    txt_draw(0x2100);
    return;
L8FEAF0:
    latch(0x81);
    txt_draw(0x4200);
    return;
}
