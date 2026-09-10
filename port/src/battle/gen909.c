/* FF4 source-port — interpreted module for fn_1x16398.
 * Ground truth: src/fn_1x16398.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"





void fn_1x16398(void) {
    tail(0x89);
    do {
        wnd_fx_7d();
        page(0x89);
        cell_set50_from54();
        tail(0x89);
    } while (poll_go(0x202) != 0);
}
