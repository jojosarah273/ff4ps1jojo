/* FF4 source-port — interpreted module for options_x3554_text_xce_window_row.
 * Ground truth: src/options_x3554_text_xce_window_row.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void options_x3554_text_xce_window_row(void)
{
    /* options: 0x3554 text, 0xCE window, 80153074 row; gate
       6434(0x202) picks the 0x3550/0x3523 variants. */
    txt_set(0x3554);
    if (gate(0x202) != 0)
        goto L16092C;
    row_page(0xCE);
    row_read(0x7F);
    txt_set(0x3550);
    fn_1x53074();
    txt_draw(0x3550);
    return;
L16092C:
    row_page(0xCE);
    row_read(0x7F);
    txt_set(0x3523);
    fn_1x53074();
    txt_draw(0x3523);
    return;
}
