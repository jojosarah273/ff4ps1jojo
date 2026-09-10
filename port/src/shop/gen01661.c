/* FF4 source-port — interpreted module for battle_prep_x118_x_xf0_bytes_at_bu.
 * Ground truth: src/battle_prep_x118_x_xf0_bytes_at_bu.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_prep_x118_x_xf0_bytes_at_bu(void)
{
    /* battle prep: 0x118 x 0xF0 bytes at buffer(0x300). */
    u8 *buf = (u8 *)cell_state(0x300);
    s32 i;
    for (i = 0; i < 0x118; i++)
        buf[i] = 0xF0;
}
