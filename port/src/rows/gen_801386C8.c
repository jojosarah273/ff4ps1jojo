/* FF4 source-port — interpreted module for fn_1x386c8.
 * Ground truth: src/fn_1x386c8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u8 D_801D7D68[];
void fn_1x386c8(void)
{
    fn_1x266a0();
    shop_row_kick_f0();
    fn_1x25a64();
    battle_mode_dispatch((u32)D_801D7D68, 0x300, 0, -1);
    func_80123A70();
    config_row_q18();
    anim_noop();
    fn_1x26590();
}
