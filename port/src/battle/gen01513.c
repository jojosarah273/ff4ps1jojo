/* FF4 source-port — interpreted module for battle_key_x42_on_c0_latch_x42_int.
 * Ground truth: src/battle_key_x42_on_c0_latch_x42_int.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u8 *D_8019ED40;
void battle_key_x42_on_c0_latch_x42_int(void)
{
    /* battle: key 0x42; on 53C0()==0 latch 0x42 into D40. */
    io_poll(0x42);
    if (io_go() == 0)
        D_8019ED40[0] = 0x42;
}
