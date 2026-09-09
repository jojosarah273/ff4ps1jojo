/* FF4 source-port — interpreted module for func_8011D218.
 * Ground truth: src/func_8011D218.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8011D218(void)
{
    row_prep(0x20);
    func_800F658C(0x1707);
    func_800F4264(0xFF);
    sep_b();
    func_800F80D0(7);
    func_800F4264(0x7FF);
    func_800F8274(0x5C);
    func_800F658C(0x1706);
    func_800F4264(0xFF);
    sep_b();
    func_800F80D0(7);
    func_800F4264(0x7FF);
    func_800F8274(0x5A);
    row_sync2_cur();
    row_prep_close();
    latch(0x40);
    cell_put(7);
    txt_set(0x1707);
    txt_draw(0x70A);
    for (;;) {
        func_8011DE40();
        page_paint2(0x70A);
        poll_pair(7);
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    latch(0x40);
    cell_put(7);
    txt_set(0x1707);
    sep_b();
    func_800F8058(0x1F);
    cell_put(8);
L340:
    for (;;) {
        row_page(8);
        row_read(0x3F);
        cell_put(0x3E);
        txt_set(0x1706);
        sep_b();
        func_800F8058(0x1F);
        cell_put(0x3D);
        page(0x3D);
        draw_pad_cur();
        for (;;) {
            page(0x3D);
            func_800F6C68();
            func_800F8960(0xADB);
            func_800F8960(0xADC);
            func_800F8960(0xB5B);
            func_800F8960(0xB5C);
            key_page(0x3D);
            poll_t(0x80);
            if (io_just() != 0)
                break;
        }
        open_row(0x97);
        open_row(0x98);
        latch(0x80);
        cell_put(0x95);
        open_row(0x96);
        open_row(0x9B);
        latch(0x80);
        cell_put(0x9F);
        row_page(8);
        row_read(0x3F);
        cell_put(0x9A);
        cell_put(0x9C);
        cell_put(0x9E);
        cell_put(0xA0);
        txt_set(0x1706);
        sep_b();
        func_800F8058(0x1F);
        row_read(0x3F);
        row_sel_cell_cur();
        cell_put(0x99);
        sep_a();
        row_open_w(0x80);
        cell_put(0x9D);
        row_page(0x99);
        cell_put(0x97);
        latch(0x80);
        sep_b();
        func_800F7F48(cell_state(0x97));
        cell_put(0x95);
        func_800F8F74(0x2115);
        func_800FCC84();
        func_800F8F74(0x4300);
        page(0x99);
        label(0x2116);
        wnd_open(0xADB);
        label(0x4302);
        page(0x95);
        label(0x4305);
        func_800FCCBC();
        page(0x9B);
        label(0x2116);
        func_800F8F74(0x420B);
        page(0x97);
        if (func_800F7170(2) != 0)
            goto L58c;
        label(0x4305);
        func_800FCCBC();
    L58c:
        page(0x9D);
        label(0x2116);
        func_800F8F74(0x420B);
        wnd_open(0xB5B);
        label(0x4302);
        page(0x95);
        label(0x4305);
        func_800FCCBC();
        page(0x9F);
        label(0x2116);
        func_800F8F74(0x420B);
        page(0x97);
        if (func_800F7170(2) != 0)
            goto L60c;
        label(0x4305);
        func_800FCCBC();
    L60c:
        key_page(8);
        poll_pair(7);
        if (poll_go(2) == 0)
            continue;
        break;
    }
    func_8017F9A8();
    return;
}
