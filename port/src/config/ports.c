/* FF4 source-port — interpreted module for func_8016046C.
 * Ground truth: src/func_8016046C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8016046C(void)
{
    /* options ports: 0x8A window, 0x29B5/0x29CD texts, 0x88/0xDF/0xE1/
       0xE3 windows, 0x2003-0x200A cells, 0xD6/0x88 windows,
       8015240C/8015A374/80153374 rows. */
    page(0x8A);
    cell_draw(0x29B5);
    cell_state_of();
    cell_dispatch_cur();
    page_paint2(0x29CD);
    sep_a();
    row_page(0x8A);
    row_open_w(5);
    cell_put(0x88);
    cell_put(0xDF);
    latch(0x80);
    cell_put(0xE1);
    options_row_run();
    page(0xE3);
    page_paint(0x2003);
    page_paint(0x2004);
    page_paint(0x2005);
    page_paint(0x2006);
    txt_cell(0x2009);
    cell_draw(0x2007);
    txt_cell(0x200A);
    cell_draw(0x2008);
    open_row(0xD6);
    row_page(0x88);
    func_8015A374();
    latch(3);
    func_80153374();
    page_paint(0x2A06);
    row_page(0x88);
    row_sel_cell_cur();
    latch(0x40);
    cell_draw(0x29EB);
    key_page(0x8A);
    return;
}
