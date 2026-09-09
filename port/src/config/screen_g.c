/* FF4 source-port — interpreted module for func_80128D4C.
 * Ground truth: src/func_80128D4C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80128D4C(void)
{
    func_800F65C8(0x1B49);
    if (gate(0x202) != 0)
        goto dE8;
    func_80123D3C();
    func_80125A64();
    func_80120F1C();
    draw_pad_cur();
    func_8011EF30();
    draw_pad_cur();
    func_8011EF30();
    draw_pad(0x1040);
    latch(0x30);
    txt_draw(0x1C1);
    txt_set(0x1B18);
    func_80124704();
    goto E00;
dE8:
    draw_pad_cur();
    func_8011EF30();
E00:
    draw_pad_cur();
    func_8011EF30();
    func_80120E2C();
    draw_pad_cur();
    func_8011EF30();
    func_80129AD4();
    row_prep(0x20);
    row_sync2(0x800);
    wnd_open(0xD600);
    draw_pad(0xB600);
    func_800F3D64(0x7E7E);
    row_prep_close();
    func_80120F1C();
    txt_set(0x1B49);
    if (gate(2) == 0) {
        draw_pad_cur();
        func_8011EF30();
    }
    latch(0x7E);
    func_800F9200();
    row_pad();
    wnd_open(0x1B00);
    latch(0xA);
    for (;;) {
        page_paint_cur();
        poll_spin();
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    func_800F8F74(0x1B08);
    wnd_open(0x1B0A);
    draw_pad(6);
    for (;;) {
        txt_cell_cur();
        cell_draw(7);
        cell_step();
        io_poll(0xFF);
        if (io_just() != 0)
            break;
        page_paint2(0x1B08);
    }
    poll_pair_cur();
    if (poll_go(0x202) != 0)
        goto fEC;
    func_800F5D24(0x1B08);
    txt_set(0x1B08);
    txt_draw(0x1B09);
    func_80129AAC();
    func_80129C54();
    latch(2);
    txt_draw(0x1B06);
    func_801264C0();
    func_80126458();
    func_80126528();
    latch(0x19);
    func_800F81E8(0x212C);
    wnd_open(0xFFFC);
    tail(0x90);
    tail(0x9C);
    func_8016EA7C();
    func_8011F6A4();
    func_80126590();
    func_800F8F74(0x1BBA);
    goto L5C0;
fEC:
    func_80129DFC();
ff4:
    func_80129808();
    txt_set(0x1B06);
    row_sel_cell();
    cell_put(0x45);
    open_row(0x46);
    page(0x45);
    row_prep(0x20);
    sep_a();
    func_800F4064(0xDBBA);
    func_800F8274(0x5A);
    row_sync2(1);
    func_800F8274(0x5C);
    row_prep_close();
    txt_set(0x1B06);
    cell_put(0x45);
    row_sel_cell();
    cell_put(0x45);
    open_row(0x46);
    row_prep(0x20);
    row_read2(0x45);
    sep_a();
    func_800F4064(0x1B00);
    func_800F8274(0x5D);
    row_done2();
    func_800F8274(0x60);
    row_prep_close();
L10C:
    func_80129C54();
    func_800F6E30(0x5D);
    cell_put(0x45);
    open_row(0x46);
    page(0x45);
    func_800F6C68();
    cell_put(0x48);
    func_800F6E30(0x60);
    sep_a();
    row_open_w(0x50);
    cell_put(0x49);
    page(0x48);
    draw_pad(0x300);
    func_8011F724();
    func_80129D2C();
    func_8011F684();
    func_801264E8();
    func_8011F884();
    row_page_cur();
    row_read(0x40);
    if (sel(2) != 0)
        goto L218;
    txt_set(0x1B06);
    io_poll(1);
    if (io_just() == 0)
        goto L208;
    latch(0xFF);
    txt_draw(0x1B06);
L208:
    func_80129E94();
    goto ff4;
L218:
    row_page(1);
    func_800F52BC(8);
    if (io_just() != 0)
        goto L298;
    for (;;) {
        func_800F6E30(0x60);
        poll_spin();
        if (poll_go(0x8080) != 0)
            goto L260;
        latch(7);
   L260:
        func_800F8A18(0x60);
        func_80129B04();
        if (io_just() != 0)
            continue;
        io_poll(0xFF);
        if (io_just() != 0)
            continue;
        break;
    }
L298:
    row_page(1);
    func_800F52BC(4);
    if (io_just() != 0)
        goto L320;
    for (;;) {
        func_800F6E30(0x60);
        func_800F61E8();
        io_poll(8);
        if (io_go() == 0)
            goto L2E8;
        sep();
   L2E8:
        func_800F8A18(0x60);
        func_80129B04();
        if (io_just() != 0)
            continue;
        io_poll(0xFF);
        if (io_just() != 0)
            continue;
        break;
    }
L320:
    row_page(1);
    func_800F52BC(2);
    if (io_just() != 0)
        goto L3C0;
    func_800F6E30(0x5D);
    poll_spin();
    if (poll_go(0x8080) == 0)
        goto L408;
    func_800F8A18(0x5D);
    func_80129B04();
    for (;;) {
        if (io_just() != 0)
            goto L408;
        io_poll(0xFF);
        if (io_just() == 0)
            goto L3C0;
        func_800F6E30(0x5D);
        poll_spin();
        func_800F8A18(0x5D);
        func_80129B04();
    }
L3C0:
    row_page(1);
    func_800F52BC(1);
    if (io_just() != 0)
        goto L498;
    func_800F6E30(0x5D);
    func_800F61E8();
    io_poll(0xA);
    if (io_go() == 0)
        goto L418;
L408:
    func_800F8F74(0x1B07);
    goto L5B8;
L418:
    func_800F8A18(0x5D);
    func_80129B04();
    for (;;) {
        if (io_just() != 0)
            goto L478;
        io_poll(0xFF);
        if (io_just() == 0)
            goto L498;
        func_800F6E30(0x5D);
        func_800F61E8();
        func_800F8A18(0x5D);
        func_80129B04();
    }
L478:
    func_800F6E30(0x5D);
    poll_spin();
    func_800F8A18(0x5D);
    goto L408;
L498:
    row_page_cur();
    func_800F52BC(0x80);
    if (io_just() != 0)
        goto L528;
    txt_set(0x1B08);
    func_800F61E8();
    io_poll(6);
    if (io_go() != 0)
        goto L528;
    txt_draw(0x1B08);
    func_80129B04();
    func_800F9200();
    txt_set(0x1B08);
    cell_put(0x45);
    open_row(0x46);
    cell_fmt2(0x45);
    row_close2();
    func_800F8960(0x1B0A);
L528:
    row_page(1);
    func_800F52BC(0x80);
    if (io_just() != 0)
        goto L10C;
    txt_set(0x1B08);
    if (gate(0x80) != 0)
        goto L5A8;
    poll_spin();
    txt_draw(0x1B08);
    func_800F61E8();
    cell_put(0x45);
    open_row(0x46);
    cell_fmt2(0x45);
    latch(0xFF);
    func_800F8960(0x1B0A);
    goto L10C;
L5A8:
    func_80129838();
    goto L10C;
L5B8:
    func_80129D64();
L5C0:
    func_80129808();
L5C8:
    txt_set(0x1B06);
    func_801224D0();
    cell_put(0x46);
    latch(0xC);
    cell_put(0x45);
    func_8011F6D4();
    func_80129D2C();
    func_8011F684();
    func_8011F884();
    row_page_cur();
    row_read(0x80);
    if (sel(2) != 0)
        goto L6F4;
    txt_set(0x1B06);
    io_poll(2);
    if (io_just() == 0)
        goto L6CC;
    txt_set(0x1B08);
    if (gate(0x80) != 0)
        goto L69C;
    func_80126610();
    return;
L69C:
    func_80129838();
    func_80129C54();
    func_801264C0();
    func_8011FF40();
    func_80126610();
    return;
L6CC:
    txt_set(0x1BBA);
    if (gate(0x202) != 0)
        goto L7DC;
    func_80129EF4();
    goto L7DC;
L6F4:
    row_page(1);
    func_800F52BC(8);
    if (io_just() != 0)
        goto L754;
    txt_set(0x1B06);
    poll_spin();
    txt_draw(0x1B06);
    if (poll_go(0x8080) != 0)
        goto L744;
    latch(2);
L744:
    txt_draw(0x1B06);
    func_80129808();
L754:
    row_page(1);
    func_800F52BC(4);
    if (io_just() != 0)
        goto L77C;
    func_80129E94();
L77C:
    row_page(1);
    func_800F52BC(3);
    if (io_just() != 0)
        goto L5C8;
    txt_set(0x1BBA);
    if (gate(0x202) != 0)
        goto L7BC;
    func_80129EF4();
L7BC:
    txt_set(0x1B06);
    io_poll(2);
    if (io_go() != 0)
        goto L5C8;
L7DC:
    latch(1);
    txt_draw(0x1B07);
    goto fEC;
}
