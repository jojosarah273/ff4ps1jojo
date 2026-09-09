/* FF4 source-port — interpreted module for func_800F6488.
 * Ground truth: src/func_800F6488.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u8 *D_8019ED40;
void func_800F6488(u8 *p) { D_8019ED40[0] = p[0]; D_8019ED40[1] = p[1]; }
