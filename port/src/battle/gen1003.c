/* FF4 source-port — interpreted module for battle_magic_cast_flow_v0_cascades.
 * Ground truth: src/battle_magic_cast_flow_v0_cascades.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_magic_cast_flow_v0_cascades(void)
{
    /* battle magic-cast flow. v0 cascades select the spell-target category;
       a0=1/2/8/3 delay-consts are the target-type ids for each route. */
    cell_state_of();
    cell_state(0x2000);
    cell_state_of();
    cell_state_of();
    if (cell_peek_cur() == 0)
        goto L46B28;
    fn_1x46954();
    goto L46B58;
L46B28:
    fn_1x46954();
L46B58:
    /* v1/v0 gates -> L46BF8 / L46FD4 */
    battle_c3c_b04_gates_pick_vs_rows();
    if (io_go() == 0)
        goto L46FD4;
    goto L46FD4;
L46C34:
    if (battle_rows_c3c_b04_b9c_x1000_gate() != 0)
        goto L46C70;
L46C70:
    /* v0 gates -> L46CC4 / L46F30 */
L46CC4:
    /* v0 gate -> L46CF0 / L46F30 */
    fn_1x46028();
L46D1C:
    battle_rows_x47_x1c_x1e_x22_x20_wi();
    goto L46ED4;
L46D60:
    /* target-category cascade:
       v0->L46DDC | 1->L46ECC | 2->L46ECC | 8->L46ECC | ->L46DEC */
L46DEC:
    /* v0 gates -> L46E14 / L46ED4 */
L46E14:
    /* v0 gate -> L46E38 / L46ED4 */
    battle_c3c_b9c_gates_ac_rows_tails();
    goto L46ED4;
L46EB0:
    /* v0 gate -> L46ED4 */
L46ECC:
L46ED4:
    if (io_go() == 0)
        goto L46F10;
    battle_item_cast_x47_window_gates();
    goto L46F30;
L46F10:
    battle_c3c_b04_b9c_gate_tree_with();
L46F30:
    battle_c3c_b04_gates_row();
    battle_c3c_b04_b9c_gates_s0_v0_v1();
    battle_c3c_b04_gates_pick_vs_rows();
    if (io_go() == 0)
        goto L46F90;
L46F90:
    /* v0/v1/a0 gates -> L46FD4 */
L46FD4:
    return;
}
