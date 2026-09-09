/* FF4 source-port — interpreted module for func_80106860.
 * Ground truth: src/func_80106860.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern void func_80106830(void);





void func_80106860(void) {
    func_80106830();
    latch(0x7);
    cell_put(0x89);
    do {
        wnd_fx_7d();
        poll_pair(0x89);
    } while (poll_go(0x202) != 0);
}
