/* FF4 source-port — interpreted module for func_8012E160.
 * Ground truth: src/func_8012E160.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8012E160(void)
{
    latch(1);
    cell_tick_xor(cell_state(5800));
    txt_draw(5800);
    key_page(132);
    func_80122A9C();
    func_80122538();
    func_80126528();
    battle_state_dc400();
}
