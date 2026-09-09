/* FF4 source-port — interpreted module for func_8012EAC0.
 * Ground truth: src/func_8012EAC0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8012EAC0(void)
{
    /* formation row: 0x1D/0x23/0x25/0x21 windows; loops L12EAC8
       (6434(0x514)/5A90 gates) and L12EB10 (8A18 cell reads). */
L12eac8:
    for (;;) {
        page(0x1D);
        cell_step();
        tail(0x23);
        func_800F6E30(0x1D);
        if (gate(0x202) != 0)
            goto L12EBA8;
        cell_fmt2(0x1D);
        step2();
        step2();
    L12eb10:
        for (;;) {
            func_800F6D70();
            if (gate(2) != 0)
                goto L12EB78;
            io_poll(0xFE);
            if (io_go() != 0)
                goto L12EB78;
            func_800F8A18(0x1D);
            func_800F6D70(1);
            func_800F8A18(0x23);
            latch_cur();
            func_800F8960();
            func_800F8960(1);
            goto L12EBA8;
        L12EB78:
            step2();
            step2();
            if (func_800F5804(cell_state(0x25)) == 0)
                continue;
            break;
        }
    L12EBA8:
        page(0x1D);
        cell_step();
        cell_step();
        tail(0x1D);
        if (func_800F56AC(cell_state(0x21)) == 0)
            continue;
        break;
    }
    return;
}
