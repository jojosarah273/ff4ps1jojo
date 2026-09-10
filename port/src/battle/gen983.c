/* FF4 source-port — interpreted module for fn_1x02444.
 * Ground truth: src/fn_1x02444.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x02444(void) {
    do {
        fn_1x02e78();
        key_page(0xB5);
        key_page(0x79);
        row_page(0x79);
        io_poll(0x10);
    } while (!io_just());
}
