/* FF4 source-port — interpreted module for options_rows_b.
 * Ground truth: src/options_rows_b.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void options_rows_b(void)
{
    /* options: 3C3C/3B04(0x2000) + 8015236C/8015254C rows. */
    cell_state_of();
    cell_state(0x2000);
    func_8015236C();
    func_8015254C();
    return;
}
