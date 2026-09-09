/* FF4 source-port — interpreted module for func_8016E500.
 * Ground truth: src/func_8016E500.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8016E500(void) { cell_put(0xA9); func_800F8F74(0x1E00); func_800F8F74(0x1E01); func_800F8F74(0x1E05); row_page(0xA9); txt_draw(0x1E01); latch(0x1); txt_draw(0x1E00); func_80169128(); }
