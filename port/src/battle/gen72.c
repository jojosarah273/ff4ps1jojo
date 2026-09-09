/* FF4 source-port — interpreted module for func_80105DB4.
 * Ground truth: src/func_80105DB4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80105DB4(void)
{
    open_row(0xDC);
L5DC8:
    for (;;) {
        func_800FE7B0();
        func_801096F0();
        func_801060A8();
        key_page(0xDC);
        row_page(0xDC);
        io_poll(6);
        if (io_just() != 0)
            break;
    }
    latch(1);
    cell_put(0x54);
    open_row(0x8C);
L5E20:
    for (;;) {
        func_800FE7B0();
        func_801096F0();
        func_801764DC();
        row_page(2);
        row_read(0x80);
        if (sel(2) != 0)
            goto L5E80;
        row_page(0x54);
        if (gate(0x202) != 0)
            goto L5E80;
        key_page(0x54);
        goto L5FB8;
    L5E80:
        row_page(3);
        row_read(0x80);
        if (sel(2) != 0)
            goto L5ED8;
        row_page(0x55);
        if (gate(0x202) != 0)
            goto L5ED8;
        key_page(0x55);
        latch(1);
        cell_put(0x8C);
        goto L5FB8;
    L5ED8:
        row_page(1);
        row_read(0xC);
        if (sel(2) != 0)
            continue;
        row_page(0x8C);
        cell_put(0x8C);
        row_page(0x8C);
        if (gate(0x202) != 0)
            goto L5F44;
        latch(0x14);
        goto L5F50;
    L5F44:
        latch(0xFF);
    L5F50:
        row_page(0x8C);
        if (gate(2) != 0)
            goto L5F8C;
        latch(0x14);
        goto L5F94;
    L5F8C:
        latch(0xFF);
    L5F94:
        func_80106860();
    }
L5FB8:
    func_80106830();
    row_page(0x8C);
    cell_put(0xDB);
    poll_pair(0xDC);
L5FD8:
    for (;;) {
        func_800FE7B0();
        func_801096F0();
        func_801060A8();
        poll_pair(0xDC);
        if (poll_go(0x8080) != 0)
            continue;
        break;
    }
    func_800FE7B0();
    func_801096F0();
    row_page(0x3D);
    sep_b();
    func_800F8058(0x20);
    cell_put(0x3D);
    row_page(0x3E);
    func_800F8058();
    cell_put(0x3E);
    func_801062E8();
    row_page(0x3D);
    sep_b();
    func_800F8058(0x20);
    cell_put(0x3D);
    row_page(0x3E);
    func_800F8058();
    cell_put(0x3E);
    func_801062E8();
    return;
}
