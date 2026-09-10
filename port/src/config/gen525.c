/* FF4 source-port — interpreted module for ability_tab_x1bc6_x1b8b_x16_texts.
 * Ground truth: src/ability_tab_x1bc6_x1b8b_x16_texts.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void ability_tab_x1bc6_x1b8b_x16_texts(void)
{
    /* ability tab: 0x1BC6/0x1B8B/0x16 texts, 0x43 window, 801321B4
       row; 6BE0(9)/87DC(7) latch and 6240(0x1BC9) tail. */
    cell_cursor_dec();
    battle_put43();
    txt_cell(0x1B8B);
    if (gate(2) != 0)
        return;
    fn_1x321b4();
    txt_cell(3);
    if (gate_cur() != 0)
        return;
    row_read(0x7F);
    cell_draw(3);
    txt_cell(0x16);
    cell_put(0x43);
    row_prep(0x20);
    row_read2(0x43);
    row_arm_s_cur();
    row_arm_s2_cur();
    cell_peek0(cell_state(0x43));
    cell_flags_cmp_pos(cell_state_of());
    if (io_go() == 0)
        goto L131DC8;
    cell_sink8_9(9);
L131DC8:
    cell_stamp8_9(7);
    row_prep_close();
    page_paint2(0x1BC9);
    row_close2();
    return;
}
