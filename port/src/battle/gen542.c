/* FF4 source-port — interpreted module for battle_rows_x4_dc_cell_sets_x7612.
 * Ground truth: src/battle_rows_x4_dc_cell_sets_x7612.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_rows_x4_dc_cell_sets_x7612(void)
{
    /* battle rows: 2x4 87DC cell sets (0x7612-0x77B6 and +2); loop
       L140260 on 5958(0x8C). */
    cell_push9();
    cell_put_hi9();
    sep();
L140260:
    for (;;) {
        row_read2();
        cell_stamp8_9(0x7612);
        cell_stamp8_9(0x769E);
        cell_stamp8_9(0x772A);
        cell_stamp8_9(0x77B6);
        row_read2(2);
        cell_stamp8_9(0x7614);
        cell_stamp8_9(0x76A0);
        cell_stamp8_9(0x772C);
        cell_stamp8_9(0x77B8);
        cell_step();
        cell_step();
        cell_step();
        cell_step();
        poll_t(0x8C);
        if (io_just() == 0)
            continue;
        break;
    }
    sep();
    row_prep_close();
    row_close();
    return;
}
