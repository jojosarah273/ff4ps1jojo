/* FF4 source-port — interpreted module for func_8014EA0C.
 * Ground truth: src/func_8014EA0C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8014EA0C(void)
{
    /* battle rows: 0x2 window; loop L14EA34 on 4FAC(0x101)/5958(5). */
    wnd_open_cur();
    cell_put_cur();
    txt_set_cur();
    cell_put(2);
L14ea34:
    for (;;) {
        cell_state(2);
        row_arm2_cur();
        if (func_800F4FAC(0x101) != 0)
            goto L14EAB4;
        row_page_cur();
        cell_pull_c8();
    L14EAB4:
        cell_step();
        poll_t(5);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
