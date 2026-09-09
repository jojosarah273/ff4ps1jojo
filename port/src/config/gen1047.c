/* FF4 source-port — interpreted module for func_8015F660.
 * Ground truth: src/func_8015F660.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8015F660(void)
{
    /* options: 0x28A3/0x28A4 texts; 70BC(0x202) gate picks
       80065534/80065774. */
    wnd_open_cur();
    latch(1);
    func_80152224();
    if (func_800F70BC(0x202) != 0)
        goto L15F6C8;
    latch(0x80);
    txt_draw(0x28A3);
    func_80065534();
    return;
L15F6C8:
    latch(0x20);
    txt_draw(0x28A4);
    func_80065774();
    return;
}
