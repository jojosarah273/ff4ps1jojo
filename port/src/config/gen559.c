/* FF4 source-port — interpreted module for func_80155658.
 * Ground truth: src/func_80155658.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80155658(void)
{
    /* options row: 0x8A window, 0x29B5/0x29CD/0xDF/0xE1/0xE3/0x2003/
       0x29EB texts, 8015240C row; 5B2C(3B04(0xA9))+5D24(0x29CD)
       gates. */
    sep_a();
    row_open_w(5);
    cell_put(0x8A);
    txt_cell(0x29B5);
    cell_put(0xA9);
    latch(0xFF);
    cell_draw(0x29B5);
    row_page(0xA9);
    func_800F5B2C(cell_state_of());
    func_800F5D24(0x29CD);
    row_page(0x8A);
    cell_put(0xDF);
    latch(0x80);
    cell_put(0xE1);
    func_8015240C();
    page(0xE3);
    latch(0x80);
    cell_draw(0x2003);
    row_page(0x8A);
    row_sel_cell_cur();
    page_paint(0x29EB);
    return;
}
