/* FF4 source-port — interpreted module for func_8012E844.
 * Ground truth: src/func_8012E844.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8012E844(void)
{
    /* party-form/formation screen: 0x1D/0x1F/0x23/0x25/0x21 stat cells
       (3A70/54D4/3F38(3A70(...)) row reads), 8012EAC0 commit; three
       nested loops (L2E8EC outer, L2E90C inner, L2E9CC tail). */
    tail(0x1D);
    tail(0x1F);
    row_prep(0x20);
    func_800F55C0(0x1340);
    if (io_just() == 0)
        goto L2E8AC;
    sep_a();
    func_800F4064(0xFA);
    goto L2E8BC;
L2E8AC:
    sep_a();
    func_800F4064(0x5E);
L2E8BC:
    func_800F8274(0x21);
    row_done2();
    row_done2();
    func_800F8274(0x25);
    row_prep_close();
    cell_step();
L2e8ec:
    for (;;) {
        draw_pad(2);
        page(0x1F);
        cell_step();
        tail(0x23);
    L2e90c:
        for (;;) {
            func_800F6E30(0x1F);
            if (gate(2) != 0)
                goto L2E9CC;
            func_800F3A70(0x1F);
            if (io_press(cell_state_of()) == 0)
                goto L2E9CC;
            step2();
            func_800F66D8(0x1F);
            sep_a();
            cell_poke0(func_800F3A70(0x23));
            io_poll(0x64);
            if (io_go() != 0)
                goto L2E9D4;
            func_800F8A18(0x23);
            latch_cur();
            func_800F82EC(0x1F);
            poll_pair_cur();
            func_800F82EC(0x1F);
        L2E9CC:
            step2();
        L2E9D4:
            step2();
            row_prep(0x20);
            sep_a();
            cell_peek0(cell_state(0x1F));
            func_800F5520(cell_state(0x25));
            row_prep_close();
            if (io_just() == 0)
                continue;
            break;
        }
        row_prep(0x20);
        func_800F62F0(0x1F);
        func_800F62F0(0x1F);
        row_prep_close();
        page(0x1F);
        if (func_800F56AC(cell_state(0x21)) == 0)
            continue;
        break;
    }
    page(0x1D);
    row_open();
    func_8012EAC0();
    row_close();
    tail(0x1D);
    func_8012EAC0();
    return;
}
