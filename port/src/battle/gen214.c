/* FF4 source-port — interpreted module for fn_1x444fc.
 * Ground truth: src/fn_1x444fc.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x444fc(void)
{
    sep();
L4544:
    for (;;) {
        cell_push_c8();
        cell_pull_c8(0x342);
        cell_step();
        poll_t(0xC);
        if (io_just() != 0)
            break;
    }
    sep();
    txt_set(0x6CC0);
    if (gate(2) != 0)
        goto L45dc;
    txt_set(0xF446);
    if (gate(2) != 0)
        goto L45f4;
L45cc:
    latch(0x7F);
    goto L45fc;
L45dc:
    txt_set(0xF446);
    if (gate(2) != 0)
        goto L45cc;
L45f4:
    latch(0x3F);
L45fc:
    cell_pull_c8(0x343);
    step2();
    step2();
    step2();
    step2();
    poll_t(0x120);
    if (io_just() == 0)
        goto L4544;
    sep();
L467c:
    for (;;) {
        cell_push_c8();
        cell_pull_c8(0xEBE6);
        cell_push_c8();
        cell_pull_c8(0xEC76);
        sep();
        cell_pull_c8(0xEC77);
        cell_step();
        cell_step();
        poll_t(0x18);
        if (io_just() != 0)
            break;
    }
    sep();
    txt_set(0xF446);
    cell_pull_c8(0xEBE7);
    step2();
    step2();
    poll_t(0x90);
    if (io_just() == 0)
        goto L467c;
    sep();
L4778:
    for (;;) {
        latch(0xC);
        cell_put(2);
    L4788:
        for (;;) {
            txt_set(0xF446);
            if (gate(0x202) != 0)
                goto L47b4;
            cell_push_c8();
            goto L47c0;
        L47b4:
            cell_push_c8();
        L47c0:
            cell_put_cur();
            cell_push_c8_d58(0xEBE6);
            sep_a();
            cell_poke0(cell_state_of());
            cell_pull_c8(0xEBE6);
            cell_push_c8();
            cell_put_cur();
            cell_push_c8_d58(0xEC76);
            sep_a();
            cell_poke0(cell_state_of());
            cell_pull_c8(0xEC76);
            step2();
            step2();
            poll_pair(2);
            if (poll_go(0x202) != 0)
                continue;
            break;
        }
        cell_step();
        poll_t(6);
        if (io_just() == 0)
            continue;
        break;
    }
    sep();
    for (;;) {
        cell_push_c8(0x1900);
        cell_draw(0xED06);
        cell_step();
        poll_t(6);
        if (io_just() != 0)
            break;
    }
    func_80148DE8();
    sep();
    for (;;) {
        txt_cell(0x1900);
        row_read(7);
        sep_a();
        row_open_w(4);
        cell_draw(0xF1B3);
        cell_draw(0xF1F3);
        battle_rows_twin();
        cell_step();
        poll_t(8);
        if (io_just() != 0)
            break;
    }
    cell_clear_bank(0xF1B3);
    cell_clear_bank(0xF1F3);
    return;
}
