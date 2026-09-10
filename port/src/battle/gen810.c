/* FF4 source-port — interpreted module for fn_1x06908.
 * Ground truth: src/fn_1x06908.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"






void fn_1x06908(void) {
    latch(0x8);
    cell_put(0x7);
    do {
        wnd_fx_7d();
        key_page(0xBB);
        key_page(0xBB);
        poll_pair(0x7);
    } while (poll_go(0x202) != 0);
}
