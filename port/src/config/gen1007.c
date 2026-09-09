/* FF4 source-port — interpreted module for func_8013F96C.
 * Ground truth: src/func_8013F96C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8013F96C(void)
{
    /* battle rows: 6C68/8960/63BCx2 cells; loop L13F9B8 on
       5958(5). */
    sep();
L13f9b8:
    for (;;) {
        func_800F6C68();
        func_800F8960();
        cell_step();
        step2();
        step2();
        poll_t(5);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
