/* FF4 source-port — interpreted module for battle_rows_x70_x2c_x2e_x89_window.
 * Ground truth: src/battle_rows_x70_x2c_x2e_x89_window.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_rows_x70_x2c_x2e_x89_window(void)
{
    /* battle rows: 0x70/0x2C/0x2E/0x89 windows, 80114D18/8011EA5C
       rows; loop L1148B8 on 5958(0x80/0x100). */
    wnd_open(0x70);
    tail(0x2C);
    wnd_open(0x70);
    tail(0x2E);
    wnd_open(0xD0);
    tail(0x89);
L1148b8:
    for (;;) {
        fn_1x14d18();
        page(0x89);
        cell_set50_from54();
        tail(0x89);
        poll_t(0x80);
        if (io_go() != 0)
            continue;
        page(0x2C);
        cell_set50_from54();
        tail(0x2C);
        poll_t_cur();
        if (io_just() == 0)
            continue;
        break;
    }
    battle_wndfx_run();
    return;
}
