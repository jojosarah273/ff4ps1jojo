/* FF4 source-port — interpreted module for battle_rows_b9c_xedb_b04_c3c_gates.
 * Ground truth: src/battle_rows_b9c_xedb_b04_c3c_gates.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_rows_b9c_xedb_b04_c3c_gates(void)
{
    /* battle rows: 3B9C(0xEDB)/3B04/3C3C gates then 9330; 95A0
       close. */
    cell_peek_cur();
    cell_state(0xEDB);
    cell_state_of();
    row_open();
    /* v0 gates -> L10C338 / L10C348 */
    row_close();
    return;
}
