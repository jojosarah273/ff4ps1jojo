/* FF4 source-port — interpreted module for func_80114938.
 * Ground truth: src/func_80114938.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80114938(void)
{
    /* battle magic list: 0x2C/0x2E/0x89/0xC/0xE/0xF/0x91/0x92 windows,
       0x2100 title, 80114C98/8011581C/80115A34/8011EA5C rows; the
       L114970 loop polls 5958(0x80)/5958(0x100) and closes on 8FB8(0x80). */
    wnd_open(0x70);
    tail(0x2C);
    wnd_open(0x78);
    tail(0x2E);
    wnd_open(0xD0);
    tail(0x89);
L114970:
    for (;;) {
        wnd_fx_7d();
        row_page(0x2E);
        io_poll(0x10);
        if (io_go() != 0)
            goto L1149A0;
        txt_draw(0x2100);
    L1149A0:
        func_80114C98();
        page(0x2C);
        tail(0xC);
        row_page(0x2E);
        sep_b();
        cell_pos_back(8);
        cell_put(0xE);
        row_page(0x2F);
        cell_pos_back();
        cell_put(0xF);
        latch(0x1C);
        cell_put(0x91);
        latch(0xD8);
        cell_put(0x8F);
        draw_pad(0x190);
        latch(0x60);
        cell_put(0x92);
        battle_rows_300();
        draw_pad(0x70);
        row_info(0xE);
        draw_pad(0x150);
        battle_item_rows();
        draw_pad(0x68);
        row_info(0xE);
        draw_pad(0x160);
        battle_item_rows();
        page(0x89);
        cell_set50_from54();
        tail(0x89);
        poll_t(0x80);
        if (io_go() != 0)
            continue;
        page(0x2E);
        cell_set50_from54();
        tail(0x2E);
        poll_t_cur();
        if (io_just() == 0)
            continue;
        break;
    }
    open_row(0x80);
    battle_wndfx_run();
    return;
}
