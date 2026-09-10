/* FF4 source-port — interpreted module for func_8010E338.
 * Ground truth: src/func_8010E338.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern void func_800FC548(void);

void func_8010E338(void) {
    func_800FC548();
    battle_godtext_a();
    cell_flags_clr4();
    latch(0);
    txt_draw(0x2100);
    latch(0x81);
    txt_draw(0x4200);;
}
