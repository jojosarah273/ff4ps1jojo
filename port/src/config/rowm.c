/* FF4 source-port — interpreted module for func_80136A58.
 * Ground truth: src/func_80136A58.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80136A58(void)
{
    func_801378B0();
    wnd_open(0xFFB8);
    tail(0x9F);
    func_80124130();
    func_80134E74();
    midrow_paint_c();
    func_801264C0();
    anim_noop();
    func_80120FBC();
    draw_pad_cur();
    battle_rows_sync();
    draw_pad_cur();
    battle_rows_29();
    draw_pad_cur();
    battle_rows_29();
    midrow_paint_b();
    func_8016EA7C();
    func_8012AAC0();
    func_80126528();
    func_80120FBC();
    midrow_pad88_run();
    func_80126480();
    func_80120B6C();
Lb24:
    for (;;) {
        latch(0x20);
        cell_put(0x3F);
        txt_set(0x1B7A);
        if (gate(2) != 0)
            goto Lb5c;
        wnd_open(0x3058);
        goto Lb64;
    Lb5c:
        wnd_open(0x3040);
    Lb64:
        draw_pad(0x300);
        latch_cur();
        func_8011F724();
        txt_set(0x1B7C);
        draw_pad(0x19A);
        func_801206DC();
        midrow_pad88_run();
        func_80126480();
        midrow_degen();
        func_80137938();
        row_page_cur();
        row_read(0x80);
        if (sel(2) == 0)
            goto Lbfc;
        row_page(1);
        row_read(0x80);
        if (sel(2) == 0)
            return;
    }
Lbfc:
    draw_pad(0x310);
    func_801376B0();
Lc0c:
    for (;;) {
        latch(0x20);
        cell_put(0x3F);
        txt_set(0x1B94);
        row_sel_cell_cur();
        row_sel_cell2_cur();
        row_open_w(0x58);
        cell_put(0x46);
        txt_set(0x1B95);
        if (gate(2) != 0)
            goto Lc84;
        latch(0x78);
        goto Lc8c;
    Lc84:
        latch(8);
    Lc8c:
        cell_put(0x45);
        func_8011F6D4();
        midrow_pad88_run();
        midrow_degen();
    Lcac:
        row_page(1);
        row_read(0x80);
        if (sel(2) != 0)
            goto Lcdc;
        sep_a();
        return;
    Lcdc:
        row_page_cur();
        row_read(0x80);
        if (sel(2) != 0)
            goto Ld74;
        func_80136FFC();
        if (io_go() == 0)
            goto Ld4c;
        midrow_paint_c();
        func_80120DB4();
        func_8012AAC0();
        func_80126528();
        func_801352F0();
        func_801264C0();
        func_801263C8();
    Ld4c:
        latch(0x20);
        cell_put(0x3F);
        config_row_d600b();
        draw_pad(0x31C);
        func_8012B100();
    Ld74:
        row_page(1);
        row_read(1);
        if (sel(2) != 0)
            goto Ldc4;
        txt_set(0x1B95);
        cell_set50_from40();
        row_read(1);
        txt_draw(0x1B95);
        if (sel(2) != 0)
            goto Lf14;
    Ldc4:
        row_page(1);
        row_read(2);
        if (sel(2) != 0)
            goto Le14;
        txt_set(0x1B95);
        cell_set50_from40();
        row_read(1);
        txt_draw(0x1B95);
        if (sel(0x202) != 0)
            goto Le34;
    Le14:
        row_page(1);
        row_read(8);
        if (sel(2) != 0)
            goto Lef4;
    Le34:
        txt_set(0x1B94);
        poll_spin();
        if (poll_go(0x80) != 0)
            goto Le64;
        txt_draw(0x1B94);
        goto Lef4;
    Le64:
        txt_set(0x1B96);
        poll_spin();
        if (poll_go(0x80) != 0)
            goto Lef4;
        txt_draw(0x1B96);
        latch(8);
        cell_put(0x45);
        for (;;) {
            row_prep(0x20);
            cell_dec_cell(0x9F);
            cell_dec_cell(0x9F);
            row_prep_close();
            func_801266C8();
            poll_pair(0x45);
            if (poll_go(0x202) != 0)
                continue;
            break;
        }
        func_8011F7D4();
        if (io_go() == 0)
            goto Lcac;
    Lef4:
        row_page(1);
        row_read(4);
        if (sel(2) != 0)
            goto Lc0c;
    Lf14:
        txt_set(0x1B94);
        cell_set50_from40();
        io_poll(8);
        if (io_just() != 0)
            goto Lf4c;
        txt_draw(0x1B94);
        goto Lc0c;
    Lf4c:
        txt_set(0x1B96);
        cell_set50_from40();
        io_poll(0x11);
        if (io_just() != 0)
            goto Lc0c;
        txt_draw(0x1B96);
        latch(8);
        cell_put(0x45);
        for (;;) {
            row_prep(0x20);
            cell_inc_cell(0x9F);
            cell_inc_cell(0x9F);
            row_prep_close();
            func_801266C8();
            poll_pair(0x45);
            if (poll_go(0x202) != 0)
                continue;
            break;
        }
        func_8011F7D4();
        if (io_go() == 0)
            goto Lcac;
        goto Lc0c;
    }
}
