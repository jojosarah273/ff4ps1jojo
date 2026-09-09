/* FF4 source-port — interpreted module for func_80128750.
 * Ground truth: src/func_80128750.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern void func_800F654C(u32 v0);
extern void func_800F824C(u32 v0);
void func_80128750(void) {
    latch(0xB8);
    cell_put(0x93);
    latch(0x88);
    cell_put(0x99);
    latch(0x58);
    cell_put(0x9F);
    latch(0xFF);
    cell_put(0x94);
    cell_put(0x9A);
    cell_put(0xA0);;
}
