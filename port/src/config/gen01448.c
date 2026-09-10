/* FF4 source-port — interpreted module for options_rows_run.
 * Ground truth: src/options_rows_run.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void options_rows_run(void)
{
    /* options: 3C3C/3B04(0x2000) gates; 4x 8015240C + 8015236C
       rows. */
    cell_state_of();
    cell_state(0x2000);
    options_row_run();
    options_row_run();
    options_row_run();
    options_row_run();
    fn_1x5236c();
    return;
}
