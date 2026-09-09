/* FF4 source-port — interpreted module for func_800F710C.
 * Ground truth: src/func_800F710C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u8 *D_8019ED5C;
void func_800F710C(u8 *p) { D_8019ED5C[0] = p[0]; D_8019ED5C[1] = p[1]; }
