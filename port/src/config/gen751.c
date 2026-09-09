/* FF4 source-port — interpreted module for func_8015EA00.
 * Ground truth: src/func_8015EA00.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8015EA00(void)
{
    /* options: 80061860 prep, 0xA4 window, 0x270B/0x270D cells;
       gate 53C0 picks 658C(0x270D). */
    func_80061860();
    row_prep(0x20);
    sep_a();
    row_read2(0xA4);
    cell_peek0(cell_state(0x270B));
    func_800F5520(cell_state(0x270D));
    if (io_go() == 0)
        goto L15EA60;
    cell_push9(0x270D);
L15EA60:
    cell_pull9_hi(0x270B);
    sep();
    row_prep_close();
    row_page(0xA5);
    cell_put_cur();
    return;
}
