/* FF4 source-port — interpreted module for battle_rows_twin_of_f944_xef_xf1_x.
 * Ground truth: src/battle_rows_twin_of_f944_xef_xf1_x.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_rows_twin_of_f944_xef_xf1_x(void)
{
    /* battle rows (twin of 8010F944): 0xEF/0xF1/0xF3/0xF5/0x89
       windows, 8010FCA8/80115D2C/80110474/8011EA5C; loop L10FBB8
       (5958(0x140) weights). */
    wnd_open(0x30);
    tail(0xEF);
    wnd_open(0xB0);
    tail(0xF1);
    wnd_open(0x100);
    tail(0xF3);
    wnd_open_cur();
    tail(0xF5);
    fn_1x0fca8();
    wnd_open(0x1C0);
    tail(0x89);
L10fbb8:
    for (;;) {
        wnd_fx_7d();
        cell_clear_pad();
        page(0x89);
        poll_t(0x140);
        if (io_go() != 0)
            goto L10FC28;
        row_page(0x7A);
        row_read(3);
        if (sel(0x202) != 0)
            goto L10FC60;
        page(0xF3);
        cell_set50_from54();
        tail(0xF3);
        goto L10FC60;
    L10FC28:
        battle_window_24();
        page(0x89);
        poll_t(0x1B8);
        if (io_just() == 0)
            goto L10FC60;
        latch(0x23);
        wnd_fx_pads();
    L10FC60:
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
