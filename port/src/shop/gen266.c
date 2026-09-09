/* FF4 source-port — interpreted module for func_80163950.
 * Ground truth: src/func_80163950.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80163950(void)
{
    /* options row screen: 5574 key ladder (0xDE/0xB0/0x6D/0x61 codes)
       routes to the 0x289C/0x289F stat rows (801526F8 header, 80152BC4
       detail, 0x321D/0x3228 text cells, 0xC7 window); exit at L163B78. */
    if (io_just() != 0)
        return;
    io_poll(0xDE);
    if (io_go() != 0)
        return;
    io_poll(0xB0);
    if (io_go() != 0)
        goto L163AD0;
    io_poll(0x6D);
    if (io_go() != 0)
        return;
    io_poll(0x61);
    if (io_go() == 0)
        goto L1639E0;
    latch_cur();
    if (gate(2) != 0)
        goto L163B70;
L1639E0:
    tail(0xE5);
    wnd_open_cur();
    tail(0x80);
    latch(0xF);
    cell_put(0x82);
    latch(8);
    func_801526F8();
    func_800F9200();
    txt_set(0x289C);
    func_80152BC4();
    row_read(8);
    cell_put(0xC7);
    row_close2();
    tail(0xE5);
    wnd_open_cur();
    tail(0x80);
    latch(0xF);
    cell_put(0x82);
    latch(6);
    func_801526F8();
    page(0xAB);
    txt_set(0x289F);
    cell_draw(0x321D);
    goto L163B48;
L163AD0:
    sep_b();
    func_800F8058(0xB0);
    tail(0xE5);
    wnd_open_cur();
    tail(0x80);
    latch(0xF);
    cell_put(0x82);
    latch(6);
    func_801526F8();
    page(0xAB);
    txt_set(0x289F);
    cell_draw(0x321D);
L163B48:
    txt_set(0x289C);
    row_read(0xE0);
    func_800F78C4(cell_state(0xC7));
    func_800F7864();
L163B70:
    cell_draw(0x3228);
    return;
}
