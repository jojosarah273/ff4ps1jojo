/* FF4 source-port — interpreted module for func_8014C714.
 * Ground truth: src/func_8014C714.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8014C714(void)
{
    /* battle rows: 0x1802 text, 8007259C + 8014C81C rows; loops
       L14C78C and L14C7DC (5958(0x40)). */
    txt_set_cur();
    if (gate(0x202) == 0)
        return;
    cell_clear_bank();
    txt_set(0x1802);
    row_read(0x1F);
    cell_push_c8();
L14c78c:
    for (;;) {
        func_8007259C();
        cell_put(2);
        func_8014C81C();
        cell_set50_from54();
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    wnd_open_cur();
L14c7dc:
    for (;;) {
        txt_cell_cur();
        cell_draw_cur();
        cell_step();
        poll_t(0x40);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
