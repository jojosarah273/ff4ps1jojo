/* FF4 source-port — interpreted module for func_8013327C.
 * Ground truth: src/func_8013327C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8013327C(void)
{
L288:
    for (;;) {
        func_8012102C();
        txt_set(0x1BAD);
        if (gate(0x202) != 0)
            goto L2dc;
        row_prep(0x20);
        wnd_open(0xA600);
        draw_pad(0xF600);
        row_sync2(0x7FF);
        battle_wait_just(0x7E7E);
        row_prep_close();
    L2dc:
        draw_pad_cur();
        func_8011FB74();
        row_page(0xE8);
        cell_cur_save54_b();
        tail(0x60);
        row_page(0xE8);
        func_80150A30();
        draw_pad(0x1D);
        cell_push_c8_sel(0x60);
        draw_pad(0x90);
        func_80120774();
        draw_pad(0x2A);
        cell_push_c8_sel(0x60);
        draw_pad(0x110);
        func_80120774();
        draw_pad(0x24);
        cell_push_c8_sel(0x60);
        draw_pad(0x190);
        func_80120774();
        latch(0x31);
        txt_draw(0xA690);
        latch(0x3B);
        txt_draw(0xA710);
        latch(0x41);
        txt_draw(0xA790);
        cell_push_c8_lo(0x60);
        draw_pad(0x1C6);
        func_80120A0C();
        cell_push_c8_lo(0x60);
        row_read(0xC0);
        cell_put(0x45);
        open_row(0x46);
        row_prep(0x20);
        row_sync2_cur();
        sep_a();
        cell_peek0(cell_state(0x45));
        row_prep_close();
        wnd_open(0x248);
        battle_rows_100();
        open_row(0xDB);
        draw_pad(0x30);
        wnd_open(0x164);
        func_80124F28();
        step2();
        wnd_open(0x1E4);
        func_80124F28();
        step2();
        wnd_open(0x264);
        func_80124F28();
        draw_pad(0x33);
        wnd_open(0x64);
        func_80124F28();
        step2();
        cell_push_c8_sel(0x60);
        io_poll(2);
        if (io_go() != 0) {
            row_sync();
            draw_pad(0xB6);
            func_801206DC();
            row_done();
        }
        step2();
        wnd_open(0xE4);
        func_80124F28();
        step2();
        cell_push_c8_sel(0x60);
        io_poll(2);
        if (io_go() != 0) {
            draw_pad(0x136);
            func_801206DC();
        }
        txt_set(0x1BAD);
        if (gate(0x202) != 0)
            goto L614;
        config_row_b600();
        draw_pad_cur();
        battle_rows_sync();
        func_80126458();
        func_801263F0();
        page_paint2(0x1BAD);
        row_prep(0x20);
        wnd_open(0xC600);
        draw_pad(0xF600);
        row_sync2(0x7FF);
        battle_wait_just(0x7E7E);
        row_prep_close();
        func_80124130();
        func_801264C0();
        latch(0x7A);
        cell_pull_c8_lo(0x210A);
        open_row(0x96);
        open_row(0x97);
        midrow_paint_a();
        goto L61c;
    L614:
        func_801263F0();
    L61c:
        latch_cur();
        stat_sync();
        txt_set(0x1B37);
        row_sel_cell_cur();
        row_sel_cell2_cur();
        cell_poke0(cell_state(0x1B37));
        row_prep(0x20);
        cell_pos_fwd(0x1B28);
        cell_put_hi9(0x51);
        row_done2();
        cell_put_hi9(0x54);
        row_done2();
        cell_put_hi9(0x57);
        row_prep_close();
        txt_set(0x1B37);
        row_sel_cell_cur();
        row_sel_cell2_cur();
        row_open_w(0x10);
        cell_put(0x46);
        latch(0x60);
        cell_put(0x45);
        config_pad_300();
        func_801263F0();
        anim_noop();
        midrow_degen();
        row_page(1);
        row_read(8);
        if (sel(2) != 0)
            goto L754;
        txt_set(0x1B37);
        poll_spin();
        if (poll_go(0x8080) != 0)
            goto L74c;
        latch(4);
    L74c:
        txt_draw(0x1B37);
    L754:
        row_page(1);
        row_read(4);
        if (sel(2) != 0)
            goto L7ac;
        txt_set(0x1B37);
        cell_set50_from40();
        io_poll(5);
        if (io_just() == 0)
            goto L7a4;
        latch_cur();
    L7a4:
        txt_draw(0x1B37);
    L7ac:
        row_page_cur();
        row_read(0x80);
        if (sel(2) != 0)
            goto L86c;
        txt_set(0x1B37);
        row_sel_cell_cur();
        battle_put43();
        txt_draw(0x1B1D);
        txt_draw(0x1B1E);
        func_8013389C();
        animation_row_310();
        func_80124130();
        func_801264C0();
        anim_noop();
        continue;
    L86c:
        row_page(1);
        row_read(0x80);
        if (sel(2) != 0)
            goto L61c;
        return;
    }
}
