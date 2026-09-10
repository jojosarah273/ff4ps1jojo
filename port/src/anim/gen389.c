/* FF4 source-port — interpreted module for row_picker_xcc_window_x1003_gate_e.
 * Ground truth: src/row_picker_xcc_window_x1003_gate_e.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void row_picker_xcc_window_x1003_gate_e(void)
{
    /* row picker: 0xCC window + 0x1003 gate; 80175E88 header; then the
       4248(0x20)/0x10/0x8 row-gate ladder and 80170458 row render. */
    row_page(0xCC);
    if (gate(0x202) == 0)
        return;
    open_row(0xCC);
    fn_1x75e88();
    txt_cell(0x1003);
    row_read(0x20);
    if (sel(2) != 0)
        goto L175F60;
    latch(0xF);
    goto L175FD0;
L175F60:
    txt_cell(0x1003);
    row_read(0x10);
    if (sel(2) != 0)
        goto L175F90;
    latch(0xE);
    goto L175FD0;
L175F90:
    txt_cell(0x1003);
    row_read(8);
    if (sel(2) != 0)
        goto L175FC0;
    latch(0x10);
    goto L175FD0;
L175FC0:
    txt_cell(0x1001);
    row_read(0x1F);
L175FD0:
    cell_put(6);
    row_sel_cell_cur();
    sep_a();
    cell_poke0(cell_state(6));
    sep_a();
    row_open_w(0x80);
    cell_put(0x4B);
    open_row(0x4A);
    wnd_open(0x4000);
    tail(0x4C);
    wnd_open(0x200);
    tail(0x4E);
    latch(0x1B);
    cell_put(0x49);
    shop_row_render_x2115_x4300_x4301();
    return;
}
