/* FF4 source-port — interpreted module for func_80176748.
 * Ground truth: src/func_80176748.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void func_80176748(void) {
    latch(0x80);
    txt_draw(0x2115);
    cell_clear_bank(0x420B);
    latch(0x9);
    txt_draw(0x4300);
    latch(0x18);
    txt_draw(0x4301);
    page(0x47);
    label(0x2116);
    wnd_open(0x676);
    label(0x4302);
    cell_clear_bank(0x4304);
    page(0x45);
    label(0x4305);
    catalog_dispatch(0);;
}
