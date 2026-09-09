/* FF4 source-port — interpreted module for func_8012C6B8.
 * Ground truth: src/func_8012C6B8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8012C6B8(void)
{
    /* config rows: 0x60 window, gates 6434()/8012C2F8; closes via
       8218? cells + 801221EC. */
    draw_pad(3);
    cell_push_c8_sel(0x60);
    if (gate_cur() != 0)
        goto L12C6FC;
    draw_pad_cur();
    func_8012C2F8();
L12C6FC:
    latch_cur();
    cell_pull_c8_bank(0x60);
    step2();
    cell_push_c8_sel(0x60);
    row_read(0x7F);
    cell_pull_c8_bank(0x60);
    func_801221EC();
    return;
}
