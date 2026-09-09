/* FF4 source-port — interpreted module for func_80140E00.
 * Ground truth: src/func_80140E00.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80140E00(void)
{
    latch(196);
    txt_draw(13250);
    latch(86);
    txt_draw(13251);
    latch(255);
    txt_draw(13252);
    func_80140CFC();
    page_paint2(62580);
    txt_set(62581);
    txt_draw(13507);
    func_8009546C();
    func_80140D94();
}
