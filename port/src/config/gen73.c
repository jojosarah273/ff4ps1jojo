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
    cell_flags_cmp3(0x1340);
    if (io_just() == 0)
        goto L2E8AC;
    sep_a();
    cell_pos_fwd(0xFA);
    goto L2E8BC;
L2E8AC:
    sep_a();
    cell_pos_fwd(0x5E);
L2E8BC:
    cell_put_hi9(0x21);
    row_done2();
    row_done2();
    cell_put_hi9(0x25);
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
            cell_push_c8_lo(0x1F);
            if (gate(2) != 0)
                goto L2E9CC;
            cell_bank_sel(0x1F);
            if (io_press(cell_state_of()) == 0)
                goto L2E9CC;
            step2();
            cell_push_c8_sel(0x1F);
            sep_a();
            cell_poke0(cell_bank_sel(0x23));
            io_poll(0x64);
            if (io_go() != 0)
                goto L2E9D4;
            func_800F8A18(0x23);
            latch_cur();
            cell_pull_c8_bank(0x1F);
            poll_pair_cur();
            cell_pull_c8_bank(0x1F);
        L2E9CC:
            step2();
        L2E9D4:
            step2();
            row_prep(0x20);
            sep_a();
            cell_peek0(cell_state(0x1F));
            cell_flags_cmp_pos(cell_state(0x25));
            row_prep_close();
            if (io_just() == 0)
                continue;
            break;
        }
        row_prep(0x20);
        cell_inc_cell(0x1F);
        cell_inc_cell(0x1F);
        row_prep_close();
        page(0x1F);
        if (cell_flags_cmp(cell_state(0x21)) == 0)
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
