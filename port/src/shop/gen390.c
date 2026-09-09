/* FF4 source-port — interpreted module for func_80166458.
 * Ground truth: src/func_80166458.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80166458(void)
{
    /* battle cast rows: 0x2/0x4 windows, 0x7600 cells, 6658/89D4/
       5DD4(2) reads; loop L1664D0 on 5A90(0x230). */
    row_open();
    row_prep(0x20);
    func_800F658C();
    func_800F8274(2);
    row_sync2(0x100);
    func_800F8274();
    sep();
L1664d0:
    for (;;) {
        row_read2();
        func_800F89D4(0x7600);
        func_800F5DD4(2);
        if (poll_go_cur() != 0)
            goto L166560;
        func_800F658C();
        func_800F8274();
        poll_t(0x40);
        if (io_just() != 0)
            goto L166560;
        func_800F6BE0();
        func_800F8274(4);
        row_read2();
        func_800F5F70(cell_state(4));
        func_800F8274();
        cell_step();
        cell_step();
    L166560:
        step2();
        step2();
        step2();
        step2();
        poll_t(0x230);
        if (io_just() == 0)
            continue;
        break;
    }
    sep();
    row_prep_close();
    row_close();
    return;
}
