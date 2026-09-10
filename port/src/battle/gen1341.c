/* FF4 source-port — interpreted module for ability_wrapper_ea9c_d3c_f8f8x3_in.
 * Ground truth: src/ability_wrapper_ea9c_d3c_f8f8x3_in.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void ability_wrapper_ea9c_d3c_f8f8x3_in(void)
{
    /* ability wrapper: 8016EA9C/80123D3C/8017F8F8x3 in the L11ECD0
       loop with 801225C0/80126610/80122114; 0x1A65 text; v1/v0
       latch back to L11EC58. */
L11ec58:
    for (;;) {
        func_8016EA9C();
        fn_1x23d3c();
        battle_mode_dispatch();
        battle_mode_dispatch();
        battle_mode_dispatch();
    L11ecd0:
        for (;;) {
            battle_anim_gate_a();
            cb_slot15();
            cell_set50_from54();
            cell_set50_from54();
            label(0x1A65);
            config_confirm_screen_x7e_window_x();
            battle_row_88();
            fn_1x22114();
            /* v1/v0 latch -> L11EC58 */
            continue;
        }
        break;
    }
    return;
}
