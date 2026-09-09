/* FF4 source-port — interpreted module for func_8015B284.
 * Ground truth: src/func_8015B284.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8015B284(void)
{
    /* config row: 0x353D text, 0xE5/0x82/0xAB/0xAC windows,
       801526F8 header; 5574 ladders (0x6D/0xDE/0xB0) route the
       43A0(0xA9)/41E8(0x202) gates. */
    func_800F8F74(0x353D);
    io_poll(0x6D);
    if (io_go() == 0)
        goto L15B2EC;
    io_poll(0xDE);
    if (io_go() != 0)
        goto L15B3C4;
    io_poll(0xB0);
    if (io_go() == 0)
        goto L15B3C4;
    if (io_go() != 0)
        goto L15B3CC;
L15B2EC:
    tail(0xE5);
    wnd_open_cur();
    tail(0x80);
    latch(0xF);
    cell_put(0x82);
    latch(8);
    func_801526F8();
    txt_set(0x28A2);
    row_read(0x1F);
    row_sel_cell_cur();
    func_800F6C68();
    cell_put(0xAB);
    func_800F6C68();
    cell_put(0xAC);
    row_prep(0x20);
    row_read2(0xAB);
    func_800F43A0(0xA9);
    row_prep_close();
    if (func_800F41E8(0x202) != 0)
        goto L15B3CC;
L15B3C4:
    page_paint2(0x353D);
    goto L15B3CC;
L15B3CC:
    row_prep(0x20);
    sep();
    row_prep_close();
    return;
}
