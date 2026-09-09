/* FF4 source-port — interpreted module for func_801694A4.
 * Ground truth: src/func_801694A4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801694A4(void)
{
    /* shop seed: 0x64 window, 0x1B/0x2107 texts; loop L169548 on
       5958(0x320). */
    row_page(0x64);
    io_poll(2);
    if (io_just() == 0)
        return;
    wnd_open(0x1B);
    label(0x2107);
    row_open2();
    sep();
    cell_cursor_dec();
    row_pad();
    wnd_open(0x3000);
    sep();
L169548:
    for (;;) {
        cell_push_c8();
        cell_cursor_dec();
        row_read(0xF);
        row_close2();
        row_read(0xF0);
        cell_step();
        poll_t(0x320);
        if (io_just() == 0)
            continue;
        break;
    }
    row_pad();
    return;
}
