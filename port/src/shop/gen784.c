/* FF4 source-port — interpreted module for func_80160B8C.
 * Ground truth: src/func_80160B8C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80160B8C(void)
{
    txt_set(0x38FE);
    io_poll(2);
    if (io_just() == 0)
        return;
    txt_set(0x2721);
    func_800F4280(0x28A2);
    if (sel(2) == 0) {
        latch(8);
        txt_draw(0x38FE);
        return;
    }
    txt_set(0x2720);
    func_800F4280(0x28A2);
    if (sel(2) == 0) {
        latch(4);
        txt_draw(0x38FE);
    }
}
