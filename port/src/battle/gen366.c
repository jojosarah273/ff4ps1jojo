/* FF4 source-port — interpreted module for func_80144344.
 * Ground truth: src/func_80144344.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80144344(void)
{
    func_8013EF78();
    page_paint2(0xF327);
    wnd_open(0x12);
    func_8014202C();
    cell_clear_bank(0xF327);
    wnd_open(0x20);
    do {
        gpu_driver_run();
        func_80141E80();
        cell_set50_from54();
    } while (poll_go(0x202) != 0);
    latch(0x62);
    cell_pull_c8_lo(0x2107);
    sep();
    txt_draw(0xF133);
    latch(0x80);
    txt_draw(0xF134);
    for (;;) {
        gpu_driver_run();
        txt_set(0xF133);
        io_poll(0x10);
        if (io_go() != 0) {
            latch(2);
            cell_pull_c8_lo(0x2130);
            cell_pull_c8_lo(0x212D);
            latch(0x41);
            cell_pull_c8_lo(0x2131);
            func_8014C8CC();
        }
        open_row(2);
        latch(3);
        cell_put(6);
        do {
            txt_set(0xF133);
            func_80149A98();
            txt_set(0xF134);
            func_80149A98();
            poll_pair(6);
        } while (poll_go(0x202) != 0);
        page_paint2(0xF133);
        page_paint2(0xF134);
        txt_set(0xF133);
        io_poll(0x40);
        if (io_just() != 0)
            break;
    }
    latch(0x1E);
    cell_pull_c8_lo(0x212C);
    page_paint2(0xF483);
}
