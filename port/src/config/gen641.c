/* FF4 source-port — interpreted module for rows_x4e_x41_windows_x7fa_text_d0.
 * Ground truth: src/rows_x4e_x41_windows_x7fa_text_d0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void rows_x4e_x41_windows_x7fa_text_d0(void)
{
    /* rows: 0x4E/0x41 windows, 0x7FA text, 801224D0 row; loop
       L1388B4 on 3F94(3AB4(0x4E))/5C64(0x202) gates. */
    cell_put(0x4E);
    row_sel_cell_cur();
    row_sel_cell2_cur();
    cell_poke0(cell_state(0x4E));
    battle_put43();
    cell_put(0x4E);
    row_prep(0x20);
    cell_put_hi9(0x4F);
    row_read2(0x41);
    draw_pad(0x7FA);
    sep_a();
L1388b4:
    for (;;) {
        cell_peek0(cell_0xf3ab4(0x4E));
        cell_peek_cur();
        cell_inc_cell(0x4E);
        poll_pair_cur();
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    row_prep_close();
    return;
}
