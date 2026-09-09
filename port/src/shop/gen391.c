/* FF4 source-port — interpreted module for func_80166218.
 * Ground truth: src/func_80166218.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80166218(void)
{
    /* battle cast flow: 8014D528/8016762C preps, loops L1662EC
       (5A90(0x40)) and L16638C (70174/4120(0x202) rows), 80166458
       row; 0x5E window + 0x100 const. */
    latch(0x5E);
    func_8014D528();
    sep();
    label_cur();
    label_cur();
    label_cur();
    wnd_open(0x10);
    func_8016762C();
    sep();
    /* v1/v0 gate -> L1662E0 */
    cell_state_of();
L1662E0:
    row_prep(0x20);
L1662ec:
    for (;;) {
        row_arm_s_cur();
        func_800F4264(0x100);
        func_800F89D4();
        cell_step();
        step2();
        step2();
        poll_t(0x40);
        if (io_just() == 0)
            continue;
        break;
    }
    sep();
    row_prep_close();
L16638c:
    for (;;) {
        func_80070174();
        page_paint2_cur();
        txt_set_cur();
        row_read(7);
        func_800F6C68();
        func_800F8E50();
        func_80166458();
        txt_set_cur();
        row_read(3);
        if (sel(0x202) != 0)
            continue;
        page_open_cur();
        cell_step();
        label_cur();
        poll_t(0x80);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
