/* FF4 source-port — interpreted module for config_x1ff_ec_gates_x14_x20_windo.
 * Ground truth: src/config_x1ff_ec_gates_x14_x20_windo.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void config_x1ff_ec_gates_x14_x20_windo(void)
{
    /* config: 4264(0x1FF)/64EC gates, 0x14/0x20 windows, 8016D028
       rows; 6180(0x202)/5480 close. */
    row_prep(0x20);
    cell_pos_mask(0x1FF);
    row_arm_s_cur();
    cell_push9_bank();
    if (cell_flags_pos0() != 0)
        goto L16DC78;
    cell_put_hi9(0x10);
    shop_c3c_gates_returns_at_l16d0f4();
    row_prep(0x20);
    row_read2(0x14);
    row_done2();
    if (cell_0xf6180() != 0)
        goto L16DCB0;
L16DC50:
    cell_put_hi9(0x14);
    sep();
    row_prep_close();
    sep_b();
    return;
L16DC78:
    row_prep(0x20);
    cell_put_hi9(0x10);
    shop_c3c_gates_returns_at_l16d0f4();
    row_prep(0x20);
    row_read2(0x14);
    if (cell_flags_pos0(0x80) != 0)
        goto L16DC50;
L16DCB0:
    cell_put_hi9(0x14);
    sep();
    row_prep_close();
    sep_a();
    return;
}
