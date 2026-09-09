/* FF4 source-port — interpreted module for func_8013E200.
 * Ground truth: src/func_8013E200.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8013E200(void)
{
    /* battle item rows: 0x1/0x2/0x3/0x4/0x5 windows, 80143D64 +
       80143D14 + 8013DE38 rows. */
    row_page_cur();
    cell_cursor_dec();
    row_page_cur();
    sep_b();
    cell_pos_back(0x10);
    cell_put_cur();
    func_80143D64();
    cell_put(1);
    func_80143D14();
    cell_put(3);
    txt_cell_cur();
    cell_put(4);
    open_row(5);
    func_8013DE38();
    row_page_cur();
    sep_a();
    row_open_w(0x20);
    cell_put_cur();
    row_page(1);
    cell_put_cur();
    latch(0x40);
    cell_put(5);
    func_8013DE38();
    row_close2();
    cell_put_cur();
    return;
}
