/* FF4 source-port — interpreted module for func_8012F3F0.
 * Ground truth: src/func_8012F3F0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8012F3F0(void)
{
Lf3f8:
    txt_set(0x1B87);
    if (gate(0x202) != 0)
        goto L470;
    func_800F8F74(0x1B93);
    txt_set(0x1B81);
    row_sel_cell();
    row_sel_cell2();
    row_open_w(0x10);
    cell_put(0x46);
    latch(8);
    cell_put(0x45);
    goto L478;
L470:
    func_8012FF9C();
L478:
    func_8011F6D4();
    func_80120F1C();
    func_8013095C();
    func_80130AA4();
    txt_draw(0x1B93);
    draw_pad(0x21A);
    func_801206DC();
    wnd_open(0x20A);
    draw_pad_cur();
    func_801223A4();
    func_8011F684();
    func_801264E8();
    func_8011F884();
    txt_set(0x1B87);
    if (gate(0x202) != 0)
        goto L698;
    row_page(1);
    row_read(8);
    if (sel(2) != 0)
        goto L5a0;
list8_loop:
    txt_set(0x1B81);
    cell_put(0x43);
    for (;;) {
        row_page(0x43);
        poll_spin();
        if (poll_go(0x8080) != 0)
            goto L558;
        latch(2);
    L558:
        func_801224D0();
        txt_cell(0x1B7E);
        if (gate(0x80) != 0)
            continue;
        break;
    }
    func_800F9200();
    row_page(0x43);
    txt_draw(0x1B81);
    row_close2();
    func_8012F9A0();
L5a0:
    row_page(1);
    row_read(4);
    if (sel(2) != 0)
        goto L648;
    txt_set(0x1B81);
    cell_put(0x43);
    for (;;) {
        row_page(0x43);
        func_800F61E8();
        io_poll(3);
        if (io_just() == 0)
            goto L600;
        sep();
    L600:
        func_801224D0();
        txt_cell(0x1B7E);
        if (gate(0x80) != 0)
            continue;
        break;
    }
    func_800F9200();
    row_page(0x43);
    txt_draw(0x1B81);
    row_close2();
    func_8012F9A0();
L648:
    row_page_cur();
    row_read(0x80);
    if (sel(2) == 0)
        page_paint2(0x1B87);
    row_page(1);
    row_read(0x80);
    if (sel(2) != 0)
        goto Lf3f8;
    return;
L698:
    row_page(1);
    row_read(8);
    if (sel(2) != 0)
        goto L6e8;
    txt_set(0x1B83);
    poll_spin();
    if (poll_go(0x8080) != 0)
        goto L6e0;
    latch(7);
L6e0:
    txt_draw(0x1B83);
L6e8:
    row_page(1);
    row_read(4);
    if (sel(2) != 0)
        goto L740;
    txt_set(0x1B83);
    func_800F61E8();
    io_poll(8);
    if (io_just() == 0)
        goto L738;
    sep();
L738:
    txt_draw(0x1B83);
L740:
    row_page(1);
    row_read(2);
    if (sel(2) != 0)
        goto L790;
    txt_set(0x1B84);
    poll_spin();
    if (poll_go(0x8080) != 0)
        goto L788;
    latch(2);
L788:
    txt_draw(0x1B84);
L790:
    row_page(1);
    row_read(1);
    if (sel(2) != 0)
        goto L7e8;
    txt_set(0x1B84);
    func_800F61E8();
    io_poll(3);
    if (io_just() == 0)
        goto L7e0;
    sep();
L7e0:
    txt_draw(0x1B84);
L7e8:
    row_page_cur();
    row_read(0x80);
    if (sel(2) != 0)
        goto L8a8;
    txt_set(0x1B88);
    if (gate(0x202) != 0)
        goto L880;
    page_paint2(0x1B88);
    page_open(0x1B83);
    label(0x1B85);
    func_8012FF9C();
    row_prep(0x20);
    row_read2(0x45);
    sep_a();
    func_800F4064(0x404);
    func_800F8274(0x45);
    row_prep_close();
    func_8011F6AC();
    goto L8e0;
L880:
    func_800F8F74(0x1B88);
    if ((func_80130058() & 0xFF) != 1)
        goto L8e0;
    return;
L8a8:
    row_page(1);
    row_read(0x80);
    if (sel(2) != 0)
        goto L8e0;
    func_800F8F74(0x1B87);
    func_800F8F74(0x1B88);
    func_80131294();
L8e0:
    row_page_cur();
    row_read(0x40);
    if (sel(2) != 0)
        goto Lf3f8;
    txt_set(0x1B81);
    cell_put(0x43);
    for (;;) {
        row_page(0x43);
        func_800F61E8();
        io_poll(3);
        if (io_just() == 0)
            goto L940;
        sep();
    L940:
        func_801224D0();
        txt_cell(0x1B7E);
        if (gate(0x80) != 0)
            continue;
        break;
    }
    func_800F9200();
    row_page(0x43);
    txt_draw(0x1B81);
    row_close2();
    func_8012F9A0();
    goto Lf3f8;
}
