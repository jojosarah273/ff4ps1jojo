/* FF4 source-port — interpreted module for func_800F8160.
 * Ground truth: src/func_800F8160.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u8 *volatile D_8019ED40;
void func_800F8160(u8 *p) { p[0] = D_8019ED40[0]; p[1] = D_8019ED40[1]; }
