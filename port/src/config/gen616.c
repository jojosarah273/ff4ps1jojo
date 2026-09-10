/* FF4 source-port — interpreted module for ability_main_b9a_text_gate_be4_a5f.
 * Ground truth: src/ability_main_b9a_text_gate_be4_a5f.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void ability_main_b9a_text_gate_be4_a5f(void)
{
    /* ability main: 1B9A text gate + 1BE4/1A5F/1A3C rows; calls
       80126E08 (sub-dispatcher); loop L126BE4 on 6EA9C/56AC(!=0)
       with 80128480/80128B3C/801793F8/80128264/8011F864 rows. */
    row_open2();
    row_open3();
    func_80178BB4();
L126be4:
    for (;;) {
        func_8016EA9C();
        latch(0x7E);
        cell_cursor_dec();
        row_pad();
        cell_clear_bank(0x1B9A);
        wnd_open(0x1BE4);
        if (cell_flags_cmp(cell_state(0x1A5F)) != 0)
            goto L126C54;
        label(0x1A5F);
        cell_clear_bank(0x1A3C);
        fn_1x28264();
        func_8011F864();
    L126C54:
        shop_status_x48_x49_windows_c_rows();
        battle_status_x_b9c_checks_on_x1be();
        battle_anim_e8_fc_preps_v1_v0_gate();
        /* v1/v0 gate -> L126C88 */
        cell_clear_bank(0x1A3C);
        /* v1/v0 gate -> L126CA4 */
        func_800FF0AC();
        shop_status_x48_x49_windows_c_rows();
        battle_status_x_b9c_checks_on_x1be();
        if (io_go() != 0)
            goto L126D00;
        ability_status_screen_s0_cursor_v0();
        /* v1/v0 gate -> L126CF8 */
        battle_row_88();
        func_80178BB4();
        continue;
        rows_x48_window_row_loop_l126d58_x();
    L126D00:
        fn_1x22114();
        sep();
        stat_sync();
        cell_push_c8_cur(0x17FB);
        cell_cursor_read();
        row_pad();
        return;
    }
    rows_x48_window_row_loop_l126d58_x();
    return;
}
