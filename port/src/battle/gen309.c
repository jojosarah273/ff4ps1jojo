/* FF4 source-port — interpreted module for func_8010D6A0.
 * Ground truth: src/func_8010D6A0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8010D6A0(void)
{
    /* battle item confirm: 5574 key ladders (0x11/0x30/0x46 codes) pick
       the 0x4A window header color rows, 80170458 shop row render. */
    io_poll(0x11);
    if (io_go() != 0)
        goto L10D6D8;
    goto L10D718;
L10D6D8:
    io_poll(0x30);
    if (io_go() != 0)
        goto L10D728;
    sep_b();
    func_800F8058(0x11);
    goto L10D718;
L10D718:
    wnd_open(0x3300);
    goto L10D780;
L10D728:
    io_poll(0x46);
    if (io_go() != 0)
        goto L10D768;
    sep_b();
    func_800F8058(0x30);
    row_sel_cell_cur();
    wnd_open(0x6180);
    goto L10D780;
L10D768:
    sep_b();
    func_800F8058(0x46);
    wnd_open(0x7200);
L10D780:
    row_prep(0x20);
    stat_sync();
    func_800F8274(0x4A);
    row_sel2_cur();
    sep_a();
    cell_peek0(cell_state(0x4A));
    func_800F8274(0x4A);
    sep_a();
    cell_peek0(cell_state(0x4A));
    sep_a();
    func_800F4064();
    func_800F8274(0x4A);
    row_sync2_cur();
    row_prep_close();
    row_page(0xAE);
    row_sel_cell_cur();
    sep_a();
    row_open_w(0x42);
    cell_put(0x4D);
    open_row(0x4C);
    wnd_open(0x200);
    tail(0x4E);
    latch(0x1B);
    cell_put(0x49);
    func_80170458();
    return;
}
