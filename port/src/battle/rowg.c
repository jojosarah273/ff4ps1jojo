/* FF4 source-port — interpreted module for func_8010CB08.
 * Ground truth: src/func_8010CB08.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8010CB08(void)
{
    func_800F8F74(0x8FD);
    func_8010D24C();
    txt_set(0xFDE);
    open_row(0x3E);
    row_sel_cell();
    row_sel_cell2();
    row_sel2(cell_state(0x3E));
    cell_put(0x3D);
    txt_set(0xFE5);
    if (gate(0x80) != 0)
        goto Lb88;
    txt_set(0x1701);
    if (gate(2) != 0)
        goto Lb98;
Lb88:
    key_page(0x3E);
    key_page(0x3E);
Lb98:
    page(0x3D);
    func_800F6C68();
    cell_put(0x3D);
    func_800F6C68();
    cell_put(0x3E);
    page(0x3D);
    label(0x9CF);
    label(0x9D1);
    func_800F8F74(0x8FE);
    page_open(0x9CF);
    for (;;) {
        func_800F6C68();
        if (gate(2) != 0)
            break;
        page_paint2(0x8FE);
    }
    txt_set(0x8FE);
    if (gate(0x202) == 0)
        return;
    open_row(0xAE);
    wnd_open_cur();
    tail(0xAF);
Lc64:
    for (;;) {
        page_open(0x9CF);
        func_800F6C68();
        func_8010D61C();
        row_page(6);
        io_poll(0x2E);
        if (io_go() != 0)
            goto Lcb0;
        latch_cur();
        goto Ld08;
    Lcb0:
        io_poll(0x30);
        if (io_go() != 0)
            goto Lcd8;
        latch(3);
        goto Ld08;
    Lcd8:
        io_poll(0x46);
        if (io_go() != 0)
            goto Ld00;
        latch(2);
        goto Ld08;
    Ld00:
        latch(1);
    Ld08:
        cell_put(7);
        page_open(0x9CF);
        cell_fmt2(0xAF);
        func_800F6C68();
        func_800F8960(0x901);
        row_read(3);
        func_800F8960(0x909);
        func_800F61E8();
        func_800F8960(0x902);
        func_800F6D70(0x901);
        row_read(0xFC);
        func_800F78C4(cell_state(7));
        func_800F8960(0x901);
        row_page(6);
        io_poll(0xE);
        if (io_go() != 0)
            goto Ldc8;
        func_800F6C68();
        goto Le04;
    Ldc8:
        func_800F6C68();
        row_read(0xC);
        sep_a();
        row_open_w(4);
    Le04:
        func_800F8960(0x90D);
        page_open(0x9CF);
        func_800F6C68();
        func_800F8960(0x907);
        func_800F6C68();
        if (gate(0x80) != 0)
            goto Le54;
        latch_cur();
        func_800F8960(0x902);
    Le54:
        func_800F6C68();
        row_read(0x3F);
        func_800F8960(0x904);
        cell_put(0xC);
        func_800F6C68();
        func_800F8960(0x906);
        cell_put(0xE);
        func_800F6D70(0x907);
        func_8010D894();
        func_800F8960(0x90B);
        io_poll_cur();
        if (io_just() == 0)
            func_8010D4EC();
        latch_cur();
        func_800F8960(0x8FF);
        func_800F8960(0x903);
        func_800F8960(0x905);
        func_800F8960(0x900);
        func_800F8960(0x908);
        func_800F8960(0x90C);
        func_800F6D70(0x904);
        cell_put(0x3D);
        func_800F6D70(0x906);
        cell_put(0x3E);
        page(0x3D);
        func_800F6C68();
        cell_put(0x3D);
        open_row(0x3E);
        row_arm2(cell_state(0x3D));
        row_sel_cell2();
        row_sel2(cell_state(0x3E));
        page(0x3D);
        txt_cell(0xEDC);
        page(0xAF);
        row_read(8);
        cell_draw(0x90A);
        page_open(0x9CF);
        label(0x9CF);
        row_page(0xAF);
        sep_a();
        row_open_w(0xF);
        cell_put(0xAF);
        key_page(0xAE);
        row_page(0xAE);
        if (io_press(cell_state(0x8FE)) == 0)
            continue;
        latch(0xC);
        cell_put(0xAE);
        latch(0x18);
        func_8010D6A0();
        latch(0x1B);
        key_page(0xAE);
        func_8010D6A0();
        latch(0x1C);
        key_page(0xAE);
        func_8010D6A0();
        txt_set(0xFE1);
        row_read(0xF);
        draw_pad_cur();
        func_8010D0D8();
        txt_set(0xFE1);
        draw_pad(0x40);
        func_8010D0D8();
        func_8017F8F8();
        return;
    }
}
