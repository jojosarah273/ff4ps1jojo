/* FF4 source-port — interpreted module for func_80137B18.
 * Ground truth: src/func_80137B18.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u16 *D_80199230;
void func_80137B18(void)
{
    func_80123FB4();
    midrow_paint_c();
    func_801266F0();
    anim_noop();
    sep();
    func_801387D8();
    label(0x17FC);
    func_80138730();
    func_80127408();
    midrow_paint_a();
    draw_pad(*D_80199230);
    battle_rows_29();
    config_row_q18();
    midrow_paint_c();
    latch(1);
    txt_draw(0x1B9A);
}
