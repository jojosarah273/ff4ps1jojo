/* FF4 source-port — interpreted module for func_8016DCE0.
 * Ground truth: src/func_8016DCE0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8016DCE0(void)
{
    /* shop rows: 0x2303/0x2883 cells via 8768; loops L16DD0C
       (5958(0x900)) and L16DD5C (5958(0x80)). */
    sep();
L16dd0c:
    for (;;) {
        cell_draw(0x2303);
        cell_step();
        poll_t(0x900);
        if (io_just() == 0)
            continue;
        break;
    }
    sep();
L16dd5c:
    for (;;) {
        func_800F6C68();
        cell_draw(0x2883);
        cell_step();
        poll_t(0x80);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
