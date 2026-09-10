/* FF4 source-port — interpreted module for ability_gates_v1_v0_branches_route.
 * Ground truth: src/ability_gates_v1_v0_branches_route.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void ability_gates_v1_v0_branches_route(void)
{
    /* ability gates: v1/v0 branches route 801360AC / 801360EC+
       80136148 / 8011F320+8011F884+78C4 rows; the 7918(2) read
       loops back to L11FF9C. */
    /* v1/v0 gate (fall-through runs 801360AC) */
    ability_when_the_panel_cell_is_run();
L11FF9C:
    /* v1/v0 gate (fall-through runs the 360EC row path) */
    fn_1x360ec();
    fn_1x36148();
    row_pad();
    row_done();
    row_close();
    row_close2();
    return;
L11FFF0:
    midrow_pad88();
    midrow_degen();
    row_page_cur();
    cell_tick_or(cell_state(1));
    if (ticker_reblend2(2) != 0)
        goto L11FF9C;
    row_pad();
    row_done();
    row_close();
    row_close2();
    /* v1/v0 gate (fall-through runs 80136148) */
    fn_1x36148();
    return;
}
