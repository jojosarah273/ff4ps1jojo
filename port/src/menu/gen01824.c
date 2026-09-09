/* FF4 source-port — interpreted module for func_800F654C.
 * Ground truth: src/func_800F654C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u8 *D_8019ED40;
void latch(u8 v) { *D_8019ED40 = v; }
