/* FF4 source-port — interpreted module for func_801673CC.
 * Ground truth: src/func_801673CC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801673CC(void)
{
    /* battle row: 0xE/0x1C/0x10 windows, 6434(2) gate routes the
       0x1C cursor read; 63F8/6130 cells, 5574/53D4 ladders. */
    row_page(0xE);
    if (gate(2) != 0)
        goto L167424;
    poll_pair(0xE);
    latch(0x31);
    cell_put(0x10);
    latch(0xFF);
    func_800F63F8();
    sep_a();
    goto L16751C;
L167424:
    func_800F6EA8(0x1C);
    io_poll(0xFE);
    if (io_just() != 0)
        goto L1674AC;
    io_poll(0xFF);
    if (io_just() != 0)
        goto L1674DC;
    page(0x1C);
    cell_step();
    tail(0x1C);
    cell_cursor_dec();
    txt_set_cur();
    func_800F63F8();
    cell_put(0x10);
    row_close2();
    sep_b();
    goto L16751C;
L1674AC:
    page(0x1C);
    cell_step();
    tail(0x1C);
    func_800F6EA8(0x1C);
    poll_spin();
    cell_put(0xE);
L1674DC:
    latch(0x31);
    cell_put(0x10);
    latch(0xFF);
    page(0x1C);
    cell_step();
    func_800F6130();
    tail(0x1C);
    sep_a();
    return;
L16751C:
    return;
}
