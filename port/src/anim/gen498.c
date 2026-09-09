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
    func_800F8058(2);
    row_page(0xC);
    sep_b();
    func_800F8058(4);
    if (io_go() != 0)
        goto L171EC0;
    latch(0xF8);
    func_800F8960(0x4F1);
    goto L171EE8;
L171EC0:
    func_800F8960(0x4F0);
    row_page(0xE);
    sep_b();
    func_800F8058(5);
    func_800F8960(0x4F1);
L171EE8:
    row_page(0xAD);
    cell_put(6);
    row_sel_cell_cur();
    sep_a();
    cell_poke0(cell_state(6));
    row_open_w(0x30);
    func_800F8960(0x4F2);
    func_800F6C68();
    func_800F8960(0x4F3);
    row_pad();
    return;
}
