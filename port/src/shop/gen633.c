/* FF4 source-port — interpreted module for func_80167A34.
 * Ground truth: src/func_80167A34.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80167A34(void)
{
    /* battle rows: 0x4E window, 0x70174/80140310 rows; loop L167A74
       on 5574(0x40)/5A90 gates. */
    open_row(0x4E);
    sep();
    label_cur();
    label_cur();
L167a74:
    for (;;) {
        func_80070174();
        func_80140310();
        row_page(0x4E);
        row_read(7);
        row_sel_cell_cur();
        row_prep(0x20);
        func_800F6CF4();
        func_800F81B0();
        sep();
        row_prep_close();
        key_page(0x4E);
        row_page(0x4E);
        io_poll(0x40);
        if (io_just() == 0)
            continue;
        break;
    }
    sep();
    label_cur();
    func_80140310();
    return;
}
