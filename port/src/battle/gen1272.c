/* FF4 source-port — interpreted module for battle_row_linear.
 * Ground truth: src/battle_row_linear.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_row_linear(void)
{
    /* battle rows: 3C3C/3B9C/9330/95A0; linear. */
    cell_state_of();
    cell_peek_cur();
    row_open();
    row_close();
    return;
}
