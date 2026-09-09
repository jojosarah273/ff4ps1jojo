/* FF4 source-port — interpreted module for func_800FFEFC.
 * Ground truth: src/func_800FFEFC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_800FFEFC(void)
{
    txt_set(0x1705);
    if (gate(0x202) != 0)
        goto Lf5c;
    row_page(0xA4);
    if (gate(0x8080) != 0)
        return;
    txt_set(0x1706);
    cell_put(0xC);
    txt_set(0x1707);
    poll_spin();
    goto L014;
Lf5c:
    txt_set(0x1705);
    io_poll(1);
    if (io_just() == 0)
        goto Lfbc;
    row_page(0xA6);
    if (gate(0x8080) != 0)
        return;
    txt_set(0x1706);
    cell_set50_from40();
    cell_put(0xC);
    txt_set(0x1707);
    goto L014;
Lfbc:
    txt_set(0x1705);
    io_poll(2);
    if (io_just() == 0)
        goto L024;
    row_page(0xA8);
    if (gate(0x8080) != 0)
        return;
    txt_set(0x1706);
    cell_put(0xC);
    txt_set(0x1707);
    cell_set50_from40();
L014:
    cell_put(0xE);
    goto L064;
L024:
    row_page(0xAA);
    if (gate(0x8080) != 0)
        return;
    txt_set(0x1706);
    poll_spin();
    cell_put(0xC);
    txt_set(0x1707);
    cell_put(0xE);
L064:
    txt_set(0x711);
    if (gate(0x202) == 0)
        return;
    func_80100B30();
    draw_pad_cur();
    page(0x3D);
    for (;;) {
        cell_push_c8();
        if (io_press(cell_state(0xC)) == 0)
            goto L0ec;
        cell_push_c8();
        if (io_press(cell_state(0xE)) != 0)
            goto L140;
    L0ec:
        step2();
        if (io_press(cell_state(0x711)) == 0)
            continue;
        return;
    }
L140:
    tail(0x40);
    sep_a();
    cell_poke0(cell_state(0xFE7));
    txt_draw(0x8FC);
    func_801009E8();
    io_poll_cur();
    if (io_just() == 0)
        goto L46c;
    txt_set(0x1705);
    cell_cur_save54();
    txt_cell(0x70C);
    io_poll(0x78);
    if (io_just() == 0)
        goto L250;
    row_page(0xC);
    cell_put(0x3D);
    row_page(0xE);
    cell_put(0x3E);
    page(0x3D);
    latch(0x77);
    cell_pull_c8_off();
    func_80105230();
    label(0x6FE);
    func_80100894();
    latch(0x30);
    wnd_fx_pads();
    latch(1);
    cell_put(0xD4);
    latch(1);
    cell_put(0xB2);
    goto L270;
L250:
    latch(0x16);
    cell_put(0xB2);
    latch(0x37);
    wnd_fx_pads();
L270:
    page(0x40);
    cell_push_c8();
    cell_put(9);
    cell_push_c8();
    cell_put(8);
    row_page(9);
    row_read(0x40);
    if (sel(2) != 0)
        goto L374;
    row_page(8);
    cell_put(0xC6);
    txt_set(0x1701);
    cell_put(8);
    row_page(9);
    row_read(0x1F);
    sep_a();
    cell_poke0(cell_state(8));
    sep_a();
    row_open_w(0xC0);
    txt_draw(0x1800);
    latch(1);
    txt_draw(0x1801);
    func_800FD404();
    latch(1);
    cell_put(0x85);
    latch(3);
    cell_put(0xB2);
    goto L44c;
L374:
    row_page(9);
    row_read(0x80);
    if (sel(2) != 0)
        goto L3cc;
    row_page(8);
    txt_draw(0x8FB);
    func_801082C8();
    config_sub_screen();
    config_confirm_loop_a();
    func_801005DC();
    return;
L3cc:
    key_page(0xB2);
    row_page(8);
    row_read(0x7F);
    cell_put(0x18);
    open_row(0x19);
    row_page(8);
    row_read(0x80);
    if (sel(0x202) != 0)
        goto L424;
    wnd_open(0xA);
    goto L42c;
L424:
    wnd_open(0x3E8);
L42c:
    tail(0x1A);
    func_80174F0C();
    func_801196B0();
    func_801004D4();
L44c:
    func_801082C8();
    config_sub_screen();
    config_confirm_loop_a();
    return;
L46c:
    txt_set(0x1705);
    cell_cur_save54();
    txt_cell(0x70C);
    io_poll(0x77);
    if (io_just() == 0)
        return;
    latch(4);
    cell_put(0xB2);
    func_801082C8();
    config_sub_screen();
    config_confirm_loop_a();
    return;
}
