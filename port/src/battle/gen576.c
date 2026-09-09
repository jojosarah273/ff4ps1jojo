/* FF4 source-port — interpreted module for func_80114EBC.
 * Ground truth: src/func_80114EBC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80114EBC(void)
{
    /* battle rows: 0xB6/0x89/0x2C/0x2E windows, 80114FD0/80172BA8/
       80115080/8011511C/80115038/8011EA5C rows; loop L114EDC on
       row reads. */
    func_80114FD0();
    wnd_open(0xB6);
    tail(0x89);
L114edc:
    for (;;) {
        wnd_fx_7d();
        page(0x89);
        poll_t(0xF);
        if (io_go() != 0)
            goto L114F20;
        txt_draw(0x2100);
    L114F20:
        cell_clear_pad();
        func_80172BA8();
        func_80115080();
        page(0x2C);
        cell_fmt2(0x2E);
        tail(0x2E);
        row_info(0x2C);
        latch(0x20);
        func_8011511C();
        latch(1);
        cell_put(5);
        open_row(4);
        func_80115038();
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
