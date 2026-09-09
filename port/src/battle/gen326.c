/* FF4 source-port — interpreted module for func_8010415C.
 * Ground truth: src/func_8010415C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8010415C(void)
{
    /* battle menu rows: 0x70/0x7/0x3D/0x3E windows, two symmetric
       halves (L104198 and L104280) separated by 824C(0x7)+8F74(0x2115)
       +71DC(0x40) mid-close; 5574(2) advances each half. */
    latch(0x70);
    cell_put(7);
    func_800F8F74(0x2115);
    wnd_open_cur();
    tail(0x3D);
L104198:
    for (;;) {
        page(0x3D);
    L1041AC:
        for (;;) {
            row_page(7);
            key_page(7);
            row_page(7);
            row_read(3);
            if (sel(0x202) != 0)
                continue;
            break;
        }
        row_page(0x3D);
        sep_a();
        row_open_w(0x80);
        cell_put(0x3D);
        row_page(0x3E);
        row_open_w0();
        cell_put(0x3E);
        io_poll(2);
        if (io_just() == 0)
            continue;
        break;
    }
    latch(0x80);
    cell_put(7);
    func_800F8F74(0x2115);
    wnd_open(0x40);
    tail(0x3D);
L104280:
    for (;;) {
        page(0x3D);
    L104294:
        for (;;) {
            row_page(7);
            key_page(7);
            row_page(7);
            row_read(3);
            if (sel(0x202) != 0)
                continue;
            break;
        }
        row_page(0x3D);
        sep_a();
        row_open_w(0x80);
        cell_put(0x3D);
        row_page(0x3E);
        row_open_w0();
        cell_put(0x3E);
        io_poll(2);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
