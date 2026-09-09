/* FF4 source-port — interpreted module for func_80171E18.
 * Ground truth: src/func_80171E18.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80171E18(void)
{
    /* shop rows: 0xC/0xE/0xAD windows, 0x4F1/0x4F0/0x4F2/0x4F3 texts,
       gates 5480/8058(2/4/5)/53C0. */
    sep_b();
    cell_pos_back(2);
    row_page(0xC);
    sep_b();
    cell_pos_back(4);
    if (io_go() != 0)
        goto L171EC0;
    latch(0xF8);
    cell_pull_c8(0x4F1);
    goto L171EE8;
L171EC0:
    cell_pull_c8(0x4F0);
    row_page(0xE);
    sep_b();
    cell_pos_back(5);
    cell_pull_c8(0x4F1);
L171EE8:
    row_page(0xAD);
    cell_put(6);
    row_sel_cell_cur();
    sep_a();
    cell_poke0(cell_state(6));
    row_open_w(0x30);
    cell_pull_c8(0x4F2);
    cell_push_c8();
    cell_pull_c8(0x4F3);
    row_pad();
    return;
}
