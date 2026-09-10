/* FF4 source-port — interpreted module for options_x38fe_text_aac_b8c_preps_w.
 * Ground truth: src/options_x38fe_text_aac_b8c_preps_w.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void options_x38fe_text_aac_b8c_preps_w(void)
{
    /* options: 0x38FE text, 80160AAC/80160B8C/80061860 preps with
       8006508C/80065774 tails; gate 6434(). */
    options_banner_x2726_x2725_x28a2_x();
    txt_set(0x38FE);
    if (gate_cur() != 0)
        goto L15EC28;
    row_read(0x7F);
    txt_draw(0x38FE);
    func_8006508C();
    return;
L15EC28:
    fn_1x60b8c();
    func_80061860();
    txt_set(0x3550);
    cell_cursor_dec();
    func_80065774();
    row_close2();
    txt_draw(0x3550);
    return;
}
