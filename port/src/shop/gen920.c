/* FF4 source-port — interpreted module for func_801608C4.
 * Ground truth: src/func_801608C4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801608C4(void)
{
    /* options: 0x3554 text, 0xCE window, 80153074 row; gate
       6434(0x202) picks the 0x3550/0x3523 variants. */
    txt_set(0x3554);
    if (gate(0x202) != 0)
        goto L16092C;
    row_page(0xCE);
    row_read(0x7F);
    txt_set(0x3550);
    func_80153074();
    txt_draw(0x3550);
    return;
L16092C:
    row_page(0xCE);
    row_read(0x7F);
    txt_set(0x3523);
    func_80153074();
    txt_draw(0x3523);
    return;
}
