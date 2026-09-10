/* FF4 source-port — interpreted module for battle_single_row_x89_x7a_windows.
 * Ground truth: src/battle_single_row_x89_x7a_windows.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_single_row_x89_x7a_windows(void)
{
    /* battle single-row: 0x89/0x7A windows, 0x2100 text, 0xC/0xE/0x91/
       0x8F/0x92 windows, 0x411/0x415 texts, 8011581C/80110474/
       80110024/8011EA5C; loop L11035C. */
    fn_1x10024();
    wnd_open(0x30);
    tail(0x89);
    open_row(0x7A);
L11035c:
    for (;;) {
        wnd_fx_7d();
        row_page(0x89);
        io_poll(0x10);
        if (io_go() != 0)
            goto L11038C;
        txt_draw(0x2100);
    L11038C:
        cell_clear_pad();
        fn_1x10474();
        latch(0x68);
        cell_put(0xC);
        row_page(0x89);
        sep_a();
        row_open_w(0x80);
        cell_put(0xE);
        latch(0x18);
        cell_put(0x91);
        latch(0x78);
        cell_put(0x8F);
        draw_pad(0xB0);
        latch_cur();
        cell_put(0x92);
        battle_rows_300();
        latch(0xF0);
        txt_draw(0x411);
        txt_draw(0x415);
        page(0x89);
        cell_set50_from54();
        tail(0x89);
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    open_row(0x80);
    open_row(0xC8);
    battle_wndfx_run();
    return;
}
