/* FF4 source-port — interpreted module for func_8010E158.
 * Ground truth: src/func_8010E158.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8010E158(void)
{
    /* battle rows: 0x7B/0x7A windows, 0x64/0x89 windows,
       8010543C/80102770/80172BA8/8011EA5C rows; loop L10E180 on
       row reads. */
    open_row(0x7B);
    open_row(0x7A);
    wnd_open(0x64);
    tail(0x89);
L10e180:
    for (;;) {
        wnd_fx_7d();
        row_page(0x89);
        io_poll(0x40);
        if (io_go() != 0)
            goto L10E1E0;
        cell_put(0xB7);
        sep_a();
        row_open_w(0x10);
        cell_put(0xAD);
    L10E1E0:
        latch(1);
        cell_put(0xD5);
        cell_clear_pad();
        latch(2);
        cell_put(5);
        open_row(4);
        latch(1);
        cell_put(0xD5);
        func_8010543C();
        func_80102770();
        func_80172BA8();
        page(0x89);
        cell_set50_from54();
        tail(0x89);
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    func_8011EA5C();
    return;
}
