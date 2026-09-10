/* FF4 source-port — interpreted module for battle_spell_row_xca_x89_windows_x.
 * Ground truth: src/battle_spell_row_xca_x89_windows_x.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_spell_row_xca_x89_windows_x(void)
{
    /* battle spell row: 0xCA/0x89 windows, 0x2100/0xAD4/0xAD5 texts,
       80115D2C/80110474/8011EA5C; loop L110694 on 5C64(0x202). */
    fn_1x10024();
    latch(2);
    cell_put(0xCA);
    wnd_open(0x180);
    tail(0x89);
L110694:
    for (;;) {
        wnd_fx_7d();
        page(0x89);
        poll_t(0x10);
        if (io_go() != 0)
            goto L1106D8;
        txt_draw(0x2100);
    L1106D8:
        cell_clear_pad();
        latch(0x70);
        txt_draw(0xAD4);
        latch(0x58);
        txt_draw(0xAD5);
        latch(3);
        txt_draw(0xAD0);
        txt_draw(0xAD1);
        battle_window_24();
        fn_1x10474();
        row_page(0x89);
        row_read(0x3F);
        if (sel(0x202) != 0)
            goto L110758;
        latch(0x23);
        wnd_fx_pads();
    L110758:
        page(0x89);
        cell_set50_from54();
        tail(0x89);
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    open_row(0x80);
    battle_wndfx_run();
    return;
}
