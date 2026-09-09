/* FF4 source-port — interpreted module for func_801700BC.
 * Ground truth: src/func_801700BC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801700BC(void)
{
    /* rows: 4x 6658/87DC cell pairs (0x3319/0x371B/0x331B/0x3719);
       loop L1700F8 on 5958(0x400). */
    row_open();
    row_prep(0x20);
    sep();
L1700f8:
    for (;;) {
        row_read2();
        func_800F87DC(0x3319);
        row_read2(6);
        func_800F87DC(0x371B);
        row_read2(2);
        func_800F87DC(0x331B);
        row_read2(4);
        func_800F87DC(0x3719);
        cell_step();
        cell_step();
        cell_step();
        cell_step();
        poll_t(0x400);
        if (io_just() == 0)
            continue;
        break;
    }
    sep();
    row_prep_close();
    row_close();
    return;
}
