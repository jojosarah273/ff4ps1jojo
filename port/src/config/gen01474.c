/* FF4 source-port — interpreted module for ability_v1_v0_gates_pick_ee4_f0e8.
 * Ground truth: src/ability_v1_v0_gates_pick_ee4_f0e8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void ability_v1_v0_gates_pick_ee4_f0e8(void)
{
    /* ability: v1/v0 gates pick 80135EE4/8018F0E8 or 80135DE4 rows;
       v0 latch closes; returns L135DD4. */
    /* L135C8C: v1/v0 gates -> L135D4C / L135CC0 / L135DBC */
    if (io_just() == 0)
        goto L135CC0;
    ability_x_cell_rows_linear();
    event_jr_t2_dispatch_slots_f158_f1();
    /* v0/v1 latch -> L135D18 / L135DB8 */
    goto L135DB8;
L135CC0:
    /* v1/v0 gates -> L135CD8 / L135D4C / L135DBC */
    ability_x_cell_rows_linear();
    event_jr_t2_dispatch_slots_f158_f1();
    goto L135DB8;
L135D4C:
    ability_x_rows_v0_gates_pick_l135e();
    /* a0/v1 latch -> L135DAC */
L135DB8:
    if (io_just() != 0)
        goto L135DD4;
L135DD4:
    return;
}
