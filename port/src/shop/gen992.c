/* FF4 source-port — interpreted module for fn_1x66db8.
 * Ground truth: src/fn_1x66db8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u16 *D_8019ED54;
void fn_1x66db8(void)
{
    u16 v;
    u16 e;
    v = *D_8019ED54;
    cell_poke0(cell_peek_v(0xF1F3F, v) + v);
    cell_tick_or(cell_peek_v(cell_0xf3ab4(3), 0));
    v = *D_8019ED54;
    e = *(u16 *)(cell_state(0) + v);
    cell_tick_or(cell_state(e));
    shop_c3c_b04_x2000_x2_gates_s0_v0();
}
