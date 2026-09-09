/* FF4 source-port — interpreted module for func_80110B08.
 * Ground truth: src/func_80110B08.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80110B08(void)
{
    /* battle rows: 0x68/0x78 windows, 0x300-0x307 text cells with
       0x7A window reads. */
    latch(0x68);
    txt_draw(0x300);
    latch(0x78);
    txt_draw(0x304);
    txt_draw(0x301);
    txt_draw(0x305);
    row_page(0x7A);
    row_read(2);
    sep_a();
    row_open_w(0xE4);
    txt_draw(0x302);
    txt_draw(0x306);
    latch(0x37);
    txt_draw(0x303);
    txt_draw(0x307);
    return;
}
