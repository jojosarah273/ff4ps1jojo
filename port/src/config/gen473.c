/* FF4 source-port — interpreted module for options_value_row_x3558_x202f_x201.
 * Ground truth: src/options_value_row_x3558_x202f_x201.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void options_value_row_x3558_x202f_x201(void)
{
    /* options value row: 0x3558/0x202F/0x2018 texts, 0xAD/0xA9/0xAA/
       0xAB windows, 8015ABEC/8015254C/8015A56C rows; 6434(2) gate
       picks the 0x3558/0x2018 title. */
    txt_set(0x3558);
    if (gate(2) != 0)
        goto L15A7B4;
    txt_cell(0x202F);
    goto L15A7BC;
L15A7B4:
    txt_cell(0x2018);
L15A7BC:
    cell_put(0xAD);
    row_arm2(cell_state(0xAD));
    row_arm2(cell_state(0xAD));
    sep_b();
    latch(0x2C);
    cell_tick_sub(cell_state(0xAD));
    cell_put(0xA9);
    latch(1);
    cell_pos_back();
    cell_put(0xAA);
    if (io_go() != 0)
        goto L15A844;
    wnd_open(1);
    tail(0xA9);
L15A844:
    options_rows_b();
    page(0xAB);
    label(0x3945);
    wnd_open(6);
    label(0x3947);
    options_b04_x2000_gates_v0_run_l15();
    page_open(0x3949);
    tail(0xAB);
    options_cursor_cells();
    return;
}
