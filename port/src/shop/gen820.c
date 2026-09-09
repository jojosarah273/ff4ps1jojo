/* FF4 source-port — interpreted module for func_801623F8.
 * Ground truth: src/func_801623F8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"



extern void func_80062B08(void);
extern void func_801532D4(void);
void func_801623F8(void) {
    latch(0x5);
    txt_draw(0x26D2);
    cell_clear_bank(0x33C4);
    func_80062B08();
    func_801532D4();
    latch(0x3A);
    txt_draw(0x34CA);
    latch(0xF);
    txt_draw(0x34C8);
    latch(0x10);
    txt_draw(0x34C7);;
}
