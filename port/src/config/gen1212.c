/* FF4 source-port — interpreted module for options_c3c_b04_x2000_b04_gates_b6.
 * Ground truth: src/options_c3c_b04_x2000_b04_gates_b6.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void options_c3c_b04_x2000_b04_gates_b6(void)
{
    /* options: 3C3C/3B04(0x2000)/3B04 gates; 8015B6FC rows and the
       regcmp-loop with 80150C38 icon rows. */
    cell_state_of();
    cell_state(0x2000);
    if (cell_state_of() == 0)
        goto L15B474;
    goto L15B48C;
L15B474:
    cell_state_of();
    goto L15B48C;
L15B48C:
    /* v0 gates -> L15B4A4 / L15B4C4 */
L15B4C4:
    /* v0 gate -> L15B544 */
    /* a0/s4 latch -> L15B528 */
    config_status_row_xb5_window_x3303();
L15B544:
    /* v0 gates */
    gpu_driver_run_b();
    /* L15B5AC loop: regcmp latches */
    gpu_driver_run_b();
    return;
}
