/* FF4 source-port — interpreted module for func_801130C0.
 * Ground truth: src/func_801130C0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801130C0(void)
{
    /* battle rows: 0x2C window, 0x60 key + 0x2115 gate; loop
       L113140 on 5958(0x10) with 4x 6C68. */
    row_page(0x2C);
    io_poll(0x60);
    if (io_just() == 0)
        return;
    func_800F8F74(0x2115);
    latch_cur();
L113140:
    for (;;) {
        /* v1/v0 + v0 gates -> L1131D4 / L1131EC / L113224 / L113258 */
        func_800F6C68();
        func_800F6C68();
        func_800F6C68();
        func_800F6C68();
        poll_t(0x10);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
