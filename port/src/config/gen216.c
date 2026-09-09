/* FF4 source-port — interpreted module for func_8015AC7C.
 * Ground truth: src/func_8015AC7C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8015AC7C(void)
{
    txt_set(0xA8);
    if (gate(0x202) != 0)
        return;
    wnd_open(4);
    tail(0xA9);
Lacac:
    for (;;) {
        page(0xA9);
        txt_cell(0x3540);
        if (gate(0x202) != 0)
            goto Lad1c;
        row_page(0xA9);
        func_80152CDC();
        page(0xA6);
        txt_cell(0x2003);
        row_read(0xC0);
        if (sel(0x202) != 0)
            goto Lad1c;
        txt_cell(0x2005);
        if (gate(0x8080) != 0)
            goto Lad6c;
    Lad1c:
        poll_pair(0xA9);
        row_page(0xA9);
        if (gate(0x8080) != 0)
            continue;
        txt_set(0x38E5);
        row_read(2);
        if (sel(2) == 0)
            goto Lafe0;
        latch(8);
        latch(0x80);
        goto Lafe8;
    Lad6c:
        txt_set(0x29CD);
        if (gate(0x202) != 0)
            goto Lae58;
        latch(0x30);
        cell_put(0xA8);
        sep();
        for (;;) {
            func_800F6C68();
            io_poll(0xFF);
            if (io_just() != 0)
                return;
            if (io_press(cell_state(0x1800)) == 0)
                goto Lae40;
            func_800F6C68();
            if (io_press(cell_state(0x1801)) == 0)
                goto Lae40;
            row_page(0xA8);
            row_read(0xEF);
            goto Lafe8;
        Lae40:
            cell_step();
            cell_step();
        }
    Lae58:
        txt_set(0x388B);
        if (gate(0x202) != 0)
            return;
        txt_set(0x38D3);
        if (gate(0x202) != 0)
            goto Laea0;
        txt_set(0x352D);
        if (gate(2) != 0)
            return;
    Laea0:
        txt_set(0x38D6);
        io_poll(0xFF);
        if (io_just() != 0)
            return;
        txt_set(0x38D6);
        if (gate(2) != 0)
            goto Laf00;
        txt_set(0x38F3);
        if (gate(0x202) != 0)
            goto Laf00;
        func_800F5D24(0x38D6);
        return;
    Laf00:
        txt_set(0x38E5);
        row_read(1);
        if (sel(0x202) != 0)
            goto Lb020;
        sep();
        tail(0xA9);
        for (;;) {
            page(0xA9);
            txt_cell(0x3540);
            if (gate(0x202) != 0)
                goto Laff8;
            row_page(0xA9);
            func_80152CDC();
            page(0xA6);
            txt_cell(0x2003);
            row_read(0xC0);
            if (sel(0x202) != 0)
                goto Laff8;
            txt_cell(0x2004);
            row_read(0x30);
            if (sel(0x202) != 0)
                goto Laff8;
            txt_cell(0x2005);
            row_read(0xC2);
            if (sel(0x202) != 0)
                goto Laff8;
            break;
        }
    Lafe0:
        latch_cur();
    Lafe8:
        cell_put(0xA8);
        return;
    Laff8:
        key_page(0xA9);
        row_page(0xA9);
        io_poll(5);
        if (io_just() == 0)
            continue;
        break;
    }
Lb020:
    func_800F8F74(0x352D);
    func_80153264();
    latch(0xFF);
    txt_draw(0x33C4);
    latch(0x22);
    txt_draw(0x34CA);
    latch(5);
    func_80150C38();
    func_8005A234();
    return;
}
