/* FF4 source-port — interpreted module for selection_screen_driver_register_g.
 * Ground truth: src/selection_screen_driver_register_g.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void selection_screen_driver_register_g(void)
{
    /* selection-screen driver. Register gates (a0/a1/a3/v1/s3) are the
       cursor/state comparisons; s3 = selection index. All calls are the
       inventory-family screens: 8017DB7C / 8017A208 / 8017E794 /
       8017DC28 / 8017AAC4 / 801825B8. */
    if (battle_anim_dispatch_a0_v0_v0_gate_cur() != 0) { } /* regcmp a3/v0, a0/v0 -> L8017D12C */
    battle_anim_jr_a0_dispatch_gate_tr();
    goto L7D1D0;
    /* L8017D12C: a3 gate */
    battle_anim_v1_v0_v0_gates_spin_lo();
    battle_anim_jr_a0_dispatch_gate_tr();
    return;
L7D1D0:
    /* v0 gates (0/1) -> converge L7D230 */
    if (battle_anim_dispatch_a0_v0_v0_gate_cur() == 0)
        goto L7D7A8;
L7D28C:
    for (;;) {
        battle_anim_jr_a0_dispatch_gate_tr();
        battle_anim_spin_loop_l17e8cc_gate_cur();
        if (battle_anim_dispatch_a0_v0_v0_gate_cur() == 0)
            break;
        /* v1/s3 gates -> loop */
    }
    if (battle_anim_dispatch_a0_v0_v0_gate_cur() == 0)
        goto L7D7A8;
    battle_anim_jr_a0_dispatch_gate_tr();
    battle_anim_spin_loop_l17e8cc_gate_cur();
    /* a0/v0 gate: 8017DC28 vs 8017DB7C branch */
    battle_anim_dispatch_twin_a0_v0_v0(1);
    goto L7D444;
    battle_anim_dispatch_a0_v0_v0_gate_cur();
L7D444:
    /* s5/v1 gate: 8017AAC4 vs 8017A208 branch */
    func_8017AAC4();
    goto L7D4E4;
    battle_anim_jr_a0_dispatch_gate_tr();
L7D4E4:
    battle_anim_spin_loop_l17e8cc_gate_cur();
    /* a0/s3 gate -> L7D54C */
L7D54C:
    for (;;) {
        /* s3/v0 + v1/v0 gates -> L7D57C / L7D5E0 */
        battle_anim_dispatch_twin_a0_v0_v0();
        func_8017AAC4();
        goto L7D624;
        battle_anim_dispatch_a0_v0_v0_gate_cur();
        battle_anim_jr_a0_dispatch_gate_tr();
        battle_anim_spin_loop_l17e8cc_gate_cur();
        if (battle_anim_dispatch_a0_v0_v0_gate_cur() == 0)
            break;
        /* v1/s3 gates -> loop */
    }
L7D624:
    battle_anim_spin_loop_l17e8cc_gate_cur();
    /* v0/v1 gates -> L7D684 */
    if (battle_anim_dispatch_a0_v0_v0_gate_cur() == 0)
        goto L7D7A8;
L7D6D4:
    for (;;) {
        battle_anim_jr_a0_dispatch_gate_tr();
        battle_anim_spin_loop_l17e8cc_gate_cur();
        battle_anim_spin_loop_l17e8cc_gate_cur();
        if (battle_anim_dispatch_a0_v0_v0_gate_cur() == 0)
            break;
        /* v0/s3 gates -> loop */
    }
    return;
L7D7A8:
    return;
}
