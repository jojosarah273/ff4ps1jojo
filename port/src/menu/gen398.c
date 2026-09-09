/* FF4 source-port — interpreted module for func_800FF978.
 * Ground truth: src/func_800FF978.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_800FF978(void)
{
    /* shop inventory rows: 0x4C/0x4E/0x4A/0x49 windows, two 80170458
       renders (0x4200/0x4300 gates); loops LFFA20/LFFA24/LFFA6C poll
       the 0xE5B cells; 80174348 close. */
    wnd_open(0x4200);
    tail(0x4C);
    wnd_open(0x100);
    tail(0x4E);
    wnd_open_cur();
    tail(0x4A);
    latch(0x1B);
    cell_put(0x49);
    func_80170458();
    wnd_open(0x4300);
    tail(0x4C);
    wnd_open(0x1D00);
    tail(0x4E);
    wnd_open_cur();
    tail(0x4A);
    latch(0x1C);
    cell_put(0x49);
    func_80170458();
    draw_pad_cur();
    wnd_open_cur();
L8FFA20:
    for (;;) {
    L8FFA24:
        for (;;) {
            func_800F6C68();
            func_800F8960(0xE5B);
            cell_step();
            step2();
            row_read(0xF);
            if (sel(0x202) != 0)
                goto L8FFA20;
            break;
        }
    L8FFa6c:
        for (;;) {
            latch_cur();
            func_800F8960(0xE5B);
            step2();
            row_read(0xF);
            if (sel(0x202) != 0)
                continue;
            break;
        }
        poll_t(0x80);
        if (io_just() == 0)
            continue;
        break;
    }
    func_80174348();
    return;
}
