/* FF4 source-port — interpreted module for fn_1x623f8.
 * Ground truth: src/fn_1x623f8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"



extern void func_80062B08(void);

void fn_1x623f8(void) {
    latch(0x5);
    txt_draw(0x26D2);
    cell_clear_bank(0x33C4);
    func_80062B08();
    fn_1x532d4();
    latch(0x3A);
    txt_draw(0x34CA);
    latch(0xF);
    txt_draw(0x34C8);
    latch(0x10);
    txt_draw(0x34C7);;
}
