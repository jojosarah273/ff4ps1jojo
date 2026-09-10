/* FF4 source-port — interpreted module for battle_cast_flow_d528_c_preps_loop.
 * Ground truth: src/battle_cast_flow_d528_c_preps_loop.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_cast_flow_d528_c_preps_loop(void)
{
    /* battle cast flow: 8014D528/8016762C preps, loops L1662EC
       (5A90(0x40)) and L16638C (70174/4120(0x202) rows), 80166458
       row; 0x5E window + 0x100 const. */
    latch(0x5E);
    battle_row_d568();
    sep();
    label_cur();
    label_cur();
    label_cur();
    wnd_open(0x10);
    fn_1x6762c();
    sep();
    /* v1/v0 gate -> L1662E0 */
    cell_state_of();
L1662E0:
    row_prep(0x20);
L1662ec:
    for (;;) {
        row_arm_s_cur();
        cell_pos_mask(0x100);
        cell_stamp8_9_b();
        cell_step();
        step2();
        step2();
        poll_t(0x40);
        if (io_just() == 0)
            continue;
        break;
    }
    sep();
    row_prep_close();
L16638c:
    for (;;) {
        func_80070174();
        page_paint2_cur();
        txt_set_cur();
        row_read(7);
        cell_push_c8();
        cell_pull60();
        battle_cast_rows_x2_x4_windows_x76();
        txt_set_cur();
        row_read(3);
        if (sel(0x202) != 0)
            continue;
        page_open_cur();
        cell_step();
        label_cur();
        poll_t(0x80);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
