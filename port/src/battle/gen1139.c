/* FF4 source-port — interpreted module for func_8010D34C.
 * Ground truth: src/func_8010D34C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8010D34C(void)
{
    /* battle rows: 3C3C/3B9C + 9330 gates; 8010D54C + 95A0 tail. */
    cell_state_of();
    cell_peek_cur();
    row_open();
    if (io_just() == 0)
        goto L10D438;
    if (io_just() == 0)
        goto L10D438;
    func_8010D54C();
L10D43C:
    row_close();
    return;
L10D438:
    goto L10D43C;
}
