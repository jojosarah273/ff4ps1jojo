/* FF4 source-port — interpreted module for config_sub_options_x5d_x5e_windows.
 * Ground truth: src/config_sub_options_x5d_x5e_windows.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void config_sub_options_x5d_x5e_windows(void)
{
    /* config sub-options: 0x5D/0x5E windows, 0x34 window; 8012CB34 page,
       8012AE00 save-load, 8012AB18 detail row; loop L12A8C0. */
    open_row(0x5D);
    open_row(0x5E);
L12a8c0:
    for (;;) {
        cell_push_c8_lo(0x5A);
        if (gate(2) != 0)
            goto L12AA20;
        io_poll(0xFF);
        if (io_just() == 0)
            goto L12A900;
        config_dead_key_row_x5d_window_x45();
        goto L12AA20;
    L12A900:
        draw_pad(1);
        cell_push_c8_sel(0x5A);
        if (gate(2) != 0)
            goto L12AA20;
        cell_put(0x5C);
        latch_cur();
        stat_sync();
        cell_push_c8_lo(0x5A);
        io_poll(0xED);
        if (io_just() != 0)
            goto L12A970;
        io_poll(0xFE);
        if (io_just() == 0)
            goto L12A9A0;
    L12A970:
        txt_set(0x1BC9);
        if (gate(2) != 0)
            goto L12A9A0;
        row_page(0x34);
        cell_put(0xDB);
        goto L12A9B0;
    L12A9A0:
        cell_push_c8_lo(0x5A);
        save_load_status_screen_x1b1f_canc();
    L12A9B0:
        row_prep(0x20);
        row_read2(0x5D);
        row_sel2_cur();
        row_arm_s_cur();
        row_arm_s2_cur();
        cell_pos_fwd(4);
        row_prep_close();
        config_status_row_x1bcc_gate_x5d_x();
    L12AA20:
        row_prep(0x20);
        cell_inc_cell(0x5A);
        cell_inc_cell(0x5A);
        row_prep_close();
        key_page(0x5D);
        row_page(0x5D);
        if (io_press(cell_state(0xE1)) == 0)
            continue;
        break;
    }
    return;
}
