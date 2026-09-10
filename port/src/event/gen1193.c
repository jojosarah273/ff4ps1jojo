/* FF4 source-port — interpreted module for battle_ae8_gate_ca18_ae28_rows_dcd.
 * Ground truth: src/battle_ae8_gate_ca18_ae28_rows_dcd.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_ae8_gate_ca18_ae28_rows_dcd(void)
{
    /* battle: 80188AE8(8) gate; 8018CA18/8018AE28 rows; 8018DCD8
       (0x4000) + 8018DFA0/8018DFC4/8018DFE8/80191858 block;
       8018E4E8 x2 gate; 80188C58(1)/8018F688/801890E4 tail with
       a1/a0 latch; returns at L188194. */
    fn_1x88ae8(8);
    if (io_just() != 0)
        return;
    if (io_just() != 0)
        return;
    if (io_just() != 0)
        return;
    fn_1x8ca18();
    event_v0_gate_tree_b1c8_spins_l18a();
    /* v0/v1 latch -> L187F58 */
    queue_command_state_reset_header_s(0x4000);
    if (io_just() == 0)
        goto L187FAC;
L187FAC:
    fn_1x8dfa0();
    fn_1x8dfc4();
    fn_1x8dfe8();
    fn_1x91858();
    if (event_gate_ladders_with_jr_v0_sub() == 0)
        goto L1880C0;
    event_gate_ladders_with_jr_v0_sub();
L1880C0:
    battle_ae8_gate_v1_t0_a3_t0_a1(1);
    fn_1x8f688();
    battle_ae8_gate_d28_a1_a0_latch();
    /* a1/a0 latch -> L18818C */
    return;
}
