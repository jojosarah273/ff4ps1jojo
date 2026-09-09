/* FF4 source-port — interpreted module for func_80162BD0.
 * Ground truth: src/func_80162BD0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80162BD0(void)
{
    /* options row: 8005FFEC prep, 0xCD/0x2005/0x357F windows/texts,
       80152CDC row; 6434 gate closes with 0x33A2-0x33A5 codes. */
    func_8005FFEC();
    row_page(0xCD);
    if (gate_cur() != 0)
        goto L162C10;
    row_read(0x7F);
    sep_a();
    row_open_w(5);
L162C10:
    func_80152CDC();
    page(0xA6);
    txt_cell(0x2005);
    row_read(0xFD);
    cell_draw(0x2005);
    row_page(0xCD);
    row_sel_cell_cur();
    txt_set(0x357F);
    cell_draw(0x29EA);
    row_page(0xCD);
    if (gate_cur() != 0)
        return;
    latch(0xDE);
    txt_draw(0x33C2);
    latch(0xF8);
    txt_draw(0x33C3);
    latch(4);
    txt_draw(0x33C4);
    latch(0xFF);
    txt_draw(0x33C5);
    return;
}
