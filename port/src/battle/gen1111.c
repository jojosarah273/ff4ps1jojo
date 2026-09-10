/* FF4 source-port — interpreted module for battle_c3c_b04_b9c_gate_c98_rows_w.
 * Ground truth: src/battle_c3c_b04_b9c_gate_c98_rows_w.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_c3c_b04_b9c_gate_c98_rows_w(void)
{
    /* battle: 3C3C/3B04/3B9C gate; 80141C98 rows with 0x40/0x80
       variants; linear. */
    cell_state_of();
    cell_state_of();
    cell_peek_cur();
L141c2c:
    for (;;) {
        draw_pad_cur();
        battle_c3c_a70_b04_rows_ea8_s1_v1();
        draw_pad(0x40);
        battle_c3c_a70_b04_rows_ea8_s1_v1();
        draw_pad(0x80);
        battle_c3c_a70_b04_rows_ea8_s1_v1();
        return;
    }
}
