/* FF4 source-port — interpreted module for func_8015E910.
 * Ground truth: src/func_8015E910.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8015E910(void)
{
    /* options cast: 0x2703 text, 0xD6/0xCF windows, 8015A374 +
       80153374 rows with 0x2A06/0x29EB/0x2B2A/0x2B2B cells. */
    txt_set(0x2703);
    txt_draw_cur();
    latch(6);
    cell_put(0xD6);
    row_page(0xCF);
    func_8015A374();
    latch(9);
    func_80153374();
    latch(0x40);
    cell_draw(0x2A06);
    row_page(0xCF);
    row_sel_cell_cur();
    txt_cell(0x29EB);
    cell_draw_cur();
    row_page(0xD4);
    cell_draw(0x2B2A);
    row_page(0xD5);
    cell_draw(0x2B2B);
    return;
}
