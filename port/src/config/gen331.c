/* FF4 source-port — interpreted module for func_8015D6C0.
 * Ground truth: src/func_8015D6C0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8015D6C0(void)
{
    /* options detail: 0xA6/0xA9/0xAA/0xD2 windows, 0x2005/0x2006/0x2004
       gates, 0x29EB/0x29E4 texts, 0x29C4/0x29F4 cells + 0x3535 title;
       confirm path draws via 3C3C(0xA9). */
    page(0xA6);
    txt_cell(0x2005);
    row_read(2);
    if (sel(0x202) != 0)
        return;
    txt_cell(0x2006);
    if (gate(0x80) != 0)
        return;
    txt_cell(0x2004);
    row_read(3);
    cell_set50_from40();
    cell_put(0xA9);
    io_poll(4);
    if (io_just() == 0)
        goto L15D7C8;
    txt_cell(0x2004);
    row_read(0xFC);
    cell_draw(0x2004);
    txt_cell(0x2003);
    cell_draw_cur();
    row_page(0xD2);
    row_sel_cell_cur();
    txt_set(0x29EB);
    row_read(0xF7);
    txt_draw(0x29EB);
    return;
L15D7C8:
    txt_cell(0x2004);
    cell_tick_or(cell_state(0xA9));
    cell_draw(0x2004);
    row_page(0xD2);
    row_sel_cell_cur();
    txt_cell(0x2A44);
    cell_put(0xA9);
    txt_cell(0x2A45);
    cell_put(0xAA);
    page_open(0x3535);
    row_page(0xA9);
    cell_draw(0x2A04);
    row_page(0xAA);
    cell_draw(0x2A05);
    latch(0x40);
    cell_draw(0x2A06);
    return;
}
