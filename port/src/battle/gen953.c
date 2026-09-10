/* FF4 source-port — interpreted module for fn_1x06860.
 * Ground truth: src/fn_1x06860.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x06860(void) {
    fn_1x06830();
    latch(0x7);
    cell_put(0x89);
    do {
        wnd_fx_7d();
        poll_pair(0x89);
    } while (poll_go(0x202) != 0);
}
