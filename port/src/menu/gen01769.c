/* FF4 source-port — interpreted module for func_800F8C5C.
 * Ground truth: src/func_800F8C5C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u8 *volatile D_8019ED5C;
void func_800F8C5C(u8 *p) { p[0] = D_8019ED5C[0]; p[1] = D_8019ED5C[1]; }
