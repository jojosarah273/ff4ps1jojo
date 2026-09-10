/* FF4 source-port — interpreted module for battle_rows_xb2_window_c98_db4_f3c.
 * Ground truth: src/battle_rows_xb2_window_c98_db4_f3c.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_rows_xb2_window_c98_db4_f3c(void)
{
    /* battle rows: 0xB2 window, 80108330/80107C98/80105DB4/
       80107F3C/80109A28 rows, 0x9D5 text; 6434(2) gate via
       801175C4/8011EA5C. */
    battle_tick_text();
    cell_put(0xB2);
    fn_1x08330();
    config_sub_screen();
    fn_1x05db4();
    config_confirm_loop_a();
    wnd_fx_7d_b();
    fn_1x09a28();
    row_page(0xDB);
    if (gate(2) != 0)
        return;
    fn_1x175c4();
    cell_step();
    label(0x9D5);
    battle_wndfx_run();
    return;
}
