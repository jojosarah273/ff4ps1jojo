/* FF4 source-port — interpreted module for func_8015D8F0.
 * Ground truth: src/func_8015D8F0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8015D8F0(void)
{
    /* options rows: 0xA6/0x2005/0x29EB cells, 0xD2 window;
       gates 4120(0x202)/6434(0x80). */
    page(0xA6);
    txt_cell(0x2005);
    row_read(2);
    if (sel(0x202) != 0)
        return;
    txt_cell(0x2006);
    if (gate(0x80) != 0)
        return;
    page(0xA6);
    txt_cell(0x2003);
    cell_draw_cur();
    row_page(0xD2);
    row_sel_cell_cur();
    page_paint(0x29EB);
    return;
}
