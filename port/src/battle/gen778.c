/* FF4 source-port — interpreted module for func_80110024.
 * Ground truth: src/func_80110024.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80110024(void)
{
    latch(16);
    txt_draw(2767);
    wnd_open(16);
    label(2770);
    cell_clear_bank(2765);
    cell_clear_bank(2766);
    battle_row_e5();
    func_8011053C();
    wnd_open(48);
    tail(239);
    wnd_open(176);
    tail(241);
    wnd_open(176);
    tail(243);
    wnd_open(65504);
    tail(245);
}
