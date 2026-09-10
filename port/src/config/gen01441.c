/* FF4 source-port — interpreted module for options_c3c_b04_x2000_x2_gates_a0.
 * Ground truth: src/options_c3c_b04_x2000_x2_gates_a0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void options_c3c_b04_x2000_x2_gates_a0(void)
{
    /* options: 3C3C/3B04(0x2000)x2 gates; a0 latches; 80152CDC/
       8015310C/8015C54C rows; returns at L15BD1C. */
    cell_state_of();
    cell_state(0x2000);
    /* a0/v0 latch chain -> L15BC04/L15BC38 */
    options_rows_run();
    option_value_copy();
    fn_1x5c54c();
    /* a0/v1 latch -> L15BD1C */
    return;
}
