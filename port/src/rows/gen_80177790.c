/* FF4 source-port — interpreted module for battle_anim_register_gates_route_f.
 * Ground truth: src/battle_anim_register_gates_route_f.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_anim_register_gates_route_f(void)
{
    /* battle anim: register gates route 80198058/80197FB8 vs the
       80194518/801947B8/80182AF0 row; ends 80197208/80195120/
       80197208/80194988 through L177928. */
    /* v0/v1 gates -> L177860 / L177928 */
    angle_from_ratio_quadrant_correcte();
    trig_table_abs_folds();
    /* v1/v0 gates -> L177868 */
    fn_1x94518();
    battle_anim_v0_gates_returns_at_l1();
    battle_anim_v0_v1_v0_gate_tree_b8();
L1778d0:
    for (;;) {
        tex_link_packets();
        event_rows();
        tex_link_packets();
        fn_1x94988();
        break;
    }
    return;
}
