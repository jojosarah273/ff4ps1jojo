/* FF4 source-port — interpreted module for func_80132010.
 * Ground truth: src/func_80132010.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80132010(void)
{
    /* ability header: 0x1B8B text, 0x4E/0x50/0x49/0x48/0x4E windows,
       801224D0/801321B4 rows; 6434(2) gate. */
    cell_cursor_dec();
    func_801224D0();
    txt_cell(0x1B8B);
    if (gate(2) != 0)
        return;
    func_801321B4();
    tail(0x4E);
    open_row(0x50);
    cell_push_c8_sel(0x4E);
    cell_cursor_dec();
    cell_tick_and(0x49);
    cell_pull_c8_bank(0x4E);
    row_close2();
    cell_tick_and(0x48);
    cell_tick_or(cell_bank_sel(0x4E));
    cell_state_of();
    cell_pull_c8_bank(0x4E);
    row_close2();
    return;
}
