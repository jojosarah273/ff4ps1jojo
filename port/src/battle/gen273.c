/* FF4 source-port — interpreted module for func_8014EE20.
 * Ground truth: src/func_8014EE20.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8014EE20(void)
{
    /* battle status-cast: 0xE/0x10/0xD windows, 4FAC(0x101) gate loops
       (L14EE88 stat rows, L14EF60 scroll, L14F030 alt), 6DE8/922C/89D4
       cell draws. */
    txt_set_cur();
    if (gate(2) != 0)
        goto L14F0AC;
    txt_set_cur();
    if (gate(0x202) != 0)
        goto L14EFF0;
    txt_set_cur();
    if (gate(2) != 0)
        goto L14F0AC;
    wnd_open_cur();
    txt_set_cur();
    cell_put(0xE);
L14EE88:
    for (;;) {
        cell_state(0xE);
        row_arm2_cur();
        if (func_800F4FAC(0x101) != 0)
            goto L14EFC8;
        row_prep(0x20);
        func_800F6DE8();
        func_800F922C();
        row_sync();
        row_sync2(0xD);
        func_800F8274(0x10);
        sep_a();
        func_800F4064(0x1C);
    L14ef60:
        for (;;) {
            func_800F6DE8();
            func_800F89D4(0x10);
            func_800F5DD4();
            if (poll_go(0x202) != 0)
                continue;
            break;
        }
        row_done();
        func_800F9410();
        func_800F89D4(0x10);
        sep();
        row_prep_close();
    L14EFC8:
        cell_step();
        poll_t(5);
        if (io_just() == 0)
            continue;
        break;
    }
    goto L14F0AC;
L14EFF0:
    txt_set_cur();
    io_poll(3);
    if (io_just() == 0)
        return;
    row_prep(0x20);
    func_800F658C();
    func_800F922C();
    wnd_open(0xC);
L14F030:
    for (;;) {
        func_800F6BE0();
        func_800F87DC(0x202);
        if (poll_go_cur() != 0)
            continue;
        break;
    }
    func_800F9410();
    func_800F81B0();
    func_800F81B0();
    sep();
    row_prep_close();

L14F0AC:
    return;
}
