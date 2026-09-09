/* FF4 source-port — interpreted module for func_80106830.
 * Ground truth: src/func_80106830.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"


extern void func_80169128(void);
void func_80106830(void) { latch(0x11); txt_draw(0x1E00); func_80169128(); }
