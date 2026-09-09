/* FF4 source-port — interpreted module for options_row_run.
 * Ground truth: src/options_row_run.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void options_row_run(void)
{
    /* options: 3C3C(0x394D)/3B04 rows; 971C close. */
    cell_state_of();
    cell_state(0x394D);
    sep();
    return;
}
