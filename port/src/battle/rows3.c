/* FF4 source-port — interpreted module for func_8014D680.
 * Ground truth: src/func_8014D680.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8014D680(void)
{
    /* battle rows: 8014D5A0 row; gate 5574(0xFF) picks the
       960C/95A0 tail. */
    row_open();
    row_sync();
    txt_set_cur();
    io_poll(0xFF);
    if (io_just() != 0)
        goto L14D6E8;
    cell_push_c8();
    func_8014D5A0();
    return;
L14D6E8:
    row_done();
    row_close();
    return;
}
