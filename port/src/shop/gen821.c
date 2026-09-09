/* FF4 source-port — interpreted module for func_80160DF8.
 * Ground truth: src/func_80160DF8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80160DF8(void)
{
    /* options: 0x38E6/0x2003/0x34CA/0x390A/0x33C2 texts. */
    latch(4);
    txt_draw(0x38E6);
    page(0xA6);
    txt_cell(0x2003);
    cell_draw_cur();
    latch(5);
    txt_draw(0x34CA);
    page_paint2(0x390A);
    latch(0xF8);
    txt_draw(0x33C2);
    latch(3);
    txt_draw(0x33C3);
    return;
}
