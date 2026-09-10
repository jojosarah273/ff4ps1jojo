/* FF4 source-port — interpreted module for fn_1x219ec.
 * Ground truth: src/fn_1x219ec.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x219ec(void) {
    if (io_go() == 0) {
        fn_1x21f8c();
        poll_pair(99);
    } else {
        fn_1x220ec();
        key_page(99);
    }
    latch(0xF7);
    cell_put(0x1E);
    latch(0xFA);
    cell_put(0x1F);
    latch(0xFC);
    cell_put(0x20);
    fn_1x21a74();
}
