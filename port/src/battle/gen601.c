/* FF4 source-port — interpreted module for func_8010FD30.
 * Ground truth: src/func_8010FD30.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8010FD30(void)
{
    /* battle rows: 0x89/0x7A windows, 0xAD4/0xAD5/0xAD0/0xAD1 texts,
       80115D2C/80110474/8011EA5C rows; loop L10FD60 on 5C64(0x202). */
    func_80110024();
    wnd_open(0x200);
    tail(0x89);
L10fd60:
    for (;;) {
        wnd_fx_7d();
        cell_clear_pad();
        row_page(0x7A);
        row_read(6);
        txt_draw(0xAD4);
        txt_draw(0xAD5);
        txt_draw(0xAD0);
        txt_draw(0xAD1);
        txt_draw_cur();
        battle_window_24();
        func_80110474();
        row_page(0x89);
        row_read(0x3F);
        if (sel(0x202) != 0)
            goto L10FEA4;
        latch(0x23);
        wnd_fx_pads();
    L10FEA4:
        page(0x89);
        cell_set50_from54();
        tail(0x89);
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    battle_wndfx_run();
    return;
}
