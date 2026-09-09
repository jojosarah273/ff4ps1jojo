/* FF4 source-port — interpreted module for func_80146980.
 * Ground truth: src/func_80146980.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80146980(void)
{
    /* battle: 3C3C/3B04 gates pick 5410 vs 5480 rows. */
    cell_state_of();
    cell_state_of();
    /* v0 gates -> L146A1C / L146A2C */
    sep_a();
    goto L146A34;
L146A2C:
    sep_b();
    return;
L146A34:
    return;
}
