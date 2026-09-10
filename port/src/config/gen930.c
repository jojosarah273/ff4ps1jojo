/* FF4 source-port — interpreted module for ability_rows_x99_cells_e4_f684_e8.
 * Ground truth: src/ability_rows_x99_cells_e4_f684_e8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void ability_rows_x99_cells_e4_f684_e8(void)
{
    /* ability rows: 0x99 cells, 801395E4/8011F684/801264E8/
       8011F884/801391D4 rows; loop L139554 on 5DA0/5B8C(0x202). */
L139554:
    for (;;) {
        row_prep(0x20);
        cell_dec_cell(0x99);
        cell_dec_cell(0x99);
        row_prep_close();
        cell_cursor_dec();
        ability_rows_x1bb0_x1bb1_texts_x5b();
        midrow_pad88_run();
        config_row_7800();
        row_close2();
        poll_spin();
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    midrow_degen();
    page(2);
    tail_cur();
    fn_1x391d4();
    return;
}
