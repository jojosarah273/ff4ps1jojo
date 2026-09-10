/* FF4 source-port — interpreted module for battle_anim_c3c_x300_b04_b9cx2_gat.
 * Ground truth: src/battle_anim_c3c_x300_b04_b9cx2_gat.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_anim_c3c_x300_b04_b9cx2_gat(void)
{
    /* battle anim: 3C3C(0x300)/3B04/3B9Cx2 gates; 9330 row then
       95A0 close. */
    cell_state_of();
    cell_state(0x300);
    cell_peek_cur();
    cell_peek_cur();
    row_open();
    row_close();
    return;
}
