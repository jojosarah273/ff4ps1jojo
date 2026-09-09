/* FF4 source-port — interpreted module for func_8015D3E8.
 * Ground truth: src/func_8015D3E8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"






extern void func_8015A374(void);

extern void func_80153374(void);

void func_8015D3E8(void) {
    page(0xA6);
    txt_cell(0x2004);
    row_read(0xCF);
    cell_draw(0x2004);
    open_row(0xD6);
    row_page(0xD2);
    func_8015A374();
    latch(0x3);
    func_80153374();
    page_paint(0x2A06);;
}
