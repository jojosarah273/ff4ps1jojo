/* FF4 source-port — interpreted module for ability_rows_x1b8b_x16_texts_x43_w.
 * Ground truth: src/ability_rows_x1b8b_x16_texts_x43_w.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void ability_rows_x1b8b_x16_texts_x43_w(void)
{
    /* ability rows: 0x1B8B/0x16 texts, 0x43 window, 801224D0 +
       80132178 rows; gates 6434(2/0x80). */
    cell_cursor_dec();
    battle_put43();
    txt_cell(0x1B8B);
    if (gate(2) != 0)
        return;
    row_page(0x43);
    func_80132178();
    txt_cell(3);
    if (gate(0x80) != 0)
        return;
    row_prep(0x20);
    cell_sink8_9(9);
    cell_stamp8_9(7);
    row_prep_close();
    row_close2();
    return;
}
