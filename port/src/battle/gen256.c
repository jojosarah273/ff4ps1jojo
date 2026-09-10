/* FF4 source-port — interpreted module for shop_battle_dialog_xc5_xe9_xd1_win.
 * Ground truth: src/shop_battle_dialog_xc5_xe9_xd1_win.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void shop_battle_dialog_xc5_xe9_xd1_win(void)
{
    /* shop/battle dialog: 0xC5/0xE9/0xD1 windows, 0xFE6 name text,
       0x774/0x834 stat rows, 80109378 cursor math; four loops
       (L10A344/L10A398/L10A444/L10A4A4). */
    row_page(0xC5);
    if (gate(2) != 0)
        goto L10A2E0;
    open_row(0xC5);
    goto L10A590;
L10A2E0:
    row_page(0xD1);
    if (gate(2) == 0)
        goto L10A590;
    wnd_open_cur();
    txt_set(0xFE6);
    if (gate_cur() == 0)
        goto L10A590;
    if (func_800F73E0(2) != 0)
        goto L10A384;
L10A340:
    for (;;) {
    L10A344:
        for (;;) {
            cell_push_c8();
            cell_step();
            io_poll_cur();
            if (io_just() != 0)
                break;
        }
        poll_pair_cur();
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
L10A384:
    tail(0x3D);
    open_row(7);
L10a398:
    for (;;) {
        cell_push_c8();
        cell_step();
        key_page(7);
        io_poll_cur();
        if (io_just() != 0)
            break;
    }
    poll_pair(7);
    cell_state(7);
    latch(0x14);
    sep_b();
    cell_tick_sub(cell_state(7));
    cell_tick_half();
    cell_put(6);
    goto L10A434;
L10A424:
    latch_cur();
    cell_put(6);
L10A434:
    wnd_open_cur();
    latch(0xFF);
L10a444:
    for (;;) {
        cell_draw(0x774);
        cell_draw(0x834);
        cell_step();
        poll_t(0x28);
        if (io_just() != 0)
            break;
    }
    page(0x3D);
    row_page(6);
L10a4a4:
    for (;;) {
        cell_push_c8();
        cell_step();
        if (battle_key_x42_on_c0_latch_x42_int() != 0)
            cell_pull_c8(0x774);
        else
            cell_pull_c8(0x834);
    L10A540:
        step2();
        latch_cur();
        stat_sync();
        poll_pair(7);
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    latch(1);
    cell_put(0xE9);
L10A590:
    return;
}
