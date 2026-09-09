/* FF4 source-port — interpreted module for func_80165D60.
 * Ground truth: src/func_80165D60.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80165D60(void)
{
    row_open();
    txt_set(0x2894);
    if (gate(0x202) != 0)
        goto L5d98;
    latch(0x80);
    goto L5e58;
L5d98:
    io_poll(0x44);
    if (io_go() != 0)
        goto L5dc0;
    latch(1);
    goto L5e58;
L5dc0:
    io_poll(0x4D);
    if (io_go() != 0)
        goto L5de8;
    latch(2);
    goto L5e58;
L5de8:
    io_poll(0x54);
    if (io_go() != 0)
        goto L5e10;
    latch(4);
    goto L5e58;
L5e10:
    io_poll(0x61);
    if (io_go() != 0)
        goto L5e38;
    latch(8);
    goto L5e58;
L5e38:
    io_poll(0x6D);
    if (io_go() != 0)
        goto L61b8;
    latch(0x10);
L5e58:
    cell_put(0xF);
    txt_set(0x2895);
    if (gate(0x202) != 0)
        goto L5e88;
    latch(0x80);
    goto L5f48;
L5e88:
    io_poll(0x44);
    if (io_go() != 0)
        goto L5eb0;
    latch(1);
    goto L5f48;
L5eb0:
    io_poll(0x4D);
    if (io_go() != 0)
        goto L5ed8;
    latch(2);
    goto L5f48;
L5ed8:
    io_poll(0x54);
    if (io_go() != 0)
        goto L5f00;
    latch(4);
    goto L5f48;
L5f00:
    io_poll(0x61);
    if (io_go() != 0)
        goto L5f28;
    latch(8);
    goto L5f48;
L5f28:
    io_poll(0x6D);
    if (io_go() != 0)
        goto L61b8;
    latch(0x10);
L5f48:
    cell_put(0xE);
    txt_set(0x1822);
    row_prep(0x20);
    sep();
    row_prep_close();
    txt_cell(0x2000);
    cell_put(0x10);
    row_read(0xC0);
    io_poll(0xC0);
    if (io_just() != 0)
        goto L6078;
    row_page(0x10);
    if (gate(0x80) != 0)
        goto L6030;
    row_prep(0x20);
    row_read2(0xE);
    func_800F55C0(0x8001);
    if (io_just() != 0)
        goto L61d8;
    func_800F55C0(0x1001);
    if (io_just() != 0)
        goto L61d8;
    latch(0x1080);
    goto L60b8;
L6030:
    row_prep(0x20);
    row_read2(0xE);
    func_800F55C0(0x180);
    if (io_just() != 0)
        goto L61d8;
    func_800F55C0(0x110);
    if (io_just() != 0)
        goto L61d8;
    latch(0x8010);
    goto L60b8;
L6078:
    row_prep(0x20);
    row_read2(0xE);
    func_800F55C0(0x101);
    if (io_just() != 0)
        goto L61d8;
    func_800F55C0(0x180);
    if (io_just() != 0)
        goto L61d8;
    latch(0x8001);
L60b8:
    func_800F55C0(0x8001);
    if (io_just() != 0)
        goto L61d8;
    func_800F55C0(0x8080);
    if (io_just() != 0)
        goto L61d8;
    func_800F55C0(0x804);
    if (io_just() != 0)
        goto L61d8;
    func_800F55C0(0x408);
    if (io_just() != 0)
        goto L61d8;
    func_800F55C0(0x280);
    if (io_just() != 0)
        goto L61d8;
    func_800F55C0(0x8002);
    if (io_just() != 0)
        goto L61d8;
    func_800F55C0(0x480);
    if (io_just() != 0)
        goto L61d8;
    func_800F55C0(0x880);
    if (io_just() != 0)
        goto L61d8;
    func_800F55C0(0x8008);
    if (io_just() != 0)
        goto L61d8;
    func_800F55C0(0x8004);
    if (io_just() != 0)
        goto L61d8;
    sep();
    row_prep_close();
L61b8:
    latch(1);
    txt_draw(0x2893);
    row_close();
    return;
L61d8:
    sep();
    row_prep_close();
    latch(1);
    txt_draw(0x352B);
    cell_clear_bank(0x2893);
    row_close();
    return;
}
