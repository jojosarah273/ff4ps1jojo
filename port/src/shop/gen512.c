/* FF4 source-port — interpreted module for func_8016FCF0.
 * Ground truth: src/func_8016FCF0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8016FCF0(void)
{
    /* shop map: the fixed 15-sprite row (0x8A-0xA0 windows) then
       9448/93DC close. */
    cell_cursor_dec();
    row_open2();
    sep();
    cell_cursor_dec();
    row_pad();
    row_page(0x8A);
    row_page(0x8B);
    row_page(0x8D);
    row_page(0x8E);
    row_page(0x90);
    row_page(0x91);
    row_page(0x93);
    row_page(0x94);
    row_page(0x96);
    row_page(0x97);
    row_page(0x99);
    row_page(0x9A);
    row_page(0x9C);
    row_page(0x9D);
    row_page(0x9F);
    row_page(0xA0);
    row_pad();
    row_close2();
    return;
}
