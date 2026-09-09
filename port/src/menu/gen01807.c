/* FF4 source-port — interpreted module for func_800F7500.
 * Ground truth: src/func_800F7500.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u16 *D_8019ED58;
void draw_pad(u16 v) { *D_8019ED58 = v; }
