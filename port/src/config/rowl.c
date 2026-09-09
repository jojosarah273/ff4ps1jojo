/* FF4 source-port — interpreted module for func_80136494.
 * Ground truth: src/func_80136494.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80136494(void)
{
    txt_set(0x1B7A);
    if (gate(2) != 0)
        goto L4c8;
    txt_set(0x1B7C);
    poll_spin();
L4c8:
    func_800F61E8();
    cell_put(0x45);
    txt_draw(0x1B75);
    txt_set(0x1B7B);
    func_801224D0();
    txt_cell(0x1B56);
    cell_put(0x37);
    txt_cell(0x1B57);
    cell_put(0x38);
    txt_cell(0x1B58);
    cell_put(0x39);
    open_row(0x3A);
    open_row(0x3B);
    open_row(0x3C);
    open_row(0x3D);
    open_row(0x3E);
L560:
    for (;;) {
        row_prep(0x20);
        row_read2(0x37);
        sep_a();
        cell_peek0(cell_state(0x3B));
        func_800F8274(0x3B);
        row_read2(0x39);
        cell_peek0(cell_state(0x3D));
        func_800F8274(0x3D);
        row_prep_close();
        poll_pair(0x45);
        if (poll_go() != 0)
            continue;
        break;
    }
    page_open(0x16A0);
    tail(0x37);
    txt_set(0x16A2);
    cell_put(0x39);
    open_row(0x3A);
    row_prep(0x20);
    row_read2(0x37);
    sep_b();
    func_800F7FCC(cell_state(0x3B));
    func_800F8274(0x37);
    row_read2(0x39);
    func_800F7FCC(cell_state(0x3D));
    func_800F8274(0x39);
    row_prep_close();
    row_page(0x3A);
    if (gate(0x8080) != 0)
        goto L758;
    wnd_open(0x50C0);
    label(0x1A71);
    func_801257BC();
    latch(9);
    txt_draw(0xFE01);
    txt_draw(0xFE05);
    txt_draw(0xFE09);
    txt_draw(0xFE0D);
    txt_draw(0xFE11);
    txt_draw(0xFE15);
    txt_draw(0xFE19);
    txt_draw(0xFE1D);
    txt_draw(0xFE21);
    txt_draw(0xFE25);
    func_800F8F74(0x1A73);
    func_80125934();
    func_8011F684();
    func_80120FBC();
    draw_pad_cur();
    func_8011FB74();
    func_80120B6C();
    func_8012219C();
    func_8011FF40();
    wnd_open(0x48C0);
    label(0x1A71);
    func_801257BC();
    func_801240D0();
    func_80126458();
    return;
L758:
    latch_cur();
    func_80134948();
    io_poll_cur();
    if (io_just() == 0)
        goto L890;
    row_open();
    row_page(0x37);
    txt_draw(0x16A0);
    page(0x38);
    label(0x16A1);
    row_close();
    txt_set(0x1B7B);
    cell_put(0x43);
    cell_fmt2(0x43);
    func_800F6D70(0x1B55);
    cell_draw(0x1440);
    txt_set(0x1B75);
    cell_draw(0x1441);
    func_80120FBC();
    draw_pad_cur();
    func_8011FB74();
    func_80125934();
    func_8011F684();
    latch(0x2B);
    func_8012224C();
    func_80126458();
    func_8011FF40();
    for (;;) {
        func_8011F684();
        func_8011F884();
        row_page(2);
        func_800F78C4(cell_state(3));
        if (func_800F7918(0x202) != 0)
            continue;
        break;
    }
    return;
L890:
    func_80125934();
    func_8012B168();
    func_8011F684();
    func_80120FBC();
    draw_pad_cur();
    func_8011FB74();
    func_80120B6C();
    func_8011FF40();
    return;
}
