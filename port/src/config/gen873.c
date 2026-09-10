/* FF4 source-port — interpreted module for options_x2_x28a4_x28a3_texts_f70bc.
 * Ground truth: src/options_x2_x28a4_x28a3_texts_f70bc.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void options_x2_x28a4_x28a3_texts_f70bc(void)
{
    /* options: 0x2/0x28A4/0x28A3 texts, 80152224/800F70BC/
       80065774/80065534 rows; 5C64(0x202) gate. */
    wnd_open_cur();
    latch(2);
    config_banner_96();
    if (func_800F70BC(0x202) != 0)
        goto L15F758;
    latch(0x20);
    txt_draw(0x28A4);
    func_80065774();
    return;
L15F758:
    poll_spin();
    if (poll_go(0x202) != 0)
        goto L15F788;
    latch(4);
    txt_draw(0x28A3);
    goto L15F798;
L15F788:
    latch(0x80);
    txt_draw(0x28A4);
L15F798:
    func_80065534();
    return;
}
