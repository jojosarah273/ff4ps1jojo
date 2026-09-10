/* FF4 source-port — interpreted module for battle_rows_x6_x1000_gate_d4_c3c_l.
 * Ground truth: src/battle_rows_x6_x1000_gate_d4_c3c_l.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_rows_x6_x1000_gate_d4_c3c_l(void)
{
    /* battle rows: 0x6/0x1000 gate, 54D4(3C3C(6)) latch; loop
       L119320 ends with 0xCC window + 0x1703 text. */
    battle_tick_text();
    cell_put(6);
    wnd_open_cur();
    draw_pad_cur();
L119320:
    for (;;) {
        cell_push_c8_d58(0x1000);
        row_read(0x1F);
        if (io_press(cell_state(6)) != 0)
            goto L1193B4;
        row_prep(0x20);
        sep_a();
        cell_pos_fwd(0x40);
        row_sync2_cur();
        row_prep_close();
        cell_step();
    }
L1193B4:
    txt_draw_cur();
    latch(1);
    cell_put(0xCC);
    wnd_fx_7d();
    return;
}
