/* FF4 source-port — interpreted module for battle_cast_flow_c_gates_l1504a8_s.
 * Ground truth: src/battle_cast_flow_c_gates_l1504a8_s.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_cast_flow_c_gates_l1504a8_s(void)
{
    /* battle cast flow: 8007259C gates, L1504A8 spin loop, then the
       stat block (8E50/4264/81B0 cells) and the L150578 scan loop
       with 5D24/5B8C(2) latch. */
    wnd_open(0x40);
    tail_cur();
    latch(0x7E);
    wnd_open_cur();
    cell_cursor_dec();
    row_open();
    row_sync();
    page_cur();
    row_open();
L1504a8:
    for (;;) {
        txt_set_cur();
        if (gate(2) != 0)
            goto L1504D0;
        func_8007259C();
    }
L1504D0:
    row_close();
    tail_cur();
    row_done();
    row_close();
    row_close2();
    txt_draw_cur();
    label_cur();
    cell_pull60();
    wnd_open(0x40);
    label_cur();
    row_prep(0x20);
    row_read2();
    cell_pos_mask();
    cell_put_hi9();
    sep();
    row_prep_close();
    row_page(1);
    txt_draw_cur();
L150578:
    for (;;) {
        page_paint2_cur();
        func_8007259C();
        cell_dec_bank();
        if (poll_go(2) != 0)
            goto L150600;
        row_prep(0x20);
        cell_push9();
        sep_a();
        cell_pos_fwd(0x40);
        cell_pull9_hi();
        cell_push9();
        sep_a();
        cell_pos_fwd(0x20);
        cell_pull9_hi();
        sep();
        row_prep_close();
    }
L150600:
    return;
}
