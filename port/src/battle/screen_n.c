/* FF4 source-port — interpreted module for func_80112A68.
 * Ground truth: src/func_80112A68.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80112A68(void)
{
    latch(4);
    txt_draw(0xACD);
    func_800F8F74(0xACE);
    func_80115BCC();
    wnd_open_cur();
    latch(0xFF);
    for (;;) {
        cell_draw(0xA6D);
        poll_t(0x60);
        if (io_just() != 0)
            break;
    }
    latch(0x3E);
    func_80117F40();
    wnd_open(0x100);
    tail(0x2C);
    wnd_open(0x10);
    tail(0x2E);
Lb14:
    for (;;) {
        func_800FE7D8();
        func_800FE870();
        func_800FF024();
        row_page(0xAD);
        sep_b();
        func_800F8058(0x10);
        func_8017559C();
        txt_set(0x67A);
        row_read(3);
        if (sel(0x202) != 0)
            continue;
        row_page(0xAD);
        func_800F61E8();
        cell_put(0xAD);
        io_poll(0x20);
        if (io_just() == 0)
            continue;
        break;
    }
Lb9c:
    func_800FE7D8();
    func_801130C0();
    func_800FE8B4();
    func_80116348();
    open_row(0x79);
Lbc4:
    for (;;) {
        row_page(0x79);
        row_sel_cell(0x20);
        row_prep_cur();
        row_read2(0x2C);
        sep_a();
        func_800F4064();
        func_800F8274(0xC);
        row_read2(0x2E);
        sep_a();
        func_800F4064();
        func_800F8274(0xE);
        row_read2(0x79);
        func_800F4264(0xFF);
        row_sync2_cur();
        row_prep_close();
        latch(0x1C);
        cell_put(0x91);
        latch(0x78);
        cell_put(0x8F);
        latch(0x60);
        cell_put(0x92);
        func_8011581C();
        key_page(0x79);
        row_page(0x79);
        io_poll(3);
        if (io_just() == 0)
            continue;
        break;
    }
    open_row(0xE3);
    row_page(0x2C);
    io_poll(0x40);
    if (io_go() == 0)
        goto Lec4;
    io_poll(0x90);
    if (io_go() != 0)
        goto Lec4;
    latch(1);
    cell_put(0xE3);
    row_page(0x2C);
    row_read(7);
    if (sel(0x202) != 0)
        goto Lec4;
    key_page(0xC4);
    latch(0x23);
    func_800FD804();
    wnd_open_cur();
    for (;;) {
        txt_cell(0xA6D);
        io_poll(0xFF);
        if (io_just() != 0)
            break;
        io_poll(6);
        if (io_go() != 0)
            break;
    }
    page_paint(0xA6D);
    page_paint(0xA71);
    page_paint(0xA75);
    row_page(0x2C);
    sep_a();
    row_open_w(0x20);
    cell_draw(0xA6E);
    cell_draw(0xA76);
    sep_b();
    func_800F8058(0x10);
    cell_draw(0xA72);
    latch(0x48);
    cell_draw(0xA6F);
    latch(0x58);
    cell_draw(0xA73);
    latch(0x68);
    cell_draw(0xA77);
Lec4:
    open_row(0x24);
    open_row(0x25);
Led4:
    for (;;) {
        page(0x24);
        txt_cell(0xA6D);
        if (gate(0x80) != 0)
            goto Lf5c;
        io_poll(6);
        if (io_go() != 0)
            goto Lf5c;
        func_80116098();
        row_page(0x7A);
        row_read(7);
        if (sel(0x202) != 0)
            goto Lf5c;
        page(0x24);
        cell_dispatch(cell_state_of());
    Lf5c:
        page(0x24);
        tail(0x24);
        poll_t(0x60);
        if (io_just() == 0)
            continue;
        break;
    }
    row_page(0x7A);
    row_read(1);
    if (sel(0x202) != 0)
        goto Lfec;
    page(0x2C);
    func_800F5E48();
    tail(0x2C);
    poll_t(0xFFDE);
    if (io_just() != 0)
        goto L00c;
Lfec:
    row_page(0x2C);
    io_poll(0xB0);
    io_go();
    goto Lb9c;
L00c:
    latch(0x23);
    func_80117F40();
    for (;;) {
        func_800FE7D8();
        func_800FE870();
        func_800FF024();
        row_page(0xAD);
        sep_b();
        func_800F8058(0x10);
        func_8017559C();
        txt_set(0x67A);
        row_read(3);
        if (sel(0x202) != 0)
            continue;
        row_page(0xAD);
        poll_spin();
        cell_put(0xAD);
        io_poll(0x10);
        if (io_just() == 0)
            continue;
        break;
    }
    func_8011EA5C();
    return;
}
