/* FF4 source-port — interpreted module for rows_twin_of_x_f0_b0_texts_linear.
 * Ground truth: src/rows_twin_of_x_f0_b0_texts_linear.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void rows_twin_of_x_f0_b0_texts_linear(void)
{
    /* rows (twin of 80100894): 4x 65F0 + 85B0 texts; linear. */
    row_prep(0x20);
    cell_sink89_c();
    cell_sink89_c();
    cell_sink89_c();
    cell_sink89_c();
    cell_pull9_hi(0x700);
    cell_pull9_hi(0x702);
    cell_pull9_hi(0x704);
    cell_pull9_hi(0x706);
    row_sync2_cur();
    row_prep_close();
    return;
}
