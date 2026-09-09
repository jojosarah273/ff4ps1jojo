/* FF4 source-port — interpreted module for func_801316E0.
 * Ground truth: src/func_801316E0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801316E0(void)
{
    txt_set(0x1BBB);
    if (gate(2) == 0) {
        func_800F65C8(0xF9807);
        txt_draw(0x1B91);
        func_801317F0();
        return;
    }
    latch(0);
    do {
        func_80131760();
        func_800F61E8();
        io_poll(5);
    } while (io_just() == 0);
}
