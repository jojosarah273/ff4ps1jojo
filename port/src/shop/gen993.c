/* FF4 source-port — interpreted module for func_801667F0.
 * Ground truth: src/func_801667F0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801667F0(void)
{
    /* battle rows: 0x4E window + 6C68/8960/63BC cells; loop
       L166844 on 5A90(0x20). */
    open_row(0x4E);
    sep();
L166844:
    for (;;) {
        cell_push_c8();
        cell_pull_c8();
        cell_step();
        step2();
        poll_t(0x20);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
