/* FF4 source-port — interpreted module for func_80139E34.
 * Ground truth: src/func_80139E34.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80139E34(void)
{
    func_80120FBC();
    draw_pad_cur();
    func_8011FB74();
    draw_pad_cur();
    func_8011EF30();
    draw_pad_cur();
    func_8011FBA4();
    latch(0x53);
    txt_draw(0xBB1E);
    latch(0x48);
    txt_draw(0xBB9E);
    latch(0x43);
    txt_draw(0xBC1E);
    wnd_open(0x29E);
    draw_pad_cur();
    func_801223A4();
    wnd_open(0x21E);
    draw_pad_cur();
    func_801223A4();
    func_8013B88C();
    draw_pad(0xBB22);
    func_8013A8CC();
    draw_pad(0xBBA2);
    func_8013A8CC();
    draw_pad(0xBC22);
    func_8013A8CC();
    func_80126480();
    func_8013A8C4();
    page_open(0x16AA);
    func_8013AA08();
    func_80126590();
Lf50:
    txt_set(0x16B8);
    func_8013B118();
    txt_draw(0x304);
    latch(0x80);
    txt_draw(0x305);
    txt_set(0x16BE);
    func_8013B118();
    cell_put(0x45);
    latch(0x30);
    cell_put(0x46);
    func_8011F6D4();
    func_8013B88C();
    txt_set(0x16AC);
    func_801224D0();
    latch_cur();
    cell_draw(0xB81F);
    txt_set(0x16AD);
    func_801224D0();
    latch_cur();
    cell_draw(0xB89F);
    txt_set(0x1BA7);
    cell_cursor_dec();
    row_sel_cell_cur();
    row_sel_cell2_cur();
    row_open_w(0x30);
    cell_put(0x46);
    row_close2();
    io_poll(7);
    if (io_go() == 0)
        goto L098;
    latch(0x68);
    goto L0A0;
L098:
    latch(0x18);
L0A0:
    cell_put(0x45);
    func_8011F6AC();
    txt_set(0x1BA8);
    row_sel_cell_cur();
    row_sel_cell2_cur();
    row_open_w(0x86);
    txt_draw(0x320);
    latch(0xA0);
    txt_draw(0x321);
    txt_set(0x1BA9);
    row_sel_cell_cur();
    row_sel_cell2_cur();
    row_open_w(0x86);
    txt_draw(0x324);
    latch(0xB0);
    txt_draw(0x325);
    txt_set(0x1BAA);
    row_sel_cell_cur();
    row_sel_cell2_cur();
    row_open_w(0x86);
    txt_draw(0x328);
    latch(0xC0);
    txt_draw(0x329);
    func_8013A950();
    page(0x45);
    label(0x16AA);
    func_8012214C();
    latch(4);
    txt_draw(0x322);
    txt_draw(0x326);
    txt_draw(0x32A);
    latch(0x30);
    txt_draw(0x323);
    txt_draw(0x327);
    txt_draw(0x32B);
    txt_set(0x16B6);
    func_8013B118();
    txt_draw(0x30C);
    latch(0x60);
    txt_draw(0x30D);
    txt_set(0x16A9);
    func_8013B118();
    txt_draw(0x308);
    latch(0x70);
    txt_draw(0x309);
    txt_set(0x16B7);
    func_8013B118();
    txt_draw(0x314);
    latch(0x90);
    txt_draw(0x315);
    wnd_open(0x300A);
    label(0x306);
    label(0x30A);
    label(0x30E);
    label(0x316);
    label(0x31A);
    func_8011F684();
    func_80126480();
    func_8013A8C4();
    func_8013B7B8(0xFF);
    func_8013B764();
    func_8011EF0C();
    func_8011F884();
    row_page(1);
    row_read(0x80);
    if (sel(2) == 0)
        goto L8B4;
    row_page_cur();
    row_read(0x80);
    if (sel(2) != 0)
        goto L36C;
    txt_set(0x1BA7);
    io_poll(4);
    if (io_just() == 0)
        goto L32C;
    txt_set(0x16A9);
    if (gate(2) != 0)
        goto L3BC;
    func_8013AAF0();
L32C:
    io_poll(5);
    if (io_just() == 0)
        goto L36C;
    txt_set(0x16B8);
    if (gate(2) != 0)
        goto L36C;
    func_8013B270();
    func_801241B8();
L36C:
    row_page(1);
    row_read(8);
    if (sel(2) != 0)
        goto L3BC;
    txt_set(0x1BA7);
    poll_spin();
    if (poll_go(0x8080) != 0)
        goto L3B4;
    latch(9);
L3B4:
    txt_draw(0x1BA7);
L3BC:
    row_page(1);
    row_read(4);
    if (sel(2) != 0)
        goto L414;
    txt_set(0x1BA7);
    cell_set50_from40();
    io_poll(0xA);
    if (io_just() == 0)
        goto L40C;
    sep();
L40C:
    txt_draw(0x1BA7);
L414:
    row_page(1);
    row_read(2);
    if (sel(2) != 0)
        goto L654;
    txt_set(0x1BA7);
    if (gate(0x202) != 0)
        goto L45C;
    func_8013B1E8();
    goto L654;
L45C:
    poll_spin();
    if (poll_go(0x202) != 0)
        goto L4A4;
    txt_set(0x16AC);
    poll_spin();
    if (poll_go(0x80) != 0)
        goto L654;
    txt_draw(0x16AC);
    goto L654;
L4A4:
    poll_spin();
    if (poll_go(0x202) != 0)
        goto L4EC;
    txt_set(0x16AD);
    poll_spin();
    if (poll_go(0x80) != 0)
        goto L654;
    txt_draw(0x16AD);
    goto L654;
L4EC:
    poll_spin();
    if (poll_go(0x202) != 0)
        goto L514;
    func_8013B160();
    goto L654;
L514:
    poll_spin();
    if (poll_go(0x202) != 0)
        goto L53C;
    func_8013B228();
    goto L654;
L53C:
    poll_spin();
    if (poll_go(0x202) != 0)
        goto L564;
    func_8013B1A8();
    goto L654;
L564:
    poll_spin();
    if (poll_go(2) != 0)
        goto L62C;
    poll_spin();
    row_sel_cell_cur();
    func_801224D0();
    row_prep(0x20);
    cell_put_hi9(0x45);
    row_prep_close();
    cell_push_c8_lo(0x45);
    poll_spin();
    if (poll_go(0x80) != 0)
        goto L654;
    func_800F8A18(0x45);
    goto L654;
L62C:
    txt_set(0x16B7);
    txt_draw(0x16B7);
L654:
    row_page(1);
    row_read(1);
    if (sel(2) != 0)
        goto Lf50;
    txt_set(0x1BA7);
    if (gate(0x202) != 0)
        goto L69C;
    func_8013B1E8();
    goto Lf50;
L69C:
    poll_spin();
    if (poll_go(0x202) != 0)
        goto L6EC;
    txt_set(0x16AC);
    cell_set50_from40();
    io_poll(6);
    if (io_just() != 0)
        goto Lf50;
    txt_draw(0x16AC);
    goto Lf50;
L6EC:
    poll_spin();
    if (poll_go(0x202) != 0)
        goto L73C;
    txt_set(0x16AD);
    cell_set50_from40();
    io_poll(6);
    if (io_just() != 0)
        goto Lf50;
    txt_draw(0x16AD);
    goto Lf50;
L73C:
    poll_spin();
    if (poll_go(0x202) != 0)
        goto L764;
    func_8013B160();
    goto Lf50;
L764:
    poll_spin();
    if (poll_go(0x202) != 0)
        goto L78C;
    func_8013B228();
    goto Lf50;
L78C:
    poll_spin();
    if (poll_go(0x202) != 0)
        goto L7B4;
    func_8013B1A8();
    goto Lf50;
L7B4:
    poll_spin();
    if (poll_go(2) != 0)
        goto L884;
    poll_spin();
    row_sel_cell_cur();
    func_801224D0();
    row_prep(0x20);
    cell_put_hi9(0x45);
    row_prep_close();
    cell_push_c8_lo(0x45);
    cell_set50_from40();
    io_poll(0x20);
    if (io_just() != 0)
        goto Lf50;
    func_800F8A18(0x45);
    goto Lf50;
L884:
    txt_set(0x16B7);
    txt_draw(0x16B7);
    goto Lf50;
L8B4:
    return;
}
