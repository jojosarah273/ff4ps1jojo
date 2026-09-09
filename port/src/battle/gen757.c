/* FF4 source-port — interpreted module for func_8014C57C.
 * Ground truth: src/func_8014C57C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8014C57C(void)
{
    /* battle rows: 0x1802 text, 8007259C/8014C664 rows; loops
       L14C5AC (5958(0x40)) and L14C62C (5C64(0x202)). */
    txt_set_cur();
    if (gate(2) == 0)
        return;
    page_paint2_cur();
    wnd_open_cur();
L14c5ac:
    for (;;) {
        txt_cell_cur();
        cell_draw_cur();
        cell_step();
        poll_t(0x40);
        if (io_just() == 0)
            continue;
        break;
    }
    txt_set(0x1802);
    row_read(0x1F);
    func_800F6C68();
L14c62c:
    for (;;) {
        func_8007259C();
        func_8014C664();
        func_800F5E48();
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    return;
}
