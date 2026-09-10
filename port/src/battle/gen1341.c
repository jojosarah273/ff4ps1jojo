/* FF4 source-port — interpreted module for func_8011EC44.
 * Ground truth: src/func_8011EC44.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8011EC44(void)
{
    /* ability wrapper: 8016EA9C/80123D3C/8017F8F8x3 in the L11ECD0
       loop with 801225C0/80126610/80122114; 0x1A65 text; v1/v0
       latch back to L11EC58. */
L11ec58:
    for (;;) {
        func_8016EA9C();
        func_80123D3C();
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
            func_801225C0();
            battle_row_88();
            func_80122114();
            /* v1/v0 latch -> L11EC58 */
            continue;
        }
        break;
    }
    return;
}
