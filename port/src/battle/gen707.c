/* FF4 source-port — interpreted module for func_80114880.
 * Ground truth: src/func_80114880.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80114880(void)
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
        func_80114D18();
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
    func_8011EA5C();
    return;
}
