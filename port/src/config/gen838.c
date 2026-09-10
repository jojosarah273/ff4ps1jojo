/* FF4 source-port — interpreted module for ability_rows_x1bc9_x1b93_texts_xe8.
 * Ground truth: src/ability_rows_x1bc9_x1b93_texts_xe8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void ability_rows_x1bc9_x1b93_texts_xe8(void)
{
    /* ability rows: 0x1BC9/0x1B93 texts, 0xE8/0x43 windows,
       80124EAC row; 6BE0(0xB)/87DC(0xB) cells; gate 6434(0x202). */
    txt_set(0x1BC9);
    if (gate(0x202) != 0)
        return;
    row_page(0xE8);
    cell_cur_save54_b();
    txt_set(0x1B93);
    cell_put(0x43);
    row_prep(0x20);
    cell_sink8_9(0xB);
    sep_a();
    cell_peek0(cell_state(0x43));
    cell_stamp8_9(0xB);
    row_prep_close();
    return;
}
