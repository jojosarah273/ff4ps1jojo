/* FF4 source-port — interpreted module for func_8014B454.
 * Ground truth: src/func_8014B454.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8014B454(void)
{
    /* battle item cell: 0x49/0x8 windows, 8014B294/801490CC/8014B5A8/
       80141FEC/800953F4 rows; 8058(0x10) gate. */
    draw_pad_cur();
    func_8014B294();
    page_open_cur();
    row_open();
    latch(8);
    txt_draw_cur();
    page_open_cur();
    label_cur();
    row_page(0x49);
    row_sel_cell_cur();
    txt_cell_cur();
    sep_a();
    cell_poke0(cell_state_of());
    txt_draw_cur();
    txt_cell_cur();
    sep_b();
    cell_pos_back(0x10);
    txt_draw_cur();
    func_801490CC();
    func_8014B5A8();
    func_80141FEC();
    row_close();
    label_cur();
    page_open_cur();
    label_cur();
    latch(8);
    txt_draw_cur();
    func_801490CC();
    func_8014B5A8();
    func_800953F4();
    return;
}
