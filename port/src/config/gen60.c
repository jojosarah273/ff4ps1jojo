/* FF4 source-port — interpreted module for func_8013BD04.
 * Ground truth: src/func_8013BD04.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8013BD04(void)
{
    /* battle summon/party-cast screen: 0x41 window + 0x48/0x45 rows;
       outer/ inner loops (L3BD24/L3BD54) with 6D70/54D4 confirm gates;
       L3BE64 advance loop (80134948), L3BF38 wait loop, and the
       8013C4B4/8013C44C/801210AC/801263F0/8011FF40 commit chain. */
    cell_fmt2(0x41);
    latch(8);
    cell_put(0x48);
L3bd24:
    for (;;) {
        func_800F6D70();
        if (gate(2) != 0)
            goto L3BE24;
        latch(0x30);
        cell_put(0x45);
        page(0x41);
    L3bd54:
        for (;;) {
            func_800F6D70();
            if (io_press(cell_state_of()) == 0)
                goto L3BDFC;
            func_800F6D70();
            sep_a();
            cell_poke0(cell_state_of());
            io_poll(0x64);
            if (io_go() != 0)
                goto L3BDFC;
            cell_draw(0x1441);
            latch_cur();
            func_800F8960();
            func_800F8960();
            goto L3BE24;
        L3BDFC:
            cell_step();
            cell_step();
            poll_pair(0x45);
            if (poll_go(0x202) != 0)
                continue;
            break;
        }
    L3BE24:
        step2();
        step2();
        poll_pair(0x48);
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    latch(8);
    cell_put(0x45);
    cell_fmt2(0x41);
L3be64:
    for (;;) {
        func_800F6D70();
        if (gate(2) != 0)
            goto L3BEE4;
        latch_cur();
        row_sync();
        func_80134948();
        row_done();
        io_poll_cur();
        if (io_just() == 0)
            goto L3BEE4;
        row_prep(0x20);
        func_800F6DE8();
        func_800F87DC(0x1440);
        row_read2(0x41);
        func_800F89D4();
        row_prep_close();
    L3BEE4:
        step2();
        step2();
        poll_pair(0x45);
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    draw_pad(8);
    page(0x41);
L3bf38:
    for (;;) {
        sep_a();
        cell_poke0(cell_state_of());
        cell_step();
        cell_step();
        poll_pair_cur();
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    func_8013C4B4();
    io_poll_cur();
    if (io_just() == 0)
        goto L3BFE4;
    key_page(0x60);
    func_8013C44C();
    func_8011F684();
    func_801210AC();
    func_801263F0();
    func_8011FF40();
    return;
L3BFE4:
    func_8013BFFC();
    return;
}
