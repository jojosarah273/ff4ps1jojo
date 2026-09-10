/* FF4 source-port — interpreted module for config_store_x43_x48_x5e_x5b_x5a_x.
 * Ground truth: src/config_store_x43_x48_x5e_x5b_x5a_x.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void config_store_x43_x48_x5e_x5b_x5a_x(void)
{
    /* config store: 0x43/0x48/0x5E/0x5B/0x5A/0x41 windows, 80120FBC +
       8012FBB0 rows; loops L12FA78 (5DA0(0x5D)/5B8C(0x202)) and
       L12FA88 (5DA0(0x93)/5B8C(0x202)). */
    cell_put(0x43);
    config_row_b600();
    row_prep(0x20);
    row_read2(0x43);
    cell_put_hi9();
    row_arm_s_cur();
    row_arm_s2_cur();
    cell_pos_fwd2(cell_addr16(0x48));
    cell_pos_fwd(0x1560);
    cell_put_hi9(0x60);
    row_prep_close();
    open_row(0x5E);
    open_row(0x5B);
    latch(8);
    cell_put(0x5A);
    cell_fmt2(0x41);
L12fa78:
    for (;;) {
        latch(3);
        cell_put(0x5D);
    L12fa88:
        for (;;) {
            row_prep(0x20);
            row_read2(0x5D);
            row_scan_cur();
            row_arm_s(8);
            row_sync2_cur();
            sep_b();
            cell_pos_sub16(cell_addr16(0x5A));
            scratch_swap_status();
            cell_pos_mask();
            row_sel2_cur();
            sep_a();
            cell_pos_fwd2(cell_add16());
            row_prep_close();
            cell_push_c8_sel(0x60);
            fn_1x2fbb0();
            step2();
            poll_pair(0x5D);
            if (poll_go(0x202) != 0)
                continue;
            break;
        }
        poll_pair(0x5A);
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    row_prep_close();
    return;
}
