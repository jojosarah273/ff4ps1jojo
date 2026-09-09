/* FF4 source-port — interpreted module for func_8015B8E4.
 * Ground truth: src/func_8015B8E4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8015B8E4(void)
{
    /* config status-row screen. 5574 key-codes 8/C/10 pick the row variant;
       tails L5BB84 (close B3) and L5BB8C (return) are shared. */
    page(0xA6);
    open_row(0xB3);
    io_poll(8);
    if (io_just() != 0)
        goto L5B994;
    io_poll(0xC);
    if (io_just() != 0)
        goto L5B9FC;
    io_poll(0x10);
    if (io_just() != 0)
        goto L5BA6C;
    txt_cell(0x2033);
    if (gate(2) != 0)
        goto L5B974;
    io_poll(0x61);
    if (io_go() == 0)
        return;
L5B974:
    txt_cell(0x2035);
    if (gate(2) != 0)
        goto L5BB84;
    io_poll(0x61);
    goto L5B9DC;
L5B994:
    txt_cell(0x2033);
    if (gate(2) == 0)
        goto L5B9C4;
    txt_cell(0x2035);
    if (gate(2) != 0)
        goto L5BB84;
L5B9C4:
    io_poll(0x44);
    if (io_go() == 0)
        goto L5BB84;
    io_poll(0x4D);
L5B9DC:
    io_poll_cur();
    if (io_go() != 0)
        goto L5BB84;
    return;
L5B9FC:
    txt_cell(0x2033);
    if (gate(2) != 0)
        goto L5BB84;
    io_poll(0x4D);
    if (io_go() == 0)
        goto L5BB84;
    io_poll(0x61);
    if (io_go() != 0)
        goto L5BB84;
    txt_cell(0x2035);
    if (gate(2) != 0)
        goto L5BB84;
    if (io_just() == 0)
        return;
L5BA6C:
    row_open();
    page_open(0x3536);
    row_open();
    page(0xA6);
    txt_cell(0x2003);
    row_read(0x3C);
    if (sel(0x202) != 0)
        goto L5BB64;
    wnd_open(1);
    row_page(0xD0);
    if (io_press(cell_state(0x3539)) != 0)
        goto L5BAE4;
    cell_set50_from54();
L5BAE4:
    txt_cell(0x3539);
    func_80152CDC();
    page(0xA6);
    txt_cell(0x2003);
    row_read(0xFC);
    if (sel(0x202) != 0)
        goto L5BB64;
    txt_cell(0x2004);
    row_read(0x3C);
    if (sel(0x202) != 0)
        goto L5BB64;
    txt_cell(0x2005);
    row_read(0x40);
    if (sel(0x202) != 0)
        goto L5BB64;
    poll_pair(0xB3);
L5BB64:
    row_close();
    label(0x3536);
    row_close();
    tail(0xA6);
L5BB84:
    key_page(0xB3);
    return;
}
