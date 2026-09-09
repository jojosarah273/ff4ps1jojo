/* FF4 source-port — interpreted module for func_8015D4C8.
 * Ground truth: src/func_8015D4C8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8015D4C8(void)
{
    /* options/volume screen: 0xA6/0xA9/0xAA/0xD2 windows, 0x2005/0x2006
       gates, 0x2B2A/0x2B2B/0x3535 texts, 0x2A04-0x2A06 cells, 80152BC4
       + 80061C8C + 80150C38 rows. */
    page(0xA6);
    txt_cell(0x2005);
    row_read(2);
    if (sel(0x202) != 0)
        return;
    txt_cell(0x2006);
    if (gate(0x80) != 0)
        return;
    row_page(0xD2);
    row_sel_cell_cur();
    txt_cell(0x2B2A);
    cell_put(0xA9);
    txt_cell(0x2B2B);
    cell_put(0xAA);
    page_open(0x3535);
    row_page(0xA9);
    cell_draw(0x2A04);
    row_page(0xAA);
    cell_draw(0x2A05);
    latch(0x40);
    cell_draw(0x2A06);
    row_prep(0x20);
    page(0xA6);
    cell_sink8_9(0x2009);
    func_80152BC4();
    cell_put_hi9(0xA9);
    row_read2(0xA9);
    if (func_800F64EC(0x202) != 0)
        goto L15D5D8;
    func_800F62F0(0xA9);
L15D5D8:
    sep();
    row_prep_close();
    row_page(0xD2);
    row_sel_cell_cur();
    row_page(0xA9);
    cell_draw(0x34D4);
    row_page(0xAA);
    cell_draw(0x34D5);
    func_80061C8C();
    latch(0xF8);
    txt_draw(0x33C2);
    latch(3);
    txt_draw(0x33C3);
    latch(0x35);
    txt_draw(0x34CA);
    latch(5);
    func_80150C38();
    func_80059AF4();
    latch(0x11);
    func_80150C38();
    latch(0xC);
    func_80150C38();
    latch(0x10);
    func_80150C38();
    return;
}
