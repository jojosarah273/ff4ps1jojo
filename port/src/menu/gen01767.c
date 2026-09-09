/* FF4 source-port — interpreted module for func_800F8C98.
 * Ground truth: src/func_800F8C98.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u8 *volatile D_8019ED60;
void func_800F8C98(u8 *p) { p[0] = D_8019ED60[0]; p[1] = D_8019ED60[1]; }
