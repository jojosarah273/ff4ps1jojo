/* FF4 source-port — interpreted module for func_80155C88.
 * Ground truth: src/func_80155C88.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80155C88(void)
{
    row_page(0xB9);
    txt_draw(0x35A0);
    row_sel_cell();
    sep_a();
    row_open_w(0xA);
    latch(0x40);
    cell_draw(0x29EB);
    row_prep(0x20);
    row_read2(0xBB);
    row_arm_s();
    sep_b();
    func_800F6CF4();
    func_800F80D0(0xA860);
    sep();
    row_prep_close();
    sep();
    for (;;) {
        func_800F6C68();
        func_800F8960(0x289C);
        cell_step();
        step2();
        poll_t(0x14);
        if (io_just() != 0)
            break;
    }
    sep_a();
    txt_set(0x35A0);
    row_open_w(5);
    func_80152CDC();
    page(0xA6);
    row_page(0xBD);
    if (gate(2) == 0) {
        latch(0x20);
        cell_draw(0x2005);
        row_open();
        txt_set(0x35A0);
        txt_cell(0x29B5);
        latch(1);
        cell_draw(0x38D0);
        row_close();
    }
Le5c:
    txt_set(0x289C);
    cell_draw(0x2070);
    if (gate(0x8080) == 0)
        page_paint2(0x3582);
    row_read(0x7F);
    cell_draw(0x2002);
    sep_a();
    row_open_w(0xA);
    cell_draw(0x202F);
    txt_set(0x289D);
    cell_draw(0x2007);
    cell_draw(0x2009);
    txt_set(0x289E);
    cell_draw(0x2008);
    cell_draw(0x200A);
    row_prep(0x20);
    func_800F658C(0x289D);
    func_80152B38();
    func_800F87DC(0x200B);
    func_800F87DC(0x200D);
    sep();
    row_prep_close();
    row_open();
    txt_set(0x28A2);
    row_read(0x3F);
    row_sel_cell();
    func_800F6C68();
    cell_put(0xA9);
    func_800F6C68(0xA9);
    row_page_cur();
    func_80152224();
    row_close();
    cell_draw(0x2015);
    txt_set(0x29A2);
    row_read(0x20);
    if (sel(2) != 0)
        goto Lfdc;
    latch(1);
    cell_draw(0x203B);
    goto Lfec;
Lfdc:
    latch(0x10);
    cell_draw(0x203B);
Lfec:
    txt_set(0x28A4);
    txt_draw(0x35A1);
    row_open();
    row_page(0xB9);
    txt_cell(0x29B5);
    row_page(0xBB);
    cell_draw(0x358B);
    cell_draw(0x3588);
    txt_set(0x28A3);
    cell_draw(0x358E);
    row_close();
    cell_draw(0x2073);
    txt_set(0x289F);
    func_80157148();
    txt_set(0x291C);
    cell_draw(0x201B);
    txt_set(0x291D);
    cell_draw(0x201C);
    txt_set(0x291E);
    cell_draw(0x201D);
    txt_set(0x28A0);
    func_80157148();
    txt_set(0x291C);
    cell_draw(0x2028);
    txt_set(0x291D);
    cell_draw(0x202A);
    txt_set(0x291E);
    cell_draw(0x202A);
    txt_set(0x28A1);
    func_80157148();
    txt_set(0x291C);
    cell_draw(0x2022);
    txt_set(0x291D);
    cell_draw(0x2024);
    txt_set(0x291E);
    cell_draw(0x2024);
    txt_set(0x28A5);
    if (gate(0x202) == 0)
        goto L384;
    sep();
    txt_set(0x28A5);
    row_read(0x80);
    if (sel(2) != 0)
        goto L1dc;
    func_800F6D70(0x28A6);
    cell_draw(0x2019);
    step2();
    func_800F6D70(0x28A6);
    cell_draw(0x201E);
    step2();
    func_800F6D70(0x28A6);
    cell_draw(0x201F);
    step2();
L1dc:
    txt_set(0x28A5);
    row_read(0x40);
    if (sel(2) != 0)
        goto L264;
    func_800F6D70(0x28A6);
    if (gate(0x8080) != 0)
        goto L224;
    cell_draw(0x2026);
    goto L22c;
L224:
    cell_draw(0x2025);
L22c:
    step2();
    func_800F6D70(0x28A6);
    cell_draw(0x202B);
    step2();
    func_800F6D70(0x28A6);
    cell_draw(0x202C);
    step2();
L264:
    txt_set(0x28A5);
    row_read(0x20);
    if (sel(2) != 0)
        goto L2dc;
    func_800F6D70(0x28A6);
    if (gate(0x8080) != 0)
        goto L2a4;
    cell_draw(0x2021);
L2a4:
    cell_draw(0x2020);
    step2();
    row_read(0x20);
    if (sel(2) != 0)
        goto L2dc;
    latch(0x40);
    cell_draw(0x2004);
L2dc:
    txt_set(0x28A5);
    row_read(0x10);
    if (sel(2) != 0)
        goto L32c;
    func_800F6D70(0x28A6);
    cell_draw(0x2012);
    cell_draw(0x2013);
    cell_draw(0x2017);
    cell_draw(0x2018);
    step2();
L32c:
    txt_set(0x28A5);
    row_read(8);
    if (sel(2) != 0)
        goto L364;
    func_800F6D70(0x28A6);
    cell_draw(0x2040);
    step2();
L364:
    txt_set(0x28A5);
    row_read(4);
    if (sel(0x202) != 0)
        goto L394;
L384:
    func_801569EC();
    return;
L394:
    txt_set(0x35A0);
    cell_dispatch(cell_state_of());
    func_800F6D70(0x28A6);
    txt_draw(0x35A2);
    txt_set(0x35A0);
    cell_put(0xDF);
    latch(0x14);
    cell_put(0xE1);
    func_8015240C();
    txt_set(0x35A2);
    cell_put(0xE5);
    draw_pad(0xE030);
    latch(0xE);
    func_80152640();
    cell_fmt2(0xE3);
    row_info(0x98);
    row_info(0x9C);
    func_80156480();
    return;
}
