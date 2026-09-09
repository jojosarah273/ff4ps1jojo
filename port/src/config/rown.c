/* FF4 source-port — interpreted module for func_80136FFC.
 * Ground truth: src/func_80136FFC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80136FFC(void)
{
    latch(0x30);
    cell_put(0x3F);
    txt_set(0x1B94);
    sep_a();
    cell_poke0(cell_state(0x1B96));
    row_sel_cell();
    row_sel_cell2();
    cell_poke0(cell_state(0x1B95));
    cell_poke0(cell_state(0x1B95));
    func_801224D0();
    label(0x1B98);
    txt_cell(0x1440);
    io_poll(0x19);
    if (io_just() != 0)
        goto L538;
    io_poll(0xC8);
    if (io_just() != 0)
        goto L538;
    io_poll(0xEE);
    if (io_go() != 0)
        goto L538;
    row_open();
    func_8012102C();
    draw_pad_cur();
    func_8011FB74();
    row_close();
    txt_cell(0x1440);
    if (gate(0x202) == 0)
        goto L538;
    cell_put(0x5D);
    cell_put(0x43);
    txt_cell(0x1441);
    cell_put(0x5E);
    page(0x43);
    func_800F6C68();
    if (gate(0x80) != 0)
        goto L1d0;
    cell_put(0x43);
    row_prep(0x20);
    row_read2(0x43);
    row_arm_s();
    row_arm_s2();
    cell_peek0(cell_state(0x43));
    func_800F8274(0x5A);
    row_prep_close();
    goto L238;
L1d0:
    row_sel_cell();
    row_open();
    row_close();
    row_prep(0x20);
    func_800F65F0(0x4216);
    func_800F8274(0x5A);
    row_prep_close();
L238:
    row_page(0x5D);
    io_poll(0xD4);
    if (io_go() != 0)
        goto L288;
    io_poll(0xD1);
    if (io_go() == 0)
        goto L288;
    latch(1);
    cell_put(0x5A);
    open_row(0x5B);
L288:
    txt_set(0x1B7A);
    if (gate(2) != 0)
        goto L2b0;
    txt_set(0x1B7C);
    poll_spin();
L2b0:
    func_800F61E8();
    if (io_press(cell_state(0x5E)) == 0)
        goto L2e0;
    row_page(0x5E);
L2e0:
    cell_put(0x60);
    txt_draw(0x1B97);
    open_row(0x61);
    open_row(0x37);
    open_row(0x38);
    open_row(0x39);
    open_row(0x3A);
    draw_pad(0x396);
    func_801206DC();
    row_prep(0x20);
    row_sync2_cur();
    for (;;) {
        sep_a();
        cell_peek0(cell_state(0x5A));
        if (io_go() == 0)
            goto L3a8;
        func_800F62F0(0x39);
    L3a8:
        func_800F5DD4(0x60);
        if (poll_go() != 0)
            continue;
        break;
    }
    func_800F8274(0x37);
    row_read2(0x39);
    page(0x37);
    draw_pad(0x412);
    row_prep_close();
    func_80124D08();
    open_row(0xDB);
    row_page(0x5D);
    draw_pad(0x2D4);
    func_80125100();
    txt_set(0x1B95);
    if (gate(0x202) != 0)
        goto L438;
    draw_pad(0x31C);
    func_801376B0();
L438:
    open_row(0x48);
    row_page(0x48);
    func_800F61E8();
    row_read(1);
    cell_put(0x48);
    func_80120B6C();
    latch(0x30);
    cell_put(0x3F);
L478:
    for (;;) {
        latch(0xB0);
        cell_put(0x46);
        row_page(0x48);
        if (gate(0x202) != 0)
            goto L4b0;
        latch(0x50);
        goto L4b8;
    L4b0:
        latch(0x78);
    L4b8:
        cell_put(0x45);
        func_8011F6D4();
        func_8011F684();
        func_8011F884();
        row_page(1);
        row_read(0x80);
        if (sel(2) == 0)
            goto L530;
        row_page_cur();
        row_read(0x80);
        if (sel(2) != 0)
            goto L658;
        row_page(0x48);
        if (gate(2) != 0)
            goto L548;
    L530:
        func_801263C8();
    L538:
        sep_a();
        goto L6a0;
    L548:
        row_prep(0x20);
        func_800F658C(0x16A0);
        sep_a();
        cell_peek0(cell_state(0x37));
        func_800F81B0(0x16A0);
        row_prep_close();
        txt_set(0x16A2);
        cell_poke0(cell_state(0x39));
        txt_draw(0x16A2);
        io_poll(0x98);
        if (io_go() == 0)
            goto L5f8;
        wnd_open(0x967F);
        if (func_800F56AC(cell_state(0x16A0)) != 0)
            goto L5f8;
        label(0x16A0);
        latch(0x98);
        txt_draw(0x16A2);
    L5f8:
        page_open(0x1B98);
        txt_cell(0x1441);
        sep_b();
        func_800F7F48(cell_state(0x1B97));
        cell_draw(0x1441);
        if (io_just() == 0)
            goto L640;
        cell_draw(0x1440);
    L640:
        func_801263C8();
        sep_b();
        goto L6a0;
    L658:
        row_page(1);
        row_read(3);
        if (sel(2) != 0)
            goto L478;
        row_page(0x48);
        func_800F61E8();
        row_read(1);
        cell_put(0x48);
        goto L478;
    }
L6a0:
    return;
}
