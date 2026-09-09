/* FF4 source-port — interpreted module for func_8015D310.
 * Ground truth: src/func_8015D310.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8015D310(void)
{
    /* options row: 0xA6/0x2005/0x3530 windows/cells, 0x2A06/0x29EB
       cells, 8015310C row; 6434 gate. */
    page(0xA6);
    txt_cell(0x2005);
    row_read(0xBF);
    cell_draw(0x2005);
    page_open(0x3530);
    page_paint(0x2A06);
    latch(3);
    func_8015310C();
    page_open(0x3598);
    txt_cell(0x2A06);
    if (gate_cur() != 0)
        goto L15D398;
    page_paint(0x2A06);
    latch(1);
    cell_draw(0x2A04);
    page_paint(0x2A05);
L15D398:
    row_page(0xD2);
    row_sel_cell_cur();
    txt_cell(0x29EB);
    row_read(0x7F);
    cell_draw(0x29EB);
    return;
}
