/* FF4 source-port — interpreted module for func_80149394.
 * Ground truth: src/func_80149394.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80149394(void)
{
    /* battle spell-detail: 3F38(3B04) row pair draws (L1493BC loop),
       gate on 54D4(3B04)/53C0 with 658C/4264/8274 stat cells
       (L14940C loop); tail 5DA0/5D24 closes (L14955C). */
    cell_clear_bank();
    cell_clear_bank();
    txt_set_cur();
    cell_put_cur();
L1493bc:
    for (;;) {
        txt_set_cur();
        sep_a();
        cell_poke0(cell_state_of());
        txt_draw_cur();
        txt_set_cur();
        sep_a();
        cell_poke0(cell_state_of());
        txt_draw_cur();
    L14940c:
        for (;;) {
            if (io_press(cell_state_of()) == 0)
                goto L14955C;
            txt_set_cur();
            if (gate(0x80) != 0)
                goto L14947C;
            row_prep(0x20);
            row_read2();
            cell_cursor_ret2();
            cell_push9();
            cell_pos_mask(0xFF);
            cell_put_hi9();
            goto L1494BC;
        L14947C:
            row_prep(0x20);
            row_read2();
            cell_cursor_ret2();
            cell_push9();
            cell_put_hi9();
        L1494BC:
            cell_push9();
            sep_a();
            cell_peek0(cell_state_of());
            cell_pull9_hi();
            cell_cursor_adv2();
            cell_put_hi9();
            sep();
            row_prep_close();
            txt_set_cur();
            sep_a();
            cell_poke0(cell_state_of());
            txt_draw_cur();
            txt_set_cur();
            sep_b();
            cell_tick_sub(cell_state_of());
            txt_draw_cur();
        }
L14955C:
        poll_pair_cur();
        if (poll_go(0x202) != 0)
            continue;
        cell_dec_bank();
        if (poll_go(0x202) != 0)
            goto L14959C;
        sep_b();
        return;
    L14959C:
        sep_a();
        return;
    }
}
