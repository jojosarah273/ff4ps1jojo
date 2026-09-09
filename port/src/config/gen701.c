/* FF4 source-port — interpreted module for func_80138F68.
 * Ground truth: src/func_80138F68.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80138F68(void)
{
    /* config rows: 0x1E0/0x1E0/0x19A texts, 0x212C window, 0x1E0
       gate picks the 0x1F/0x1E2 route. */
    row_prep(0x20);
    cell_cursor_ret2();
    row_prep_close();
    row_open2();
    latch_cur();
    cell_cursor_dec();
    row_pad();
    txt_set(0x1E0);
    if (gate(2) != 0)
        goto L139024;
    cell_clear_bank(0x1E0);
    return;
L139024:
    latch(0x1F);
    txt_draw(0x212C);
    page_paint2(0x1E0);
    txt_set(0x19A);
    stat_sync();
    txt_set(0x199);
    return;
}
