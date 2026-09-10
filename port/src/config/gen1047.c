/* FF4 source-port — interpreted module for options_x28a3_x28a4_texts_bc_x202.
 * Ground truth: src/options_x28a3_x28a4_texts_bc_x202.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void options_x28a3_x28a4_texts_bc_x202(void)
{
    /* options: 0x28A3/0x28A4 texts; 70BC(0x202) gate picks
       80065534/80065774. */
    wnd_open_cur();
    latch(1);
    config_banner_96();
    if (cell_0xf70bc(0x202) != 0)
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
