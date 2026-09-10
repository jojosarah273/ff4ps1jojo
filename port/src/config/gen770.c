/* FF4 source-port — interpreted module for fn_1x21b5c.
 * Ground truth: src/fn_1x21b5c.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

extern void func_8012202C(void);



extern void func_80121BE4(void);
void fn_1x21b5c(void) {
    if (io_go() == 0) {
        func_8012202C();
        poll_pair(0x65);
    } else {
        fn_1x21fdc();
        key_page(0x65);
    }
    latch(0xF9);
    cell_put(0x1E);
    latch(0xFB);
    cell_put(0x1F);
    latch(0xFE);
    cell_put(0x20);
    func_80121BE4();
}
