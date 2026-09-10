/* FF4 source-port — interpreted module for battle_stat_row_twin_x100b_gate_x1.
 * Ground truth: src/battle_stat_row_twin_x100b_gate_x1.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_stat_row_twin_x100b_gate_x1(void)
{
    /* battle stat row (twin): 0x100B gate, 0x100F/0x1011 cells,
       80174F0C/80117DF8/8011EA5C; loops L118D80/L118E48. */
    battle_tick_text();
    io_poll(0xFE);
    if (io_just() != 0)
        goto L118E40;
    cell_put(0x18);
    open_row(0x19);
    latch(0xA);
    cell_put(0x1A);
    open_row(0x1B);
    fn_1x74f0c();
    wnd_open_cur();
L118d80:
    for (;;) {
        txt_cell(0x1003);
        if (gate(0x80) != 0)
            goto L118E10;
        row_prep(0x20);
        cell_sink8_9(0x100B);
        sep_a();
        cell_peek0(cell_state(0x30));
        cell_flags_cmp_pos(cell_state_of());
        if (io_go() == 0)
            goto L118DF8;
        cell_sink8_9(0x100D);
    L118DF8:
        cell_stamp8_9(0x100B);
        row_sync2_cur();
        row_prep_close();
    L118E10:
        rows_swap44_54();
        poll_t(0x140);
        if (io_just() == 0)
            continue;
        break;
    }
    battle_wndfx_run();
    return;
L118E40:
    wnd_open_cur();
L118e48:
    for (;;) {
        txt_cell(0x1003);
        if (gate(0x80) != 0)
            goto L118E88;
        row_prep(0x20);
        cell_sink8_9(0x100D);
        cell_stamp8_9(0x100B);
        row_sync2_cur();
        row_prep_close();
    L118E88:
        rows_swap44_54();
        poll_t(0x140);
        if (io_just() == 0)
            continue;
        break;
    }
    battle_wndfx_run();
    return;
}
