/* FF4 source-port — interpreted module for func_80113CCC.
 * Ground truth: src/func_80113CCC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80113CCC(void)
{
    /* battle rows: 0xAD/0x6FB texts, 0x24/0x8F/0x90/0x91 windows,
       80113F3C/8011EA5C rows; loop L113D24 on 5574(0x5F). */
    open_row(0xAD);
    wnd_open_cur();
    label(0x6FB);
    tail(0x24);
    latch(0xC4);
    cell_put(0x8F);
    latch(8);
    cell_put(0x90);
    latch(0x39);
    cell_put(0x91);
L113d24:
    for (;;) {
        wnd_fx_7d_b();
        func_80113F3C();
        row_prep(0x20);
        cell_push9(0x6FB);
        row_done2();
        cell_pull9_hi(0x6FB);
        row_read2(0x24);
        row_done2();
        cell_put_hi9(0x24);
        cell_pos_mask(0xFF);
        row_prep_close();
        cell_put(0xAD);
        io_poll(0x5F);
        if (io_just() == 0)
            continue;
        break;
    }
    func_8011EA5C();
    return;
}
