/* FF4 source-port — interpreted module for func_80118B80.
 * Ground truth: src/func_80118B80.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80118B80(void)
{
    /* battle stat row: 0x1003 gate, 0x18-0x1B windows, 0x30 window
       cells, 80174F0C/80117DF8/8011EA5C; loops L118BE0 (H16: 6BE0
       (0x1007)/5520 rows) and L118CA8 (0x1009 cell). */
    func_80117594();
    io_poll(0xFE);
    if (io_just() != 0)
        goto L118CA0;
    cell_put(0x18);
    open_row(0x19);
    latch(0xA);
    cell_put(0x1A);
    open_row(0x1B);
    func_80174F0C();
    wnd_open_cur();
L118be0:
    for (;;) {
        txt_cell(0x1003);
        if (gate(0x80) != 0)
            goto L118C70;
        row_prep(0x20);
        func_800F6BE0(0x1007);
        sep_a();
        cell_peek0(cell_state(0x30));
        func_800F5520(cell_state_of());
        if (io_go() == 0)
            goto L118C58;
        func_800F6BE0(0x1009);
    L118C58:
        func_800F87DC(0x1007);
        row_sync2_cur();
        row_prep_close();
    L118C70:
        func_80117DF8();
        poll_t(0x140);
        if (io_just() == 0)
            continue;
        break;
    }
    func_8011EA5C();
    return;
L118CA0:
    wnd_open_cur();
L118ca8:
    for (;;) {
        txt_cell(0x1003);
        if (gate(0x80) != 0)
            goto L118CE8;
        row_prep(0x20);
        func_800F6BE0(0x1009);
        func_800F87DC(0x1007);
        row_sync2_cur();
        row_prep_close();
    L118CE8:
        func_80117DF8();
        poll_t(0x140);
        if (io_just() == 0)
            continue;
        break;
    }
    func_8011EA5C();
    return;
}
