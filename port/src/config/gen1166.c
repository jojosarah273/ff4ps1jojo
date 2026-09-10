/* FF4 source-port — interpreted module for fn_1x37b18.
 * Ground truth: src/fn_1x37b18.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u16 *D_80199230;
void fn_1x37b18(void)
{
    func_80123FB4();
    midrow_paint_c();
    rows_x100_x1c_x41_windows_f0_x89_c();
    anim_noop();
    sep();
    rows_x4e_x41_windows_x7fa_text_d0();
    label(0x17FC);
    fn_1x38730();
    status_c_header_f0_b0_cells_x_b8();
    midrow_paint_a();
    draw_pad(*D_80199230);
    battle_rows_29();
    config_row_q18();
    midrow_paint_c();
    latch(1);
    txt_draw(0x1B9A);
}
