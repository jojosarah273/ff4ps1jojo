/* FF4 source-port — interpreted module for func_8015EBE0.
 * Ground truth: src/func_8015EBE0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8015EBE0(void)
{
    /* options: 0x38FE text, 80160AAC/80160B8C/80061860 preps with
       8006508C/80065774 tails; gate 6434(). */
    func_80160AAC();
    txt_set(0x38FE);
    if (gate_cur() != 0)
        goto L15EC28;
    row_read(0x7F);
    txt_draw(0x38FE);
    func_8006508C();
    return;
L15EC28:
    func_80160B8C();
    func_80061860();
    txt_set(0x3550);
    cell_cursor_dec();
    func_80065774();
    row_close2();
    txt_draw(0x3550);
    return;
}
