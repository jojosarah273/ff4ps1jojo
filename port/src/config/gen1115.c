/* FF4 source-port — interpreted module for func_8013EF98.
 * Ground truth: src/func_8013EF98.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"


extern void func_8013EFD8(void);
void func_8013EF98(void) {
    wnd_open(0x6CFD);
    tail(0);
    wnd_open(0x12);
    tail(0x2);
    func_8013EFD8();;
}
