/* FF4 source-port — interpreted module for func_800F9CE8.
 * Ground truth: src/func_800F9CE8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_800F9CE8(void)
{
Lcf0:
    for (;;) {
        func_800F54B8();
        sep_a();
        row_prep(0x10);
        row_prep_close();
        func_800F8F74(0x420D);
        func_800F8F74(0x420B);
        func_800F8F74(0x420C);
        latch(0x8F);
        txt_draw(0x2100);
        latch_cur();
        txt_draw(0x4200);
        latch_cur();
        stat_sync();
        latch_cur();
        func_800F9200();
        row_pad();
        wnd_open(0x600);
        row_open();
        func_800F94B8();
        wnd_open(0x2FF);
        func_800FC548();
        func_80176060();
        func_801762D0();
        func_801690F8();
        func_8011EB3C();
        if (func_800FB430() != 0)
            goto Ldf4;
        func_801798F0();
        func_80179670();
        func_80179930();
    }
Ldf4:
    func_80126BB8();
    txt_set(0x17EF);
    sep_a();
    cell_poke0(cell_state(0xFFF));
    txt_draw(0x17EF);
    row_sel_cell_cur();
    txt_draw(0x17EE);
    txt_set(0x17FB);
    io_poll_cur();
    if (io_just() == 0)
        goto Lef4;
    func_800FA834();
    func_800FF0AC();
    func_8017477C();
    func_80176060();
    func_800FA9B4();
    func_8011B874();
    latch(1);
    cell_put(0xB1);
    latch(1);
    cell_put(0x7D);
    latch(0xF);
    cell_put(0x80);
    latch(0x81);
    txt_draw(0x4200);
    func_800F5448();
    open_row(0xAB);
    latch(0x10);
    func_801163E8();
    open_row(0xB1);
    goto Lf74;
Lef4:
    func_8011B874();
Lefc:
    func_80176060();
    func_800FA9B4();
    latch(1);
    cell_put(0x7D);
    open_row(0xDF);
    open_row(0xB1);
    goto La3a8;
Lf34:
    open_row(0x79);
    open_row(0x7A);
    open_row(0x7B);
    latch(0x81);
    txt_draw(0x4200);
    func_800FE7D8();
    func_800F5448();
Lf74:
    for (;;) {
        func_800FE778();
        open_row(0xE0);
        func_801764DC();
        func_800FA5B8();
        row_page(0xE0);
        if (gate(2) == 0)
            continue;
        txt_set(0x1700);
        io_poll(3);
        if (io_just() != 0)
            goto La144;
        latch(7);
        txt_draw(0x2105);
        func_80101350();
        row_page(0xE0);
        if (gate(2) == 0)
            continue;
        row_page(0xCD);
        if (gate(2) == 0)
            goto La3a8;
        func_800FCCDC();
        row_page(0x85);
        if (gate(2) != 0)
            goto La04c;
        if (func_800FC110() != 0)
            goto Ldf4;
        goto Lefc;
    La04c:
        row_page(0xE0);
        if (gate(2) == 0)
            continue;
        func_8010543C();
        row_page(0xE0);
        if (gate(2) != 0)
            goto La094;
        func_800F8F74(0x6AB);
        continue;
    La094:
        func_80102770();
        func_800FE870();
        func_800FF024();
        func_800FDAFC();
        func_80175D90();
        row_page(0xCE);
        if (gate(0x202) == 0)
            continue;
        open_row(0xCE);
        txt_set(0x1700);
        if (gate(0x202) != 0)
            goto La104;
        func_800FF1C0();
        goto Lf34;
    La104:
        io_poll(1);
        if (io_just() == 0)
            goto La12c;
        func_800FF54C();
        goto Lf34;
    La12c:
        io_poll(2);
        io_just();
        continue;
    La144:
        if (func_80100D50() != 0)
            goto Ldf4;
        row_page(0xCD);
        if (gate(2) == 0)
            goto La3a8;
        func_800FCCDC();
        row_page(0x85);
        if (gate(2) == 0)
            goto La1b4;
        if (func_800FFE0C() != 0)
            goto Ldf4;
        row_page(0x85);
        if (gate(2) != 0)
            goto La1cc;
    La1b4:
        if (func_800FC1CC() != 0)
            goto Ldf4;
        goto Lefc;
    La1cc:
        row_page(0xE0);
        if (gate(2) == 0)
            continue;
        func_80104934();
        func_8010B6EC();
        func_80102770();
        func_8010C368();
        func_800FE870();
        func_80170C14();
        func_8010B010();
        func_80175D90();
        func_800FCAB8();
        row_page(0xD1);
        if (gate(2) != 0)
            continue;
        page_open(0x172C);
        func_800F5E48();
        func_800F5E48();
        func_800F5E48();
        label(0x172C);
        txt_cell(0x172E);
        io_poll(0xFB);
        if (io_go() == 0)
            goto La294;
        func_800FD6B8();
    La294:
        func_800FEC74();
        open_row(0xD6);
        txt_cell(0x172E);
        sep_b();
        func_800F8058(0xFB);
        if (io_go() == 0)
            goto La324;
        txt_draw(0x1700);
        txt_cell(0x172F);
        txt_draw(0x1706);
        latch(2);
        txt_draw(0x1705);
        txt_cell(0x1730);
        txt_draw(0x1707);
        wnd_open_cur();
        label(0x172C);
        func_800FD6B8();
        goto La3a8;
    La324:
        latch(3);
        txt_draw(0x1700);
        txt_cell(0x172E);
        txt_draw(0x1702);
        txt_cell(0x172F);
        row_read(0x3F);
        txt_draw(0x1706);
        txt_cell(0x172F);
        sep_a();
        row_open_w(2);
        row_read(3);
        txt_draw(0x1705);
        txt_cell(0x1730);
        txt_draw(0x1707);
    La3a8:
        txt_set(0x1700);
        if (gate(0x202) != 0)
            goto La3d8;
        func_800FB09C();
    La3c8:
        func_800FED3C();
        goto Lf34;
    La3d8:
        io_poll(1);
        if (io_just() == 0)
            goto La400;
        func_800FB160();
        goto La3c8;
    La400:
        io_poll(2);
        if (io_just() == 0)
            goto La428;
        func_800FB224();
        goto La3c8;
    La428:
        row_page(0x85);
        if (gate(2) != 0)
            goto La450;
        func_800FAD48();
        goto La3c8;
    La450:
        func_800FAA04();
        goto La3c8;
    }
}
