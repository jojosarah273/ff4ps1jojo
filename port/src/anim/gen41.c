/* FF4 source-port — interpreted module for func_801750DC.
 * Ground truth: src/func_801750DC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801750DC(void)
{
    txt_set(0xFDD);
    io_poll(9);
    if (io_just() != 0)
        goto L5374;
    io_poll(8);
    if (io_just() != 0)
        goto L514C;
    io_poll(10);
    if (io_go() == 0)
        return;
    io_poll(12);
    if (io_go() != 0)
        return;
L514C:
    row_page(0x7A);
    row_read(0x20);
    row_prep_cur();
    func_800F6CF4();
    func_800F81B0(0xCFD);
    func_800F6CF4();
    func_800F81B0(0xD1D);
    func_800F6CF4();
    func_800F81B0(0xD5D);
    row_sync2_cur();
    row_prep_close();
    txt_set(0xFDD);
    io_poll(11);
    if (io_just() != 0)
        goto L52C4;
    row_page(0x7A);
    row_read_cur();
    io_poll(8);
    if (io_go() == 0)
        goto L5268;
    sep_a();
    row_open_w(9);
L5268:
    row_sel_cell_cur();
    draw_pad_cur();
L5290:
    for (;;) {
        func_800F6C68();
        cell_step();
        step2();
        poll_t(0x10);
        if (io_just() != 0)
            break;
    }
L52C4:
    row_page(0x7A);
    func_800F7864();
    row_read(0x1E);
    draw_pad_cur();
L5300:
    for (;;) {
        func_800F6C68();
        func_800F8960(0xDBD);
        cell_step();
        row_read(0x1F);
        step2();
        poll_t(0x10);
        if (io_just() != 0)
            break;
    }
    return;
L5374:
    row_page(0x7A);
    row_read_cur();
    txt_set(0xFE0);
    io_poll(0xF);
    if (io_just() == 0)
        goto L5414;
    sep_a();
    row_open_w(0x40);
L5414:
    row_prep(0x20);
    func_800F6CF4();
    func_800F81B0(0xCFD);
    func_800F6CF4();
    func_800F81B0(0xCF7);
    func_800F81B0(0xD7F);
    func_800F6CF4();
    func_800F81B0(0xD01);
    func_800F6CF4();
    func_800F81B0(0xD7D);
    row_sync2_cur();
    row_prep_close();
    return;
}
