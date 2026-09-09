/* FF4 source-port — interpreted module for func_80124D08.
 * Ground truth: src/func_80124D08.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80124D08(void)
{
    /* rows: 0x163 text, 0x41/0x29 windows, 80124B74 row; loop
       L124D70 on 6B68(0x163)/5958(7). */
    row_sync();
    row_sync();
    func_80124B74();
    row_prep(0x20);
    func_800F9410();
    sep_a();
    func_800F4064(0xE);
    row_prep_close();
    page(0x41);
L124d70:
    for (;;) {
        txt_cell(0x163);
        func_800F82EC(0x29);
        poll_pair_cur();
        poll_pair_cur();
        cell_step();
        poll_t(7);
        if (io_just() == 0)
            continue;
        break;
    }
    row_done();
    return;
}
