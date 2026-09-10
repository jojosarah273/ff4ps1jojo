/* FF4 source-port — interpreted module for fn_1x44344.
 * Ground truth: src/fn_1x44344.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x44344(void)
{
    battle_row_d548();
    page_paint2(0xF327);
    wnd_open(0x12);
    fn_1x4202c();
    cell_clear_bank(0xF327);
    wnd_open(0x20);
    do {
        gpu_driver_run();
        battle_cast_x6cc0_test_d4_gates_re();
        cell_set50_from54();
    } while (poll_go(0x202) != 0);
    latch(0x62);
    cell_pull_c8_lo(0x2107);
    sep();
    txt_draw(0xF133);
    latch(0x80);
    txt_draw(0xF134);
    for (;;) {
        gpu_driver_run();
        txt_set(0xF133);
        io_poll(0x10);
        if (io_go() != 0) {
            latch(2);
            cell_pull_c8_lo(0x2130);
            cell_pull_c8_lo(0x212D);
            latch(0x41);
            cell_pull_c8_lo(0x2131);
            fn_1x4c8cc();
        }
        open_row(2);
        latch(3);
        cell_put(6);
        do {
            txt_set(0xF133);
            battle_rows_x28_x4_x2b_x5_x2_windo();
            txt_set(0xF134);
            battle_rows_x28_x4_x2b_x5_x2_windo();
            poll_pair(6);
        } while (poll_go(0x202) != 0);
        page_paint2(0xF133);
        page_paint2(0xF134);
        txt_set(0xF133);
        io_poll(0x40);
        if (io_just() != 0)
            break;
    }
    latch(0x1E);
    cell_pull_c8_lo(0x212C);
    page_paint2(0xF483);
}
