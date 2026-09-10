/* FF4 source-port — interpreted module for battle_row_info_xef_xf1_xf3_xf5_x8.
 * Ground truth: src/battle_row_info_xef_xf1_xf3_xf5_x8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_row_info_xef_xf1_xf3_xf5_x8(void)
{
    /* battle row info: 0xEF/0xF1/0xF3/0xF5/0x89 windows with 8010FCA8
       header; loop L10F9A4 (weights on 5958(0xC0/0x138)) with the
       80117F40/80115D2C/80110474 rows; closes via 8011EA5C. */
    wnd_open(0x30);
    tail(0xEF);
    wnd_open(0xE0);
    tail(0xF1);
    wnd_open(0x100);
    tail(0xF3);
    wnd_open_cur();
    tail(0xF5);
    fn_1x0fca8();
    wnd_open(0x140);
    tail(0x89);
L10f9a4:
    for (;;) {
        wnd_fx_7d();
        page(0x89);
        poll_t(0xC0);
        if (io_just() == 0)
            goto L10F9DC;
        latch(0x2C);
        fn_1x17f40();
    L10F9DC:
        cell_clear_pad();
        page(0x89);
        poll_t(0xC0);
        if (io_go() != 0)
            goto L10FA34;
        row_page(0x7A);
        row_read(3);
        if (sel(0x202) != 0)
            goto L10FA7C;
        poll_pair(0xF1);
        goto L10FA7C;
    L10FA34:
        battle_window_24();
        page(0x89);
        poll_t(0x138);
        if (io_just() == 0)
            goto L10FA7C;
        latch(0x23);
        wnd_fx_pads();
        latch(1);
        cell_put(0xE5);
    L10FA7C:
        fn_1x10474();
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
