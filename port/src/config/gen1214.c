/* FF4 source-port — interpreted module for func_8015316C.
 * Ground truth: src/func_8015316C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"


extern void func_80152224(void);
void func_8015316C(void) {
    wnd_open(0);
    latch(0x7);
    func_80152224();;
}
