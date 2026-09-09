/* FF4 source-port — interpreted module for func_8013DC04.
 * Ground truth: src/func_8013DC04.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8013DC04(void)
{
    /* battle magic-name flow: 0x38E2/0x4E gates, 8013D12C prep, 0x4E
       window rows; loops L13DC70 (5A90(5)), L13DCA0/L13DCDC (4FAC
       (0x101) rows), L13DDF8 tail. */
    txt_set(0x38E2);
    if (gate(2) != 0)
        return;
    txt_set_cur();
    if (gate(0x80) != 0)
        return;
    func_8013D12C();
    open_row(0x4E);
    sep();
L13dc70:
    for (;;) {
        cell_push_c8_d58();
        cell_pull_c8();
        step2();
        poll_t(5);
        if (io_just() == 0)
            continue;
        break;
    }
L13dca0:
    for (;;) {
        func_80140558();
        txt_set_cur();
        cell_put_cur();
        sep();
    L13dcdc:
        for (;;) {
            cell_state_of();
            row_arm2_cur();
            if (func_800F4FAC(0x101) != 0)
                goto L13DD8C;
            latch(7);
            cell_pull_c8(0x4E);
            row_page_cur();
            row_read(4);
            cell_draw_cur();
        L13DD8C:
            step2();
            poll_t(5);
            if (io_just() == 0)
                continue;
            break;
        }
        key_page(0x4E);
        row_page_cur();
        poll_t(5);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
