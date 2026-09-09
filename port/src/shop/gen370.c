/* FF4 source-port — interpreted module for func_8016A208.
 * Ground truth: src/func_8016A208.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8016A208(void)
{
    /* shop rows: 0x66/0x53/0x55/0xA windows, 0x2F03 text, 8016A4E4
       header; loops L16A248 (5A90(0x20)), L16A290, L16A2A8
       (5DA0(8)/5B8C(0x202)). */
    wnd_open_cur();
    tail(0x66);
    wnd_open_cur();
    tail(0x53);
    latch(0x7E);
    cell_put(0x55);
    wnd_open_cur();
L16a248:
    for (;;) {
        row_open();
        func_8016A4E4();
        wnd_open(0x2F03);
        tail_cur();
        sep();
        tail(0xA);
    L16a290:
        for (;;) {
            cell_fmt2(0xA);
            latch(0x20);
            cell_put(8);
        L16a2a8:
            for (;;) {
                func_800F66D8();
                func_800F8A8C(0x53);
                row_prep(0x20);
                func_800F62F0(0x53);
                sep_a();
                func_800F4064(0x20);
                sep();
                row_prep_close();
                cell_step();
                poll_pair(8);
                if (poll_go(0x202) != 0)
                    continue;
                break;
            }
            key_page(0xA);
            row_page(0xA);
            io_poll(0x20);
            if (io_just() == 0)
                continue;
            break;
        }
        row_close();
        cell_step();
        poll_t(0x20);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
