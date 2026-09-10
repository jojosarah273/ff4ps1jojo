/* FF4 source-port — interpreted module for battle_command_maps_preps_with_beq.
 * Ground truth: src/battle_command_maps_preps_with_beq.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_command_maps_preps_with_beq(void)
{
    /* battle command maps: 80191838/80191858/80192858 preps with
       beqz/v0 gates routing through 801928E8/80191620/801919B4/
       80191878/80192738/801917B8/80192728/8018F688; returns at
       L1922C0. */
    fn_1x91838();
    if (fn_1x91858() == 0)
        goto L192138;
    fn_1x92858();
L192138:
    if (fn_1x92718() == 0)
        goto L1921A0;
    event_spin_wait();
    if (register_only_stub_xc_see_asm_for_1916(1) != 0)
        goto L192170;
    event_twin_b44_rows_on_s2_fp_s0();
    event_spin_wait();
    return;
L192170:
    event_twin_b44_rows_on_s2_fp_s0();
    event_spin_wait();
    return;
L1921A0:
    register_only_stub_xc_see_asm_for_1916(9);
    event_b44_rows_on_s3_t0_s0_fp();
    func_80192738(2);
    event_b44_rows_on_s3_t0_s0_fp();
    if (fn_1x92718() == 0)
        goto L19222C;
    func_801917B8();
    func_80192728();
    /* s0/v0 gate -> L192218 */
    event_b44_rows_on_s3_t0_s0_fp(0xE);
    if (fn_1x92718() != 0)
        goto L192248;
L19222C:
    return;
L192248:
    func_80192738();
    fn_1x8f688();
    if (fn_1x91858() == 0)
        goto L192298;
    fn_1x92858(6);
L192298:
    event_twin_b44_rows_on_s2_fp_s0();
    event_spin_wait();
    return;
}
