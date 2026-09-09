/* FF4 source-port — interpreted module for func_80114618.
 * Ground truth: src/func_80114618.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80114618(void)
{
    row_page(0x7A);
    row_read(7);
    if (sel(0x202) == 0) {
        row_page(0x80);
        if (gate(2) == 0)
            poll_pair(0x80);
    }
    row_page(0x80);
    txt_draw(0x2100);
}
