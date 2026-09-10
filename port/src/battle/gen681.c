/* FF4 source-port — interpreted module for battle_rows_xc0_x89_windows_fd0_ba.
 * Ground truth: src/battle_rows_xc0_x89_windows_fd0_ba.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_rows_xc0_x89_windows_fd0_ba(void)
{
    /* battle rows: 0xC0/0x89 windows, 80114FD0/80172BA8/80115080/
       8011511C/80115038/8011EA5C rows; loop L114DE8 on row reads. */
    fn_1x14fd0();
    wnd_open(0xC0);
    tail(0x89);
L114de8:
    for (;;) {
        wnd_fx_7d();
        page(0x89);
        poll_t(0xF);
        if (io_go() != 0)
            goto L114E2C;
        txt_draw(0x2100);
    L114E2C:
        cell_clear_pad();
        fn_1x72ba8();
        battle_rows_x7a_window_x1f_x70_rea();
        latch(0x40);
        fn_1x1511c();
        latch(4);
        cell_put(5);
        open_row(4);
        fn_1x15038();
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
