/* FF4 source-port — interpreted module for func_8010FEEC.
 * Ground truth: src/func_8010FEEC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8010FEEC(void)
{
    /* battle row: 0x89/0x7A windows, 80110024/8011050C/801100BC/
       8011EA5C; loops L10FF14 and L10FF8C on 5958(0x20). */
    func_80110024();
    wnd_open_cur();
    tail(0x89);
    open_row(0x7A);
L10ff14:
    for (;;) {
        func_8011050C();
        open_row(0x28);
        row_page(0x89);
        cell_put(0x29);
        cell_put(0x2B);
        func_801100BC();
        page(0x89);
        cell_step();
        tail(0x89);
        poll_t(0x20);
        if (io_just() == 0)
            continue;
        break;
    }
    wnd_open_cur();
    tail(0x89);
    open_row(0x7A);
L10ff8c:
    for (;;) {
        func_8011050C();
        open_row(0x28);
        row_page(0x89);
        cell_tick_half();
        sep_a();
        row_open_w(0x20);
        cell_put(0x29);
        latch(0x20);
        cell_put(0x2B);
        func_801100BC();
        page(0x89);
        cell_step();
        tail(0x89);
        poll_t(0x20);
        if (io_just() == 0)
            continue;
        break;
    }
    battle_wndfx_run();
    return;
}
