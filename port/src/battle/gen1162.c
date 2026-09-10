/* FF4 source-port — interpreted module for battle_c3c_a70_b04_rows_ea8_s1_v1.
 * Ground truth: src/battle_c3c_a70_b04_rows_ea8_s1_v1.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_c3c_a70_b04_rows_ea8_s1_v1(void)
{
    /* battle: 3C3C(4)/3A70/3B04 rows; 6EA8 + s1/v1 latch route to
       5410. */
    cell_state_of();
    cell_bank_sel(4);
    cell_state_of();
    cell_push_c8_b4();
    /* s1/v1 latch -> L141D1C / L141D40 */
    sep_a();
    return;
}
