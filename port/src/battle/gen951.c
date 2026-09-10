/* FF4 source-port — interpreted module for fn_1x0e338.
 * Ground truth: src/fn_1x0e338.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x0e338(void) {
    cell_0xfc548();
    battle_godtext_a();
    cell_flags_clr4();
    latch(0);
    txt_draw(0x2100);
    latch(0x81);
    txt_draw(0x4200);;
}
