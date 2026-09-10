/* FF4 source-port — interpreted module for func_8012A190.
 * Ground truth: src/func_8012A190.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8012A190(void)
{
La198:
    for (;;) {
        func_8012C980();
        wnd_open(0x6800);
        tail(0x1D);
        wnd_open(0xA600);
        tail(0x1F);
        latch(0x7E);
        cell_put(0x21);
        wnd_open(0x140);
        tail(0x22);
        midrow_pad88();
        battle_rows_2115();
        anim_noop();
        func_80126480();
        midrow_degen();
    La208:
        row_page(1);
        row_read(2);
        if (sel(2) != 0)
            goto La258;
        txt_set(0x1B22);
        cell_set50_from40();
        row_read(1);
        txt_draw(0x1B22);
        if (sel(0x202) != 0)
            goto La2c8;
    La258:
        row_page(1);
        row_read(1);
        if (sel(2) != 0)
            goto La2a8;
        txt_set(0x1B22);
        cell_set50_from40();
        row_read(1);
        txt_draw(0x1B22);
        if (sel(2) != 0)
            goto La418;
    La2a8:
        row_page(1);
        row_read(8);
        if (sel(2) != 0)
            goto La3f8;
    La2c8:
        txt_set(0x1B23);
        if (gate(0x202) != 0)
            goto La3e8;
        txt_set(0x1B1A);
        if (gate(2) != 0)
            goto La3f8;
        poll_spin();
        txt_draw(0x1B1A);
        row_prep(0x20);
        draw_pad(8);
        for (;;) {
            row_read2(0x93);
            sep_b();
            cell_pos_back2(2);
            cell_put_hi9(0x93);
            row_prep_close();
            txt_set(0x1B19);
            if (gate(2) != 0)
                goto La368;
            page_paint2(0x311);
            page_paint2(0x311);
        La368:
            row_sync();
            func_8012C980();
            midrow_pad88_run();
            func_80126418();
            shop_row_kick_f0();
            row_done();
            row_prep(0x20);
            poll_pair_cur();
            if (poll_go(0x202) != 0)
                continue;
            break;
        }
        row_prep_close();
        func_8012A678();
        func_8011F7D4();
        if (io_go() != 0)
            goto La3f8;
        goto La208;
    La3e8:
        poll_spin();
        txt_draw(0x1B23);
    La3f8:
        row_page(1);
        row_read(4);
        if (sel(2) != 0)
            goto La558;
    La418:
        txt_set(0x1B23);
        io_poll(9);
        if (io_go() == 0)
            goto La548;
        txt_set(0x1B1A);
        io_poll(0xE);
        if (io_just() != 0)
            goto La558;
        cell_set50_from40();
        txt_draw(0x1B1A);
        row_prep(0x20);
        draw_pad(8);
        for (;;) {
            row_read2(0x93);
            sep_a();
            cell_pos_fwd(2);
            cell_put_hi9(0x93);
            row_prep_close();
            txt_set(0x1B19);
            if (gate(2) != 0)
                goto La4c8;
            cell_dec_bank(0x311);
            cell_dec_bank(0x311);
        La4c8:
            row_sync();
            func_8012C980();
            midrow_pad88_run();
            func_80126418();
            shop_row_kick_f0();
            row_done();
            row_prep(0x20);
            poll_pair_cur();
            if (poll_go(0x202) != 0)
                continue;
            break;
        }
        row_prep_close();
        func_8012A678();
        func_8011F7D4();
        if (io_go() != 0)
            goto La558;
        goto La208;
    La548:
        cell_set50_from40();
        txt_draw(0x1B23);
    La558:
        row_page_cur();
        row_read(0x80);
        if (sel(2) != 0)
            goto La5f0;
        txt_set(0x1B19);
        if (gate(0x202) != 0)
            goto La5a0;
        func_8012B050();
        goto La658;
    La5a0:
        func_8012B190();
        config_row_b600();
        func_8012AAC0();
        cell_clear_bank(0x1B19);
        func_8012B0B0();
        func_80126458();
        anim_noop();
        goto La658;
    La5f0:
        row_page(1);
        row_read(0x80);
        if (sel(2) != 0)
            goto La658;
        txt_set(0x1B19);
        if (gate(2) == 0)
            goto La648;
        func_8012B0B0();
        func_80125A64();
        open_row(0x86);
        return;
    La648:
        cell_clear_bank(0x1B19);
        func_8012B0B0();
    La658:
        func_8012A678();
        continue;
    }
}
