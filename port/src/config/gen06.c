/* FF4 source-port — interpreted module for func_801324F8.
 * Ground truth: src/func_801324F8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801324F8(void)
{
    func_80123D3C();
    func_8017F8F8();
    func_8017F8F8();
    func_8017F8F8();
    for (;;) {
        func_80194700();
        if (func_80194394() == 0)
            break;
    }
    latch(0x7E);
    func_800F9200();
    row_pad();
    page_paint2(0x1B49);
    func_80120F1C();
    func_80123FB4();
    func_801241B8();
    draw_pad_cur();
    func_8011EF30();
    draw_pad_cur();
    func_8011FB74();
    wnd_open(0x188);
    draw_pad_cur();
    func_801223A4();
    func_80124298();
    func_801280D4();
    func_80132C0C();
    latch(0xFF);
    txt_draw(0x1B4A);
    func_801264E8();
    func_80132CA4();
    func_8017F8F8();
    func_8011F6A4();
    func_8011EF0C();
    func_80126590();
    func_800F8F74(0x1B48);
L6d8:
    for (;;) {
        txt_set(0x1B48);
        if (gate(0x202) != 0)
            goto L700;
        wnd_open(0x3010);
        goto L708;
    L700:
        wnd_open(0x3040);
    L708:
        sep();
        draw_pad(0x300);
        func_8011F724();
        func_80132C0C();
        func_8011F684();
        func_801264E8();
        func_8011F884();
        row_page_cur();
        row_read(0x80);
        if (sel(2) != 0)
            goto L790;
        txt_set(0x1B48);
        if (gate(0x202) != 0)
            goto L7f8;
        open_row_cur();
        open_row(1);
        goto L848;
    L790:
        row_page(1);
        row_read(0x80);
        if (sel(0x202) != 0)
            goto L7f8;
        row_page(1);
        row_read(3);
        if (sel(2) != 0)
            goto L6d8;
        page_paint2(0x1B48);
        txt_set(0x1B48);
        row_read(1);
        txt_draw(0x1B48);
        goto L6d8;
    L7f8:
        draw_pad_cur();
        func_8011EF30();
        draw_pad_cur();
        func_8011FBA4();
        func_8011F320();
        func_801264E8();
        func_8011FF40();
        func_80126610();
        return;
    L848:
        open_row(0x45);
        for (;;) {
            row_page(0x45);
            func_8012D204();
            if (io_just() == 0)
                break;
            key_page(0x45);
            row_page(0x45);
            io_poll(5);
            if (io_just() == 0)
                goto L850;
            open_row(0x45);
        L850:
            ;
        }
    La8:
        row_page(0x45);
        txt_draw(0x1B4A);
        latch(1);
        txt_draw(0x1A73);
        draw_pad_cur();
        func_8011EF30();
        draw_pad_cur();
        func_8011FBA4();
        draw_pad_cur();
        func_8011EF30();
        func_8011F320();
        func_801264E8();
    L918:
        for (;;) {
            func_80132C0C();
            txt_set(0x1B4A);
            func_80124EAC();
            tail(0x60);
            func_800F6E30(0x60);
            draw_pad(0x152);
            func_80120A0C();
            func_801264C0();
            func_8011F6A4();
            func_8011F884();
            row_page(1);
            row_read(1);
            if (sel(2) != 0)
                goto La00;
        L988:
            for (;;) {
                latch(1);
                txt_draw(0x1A73);
                txt_set(0x1B4A);
                func_800F61E8();
                io_poll(5);
                if (io_just() == 0)
                    goto L9c8;
                sep();
            L9c8:
                txt_draw(0x1B4A);
                func_80124EAC();
                tail(0x45);
                func_800F6E30(0x45);
                row_read(0x3F);
                if (sel(2) != 0)
                    continue;
                break;
            }
        La00:
            row_page(1);
            row_read(2);
            if (sel(2) != 0)
                goto La90;
            for (;;) {
                latch(1);
                txt_draw(0x1A73);
                txt_set(0x1B4A);
                poll_spin();
                if (poll_go(0x8080) != 0)
                    goto La58;
                latch(4);
            La58:
                txt_draw(0x1B4A);
                func_80124EAC();
                tail(0x45);
                func_800F6E30(0x45);
                row_read(0x3F);
                if (sel(2) != 0)
                    continue;
                break;
            }
        La90:
            row_page_cur();
            row_read(0x80);
            if (sel(2) == 0)
                goto Lad8;
            row_page(1);
            row_read(0x80);
            if (sel(2) == 0)
                goto L7f8;
            continue;
        Lad8:
            txt_set(0x1B4A);
            func_8012D204();
            poll_spin();
            func_801224D0();
            cell_put(0x43);
            row_prep(0x20);
            row_read2(0x43);
            row_arm_s_cur();
            func_800F8274(0x45);
            row_arm_s_cur();
            row_arm_s2_cur();
            cell_peek0(cell_state(0x45));
            func_800F4064(0x1500);
            row_sync2(5);
            draw_pad(0x1B0A);
            row_sync();
            row_open();
            func_800F3D64(0x7E7E);
            row_prep_close();
            func_80128D4C();
            row_done();
            row_close();
            row_prep(0x20);
            row_sync2(5);
            func_800F3D64(0x7E7E);
            row_prep_close();
            return;
        }
    }
}
