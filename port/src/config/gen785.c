/* FF4 source-port — interpreted module for func_80157148.
 * Ground truth: src/func_80157148.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80157148(void)
{
    /* options rows: 0xDF/0xE1/0xE3 windows, 0x289C cell,
       8015240C row; loop L15718C on 5A90(0x83). */
    row_open();
    cell_put(0xDF);
    latch(3);
    cell_put(0xE1);
    func_8015240C();
    page(0xE3);
    draw_pad(0x80);
L15718c:
    for (;;) {
        cell_push_c8();
        cell_pull_c8(0x289C);
        cell_step();
        step2();
        poll_t(0x83);
        if (io_just() == 0)
            continue;
        break;
    }
    row_close();
    return;
}
