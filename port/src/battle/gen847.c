/* FF4 source-port — interpreted module for func_8011FF80.
 * Ground truth: src/func_8011FF80.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8011FF80(void)
{
    /* ability gates: v1/v0 branches route 801360AC / 801360EC+
       80136148 / 8011F320+8011F884+78C4 rows; the 7918(2) read
       loops back to L11FF9C. */
    /* v1/v0 gate (fall-through runs 801360AC) */
    func_801360AC();
L11FF9C:
    /* v1/v0 gate (fall-through runs the 360EC row path) */
    func_801360EC();
    func_80136148();
    row_pad();
    row_done();
    row_close();
    row_close2();
    return;
L11FFF0:
    func_8011F320();
    func_8011F884();
    row_page_cur();
    cell_tick_or(cell_state(1));
    if (ticker_reblend2(2) != 0)
        goto L11FF9C;
    row_pad();
    row_done();
    row_close();
    row_close2();
    /* v1/v0 gate (fall-through runs 80136148) */
    func_80136148();
    return;
}
