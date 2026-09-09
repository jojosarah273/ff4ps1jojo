/* FF4 source-port — interpreted module for func_80140224.
 * Ground truth: src/func_80140224.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80140224(void)
{
    /* battle rows: 2x4 87DC cell sets (0x7612-0x77B6 and +2); loop
       L140260 on 5958(0x8C). */
    func_800F658C();
    func_800F8274();
    sep();
L140260:
    for (;;) {
        row_read2();
        func_800F87DC(0x7612);
        func_800F87DC(0x769E);
        func_800F87DC(0x772A);
        func_800F87DC(0x77B6);
        row_read2(2);
        func_800F87DC(0x7614);
        func_800F87DC(0x76A0);
        func_800F87DC(0x772C);
        func_800F87DC(0x77B8);
        cell_step();
        cell_step();
        cell_step();
        cell_step();
        poll_t(0x8C);
        if (io_just() == 0)
            continue;
        break;
    }
    sep();
    row_prep_close();
    row_close();
    return;
}
