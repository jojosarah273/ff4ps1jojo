/* FF4 source-port — interpreted module for func_801428FC.
 * Ground truth: src/func_801428FC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801428FC(void)
{
    /* battle item-cast: 8013D12C prep, 0x1900 gate + 80142B4C intro,
       wait loop L142938, L142988/L1429BC/L142A6C cast loops
       (801431E8/80177DCC/8014096C rows); L142B1C loops back via
       5C64(0x202). */
    func_8013D12C();
    sep();
    poll_spin();
    txt_draw_cur();
L142938:
    for (;;) {
        txt_cell(0x1900);
        func_80142B4C();
        sep();
        cell_draw_cur();
        cell_step();
        poll_t(0x40);
        if (io_just() == 0)
            continue;
        break;
    }
    func_801407EC();
    wnd_open(0x18);
L142988:
    for (;;) {
        row_open();
        func_800F8F74();
        sep();
    L1429bc:
        for (;;) {
            func_800F6D70(3);
            row_read_cur();
            func_800F6C68();
            func_800F8960();
            step2();
            poll_t(0x40);
            if (io_just() != 0)
                break;
        }
        latch(0x40);
        func_801431E8();
        func_80177DCC();
        sep();
    L142a6c:
        for (;;) {
            txt_cell_cur();
            if (gate(0x202) != 0)
                goto L142AD4;
            txt_cell_cur();
            sep_b();
            func_800F8058(8);
            cell_draw_cur();
            cell_draw_cur();
            io_poll(0x10);
            if (io_go() != 0)
                goto L142AD4;
            latch(1);
            cell_draw_cur();
        L142AD4:
            cell_step();
            poll_t(0x40);
            if (io_just() == 0)
                continue;
            break;
        }
        row_close();
        poll_t(9);
        if (io_just() == 0)
            goto L142B1C;
        func_8014096C();
    L142B1C:
        func_800F5E48();
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    func_800F8F74();
    return;
}
