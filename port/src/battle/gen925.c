/* FF4 source-port — interpreted module for fn_1x48be0.
 * Ground truth: src/fn_1x48be0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"





void fn_1x48be0(void) {
    wnd_open(0x20);
    do {
        txt_cell(0x33F);
        cell_draw(0x343);
        cell_set50_from54();
    } while (poll_go(0x202) != 0);
}
