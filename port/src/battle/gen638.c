/* FF4 source-port — interpreted module for battle_item_bc_b98c_cac_f4_preps_l.
 * Ground truth: src/battle_item_bc_b98c_cac_f4_preps_l.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_item_bc_b98c_cac_f4_preps_l(void)
{
    /* battle item: 801442BC/8014B98C/80148CAC/800953F4 preps; loop
       L14B738 (6D70(0x29C5)/5A90(5) gates), closes 8014DA2C/8014D568. */
    battle_rows_ef78_prep_loop_l1442e4();
    battle_row_f2a0();
    battle_rows_xf42b_text_x_xaa_bytes();
    func_800953F4();
    txt_set(0x34C2);
    row_read(0x80);
    cell_put_cur();
    open_row(1);
    draw_pad_cur();
L14b738:
    for (;;) {
        cell_push_c8_d58(0x29C5);
        io_poll(0xFF);
        if (io_just() != 0)
            goto L14B7AC;
        cell_push_c8();
        cell_tick_or(cell_state(1));
        cell_put(1);
    L14B7AC:
        step2();
        poll_t(5);
        if (io_just() == 0)
            continue;
        break;
    }
    open_row(2);
    latch(0x3D);
    fn_1x4da2c();
    latch_cur();
    fn_1x4d568();
    return;
}
