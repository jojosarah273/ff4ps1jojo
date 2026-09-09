/* FF4 source-port — interpreted module for func_80128B3C.
 * Ground truth: src/func_80128B3C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80128B3C(void)
{
    /* battle/status: 4x 5520(3B9C()) checks on 0x1BE4 cells; gates ->
       80128C4C/8012821C/80126D48 row block; 53D4 latches. */
    row_prep(0x20);
    row_sync2(0x1BE4);
    if (cell_flags_cmp_pos(cell_peek_cur()) != 0)
        goto L128C24;
    if (cell_flags_cmp_pos(cell_peek_cur()) != 0)
        goto L128C24;
    if (cell_flags_cmp_pos(cell_peek_cur()) != 0)
        goto L128C24;
    if (cell_flags_cmp_pos(cell_peek_cur()) != 0)
        goto L128C24;
    row_prep_close();
    func_80128C4C();
    func_8012821C();
    func_80126D48();
    sep_b();
    return;
L128C24:
    row_prep_close();
    sep_a();
    return;
}
