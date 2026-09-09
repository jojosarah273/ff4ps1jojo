/* FF4 source-port — interpreted module for func_8013F49C.
 * Ground truth: src/func_8013F49C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8013F49C(void)
{
    /* battle rows: 0x47/0x1C/0x1E/0x22/0x20 windows, 8013F354 row,
       0x2A16/0x2A1E texts. */
    row_open();
    row_page(0x47);
    func_800F6C68();
    txt_cell(0x2A16);
    tail(0x1C);
    wnd_open(0xA);
    tail(0x1E);
    func_8013F354();
    row_page(0x22);
    sep_a();
    row_open_w(0x70);
    txt_draw_cur();
    row_page(0x20);
    sep_a();
    row_open_w(0x70);
    txt_draw_cur();
    row_close();
    latch(4);
    cell_draw_cur();
    latch(9);
    txt_draw_cur();
    return;
}
