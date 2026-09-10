/* FF4 source-port — interpreted module for battle_row_x89_x7a_windows_c_bc_ea.
 * Ground truth: src/battle_row_x89_x7a_windows_c_bc_ea.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_row_x89_x7a_windows_c_bc_ea(void)
{
    /* battle row: 0x89/0x7A windows, 80110024/8011050C/801100BC/
       8011EA5C rows; loops L11020C (row read) and L11029C (7F48
       detail). */
    fn_1x10024();
    wnd_open(0x20);
    tail(0x89);
    open_row(0x7A);
L11020c:
    for (;;) {
        fn_1x1050c();
        open_row(0x28);
        row_page(0x89);
        cell_tick_half();
        sep_a();
        row_open_w(0x20);
        cell_put(0x29);
        latch(0x20);
        cell_put(0x2B);
        battle_rows_x3b0_x3b1_x410_x411_ce();
        page(0x89);
        cell_set50_from54();
        tail(0x89);
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    wnd_open_cur();
    tail(0x89);
    open_row(0x7A);
L11029c:
    for (;;) {
        fn_1x1050c();
        latch_cur();
        sep_b();
        cell_tick_sub(cell_state(0x89));
        cell_put(0x28);
        latch(0x20);
        cell_put(0x29);
        cell_put(0x2B);
        battle_rows_x3b0_x3b1_x410_x411_ce();
        page(0x89);
        cell_step();
        tail(0x89);
        poll_t(0x60);
        if (io_just() == 0)
            continue;
        break;
    }
    battle_wndfx_run();
    return;
}
